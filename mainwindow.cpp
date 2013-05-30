#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialognouveauclient.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlRelation>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QDebug>
#include "ui_dialognouveauclient.h"
#include <QDate>
#include <QString>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QString("Gestion de Commande ~ Kineton"));
    setWindowIcon(QIcon("./add.png"));
    //Prise en compte de l'UTF8
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));


    // Connexion à la DB
    baseCommerciale=QSqlDatabase::addDatabase("QMYSQL");
    baseCommerciale.setHostName("127.0.0.1");
    baseCommerciale.setUserName("gsb_user");
    baseCommerciale.setPassword("ini01");
    baseCommerciale.setDatabaseName("gestionCommerciale");
    if(baseCommerciale.open())
    {
    ui->statusBar->setStatusTip("Connexion avec la base réussie.");
    on_actionGestion_de_Commandes_triggered();


    //Recherche automatique lors de la saisie
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(monSlot()));
    connect(ui->lineEdit_clientNom, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
    connect(ui->lineEdit_clientPrenom, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
    connect(ui->lineEdit_clientVille, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));
    connect(ui->lineEdit_clientTel, SIGNAL(textChanged(QString)), this, SLOT(monSlot()));

    //On met la date actuelle
    ui->dateEdit->setDate(QDate::currentDate());
    }
    else
    {
        QMessageBox::warning(this, this->windowTitle(),
        "Le serveur est momentanement indisponnible.\r\nVeuillez prendre contact avec le technicien réseau.","Ok"
        );
        close();
    }
    modelClient=new QSqlTableModel(this);
    modelProduits=new QSqlTableModel(this);
    modelClient->setTable("Client");
    modelClient->select();
    modelProduits->select();

//On affiche les produits dès le départ

    modelProduits=new QSqlRelationalTableModel(this, baseCommerciale);
    modelProduits->setTable("Produit");
    modelProduits->setEditStrategy(QSqlTableModel::OnRowChange);

    //On effectue un select sur la table
    modelProduits->select();
    //modelProduits->removeColumn(0);
    modelProduits->setHeaderData(0, Qt::Horizontal, ("Num"));
    modelProduits->setHeaderData(1, Qt::Horizontal, ("Produit"));
    modelProduits->setHeaderData(2, Qt::Horizontal, ("Prix/U"));
    modelProduits->setHeaderData(3, Qt::Horizontal, ("Quantité"));
    modelProduits->setHeaderData(4, Qt::Horizontal, ("Image"));
    modelProduits->setHeaderData(5, Qt::Horizontal, ("Taux TVA"));

    //on associe le modele à sa vue
    ui->tableView_in->setModel(modelProduits);
    //vue...montre-toi...
    ui->tableView_in->show();
    //adapter les largeurs des colonnes par rapport au contenu
    ui->tableView_in->resizeColumnsToContents();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_action_Quitter_triggered()
{
    if (QMessageBox::question(this, this->windowTitle(), tr("Êtes-vous sûr de vouloir quitter l'application ?"),
        QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Cancel ))
    {
    this->close();
    }

}

void MainWindow::on_action_Gestion_du_catalogue_triggered()
{
    //On affiche la table affectée
    modelProduits=new QSqlRelationalTableModel(this, baseCommerciale);
    modelProduits->setTable("Produit");
    modelProduits->setEditStrategy(QSqlTableModel::OnRowChange);

    //On effectue un select sur la table
    modelProduits->select();
    //modelProduits->removeColumn(0);
    modelProduits->setHeaderData(0, Qt::Horizontal, ("Num"));
    modelProduits->setHeaderData(1, Qt::Horizontal, ("Produit"));
    modelProduits->setHeaderData(2, Qt::Horizontal, ("Prix/U"));
    modelProduits->setHeaderData(3, Qt::Horizontal, ("Quantité"));
    modelProduits->setHeaderData(4, Qt::Horizontal, ("Image"));
    modelProduits->setHeaderData(5, Qt::Horizontal, ("Taux TVA"));

    //on associe le modele à sa vue
    ui->tableView_in->setModel(modelProduits);
    //vue...montre-toi...
    ui->tableView_in->show();
    //on affiche l'onglet correspondant
    ui->tabWidget_main->setCurrentIndex(0);
    //adapter les largeurs des colonnes par rapport au contenu
    ui->tableView_in->resizeColumnsToContents();

}



void MainWindow::on_pushButton_Nouveau_clicked()
{
      QSqlRecord nouveauProduit=modelProduits->record();
      QSqlQuery maRequete("select max(no)+1 from Produit");
      // Placement sur le premier enregistrement dispo
      maRequete.next();
      //Obtention du prochain numéro de fonction valide
      int numeroProduitOk=maRequete.value(0).toInt();
      nouveauProduit.setValue("no", numeroProduitOk);
      //Mettre la date courante
      modelProduits->insertRecord(-1,nouveauProduit);
}



void MainWindow::on_pushButton_Supprimer_clicked()
{
        int numeroDeLaLigneSelectionnee=ui->tableView_in->selectionModel()->currentIndex().row();
        modelProduits->removeRow(numeroDeLaLigneSelectionnee);

}

void MainWindow::on_actionGestion_de_Commandes_triggered()
{
    modelClient=new QSqlTableModel(this);
    ui->tableView_Client->setModel(modelClient);
    modelClient->setTable("Client");
    modelClient->setEditStrategy(QSqlTableModel::OnRowChange);
    //On effectue un select sur la table
    modelClient->select();
    //vue...montre-toi...
    ui->tableView_Client->show();

    //Affichage des données des Clients
    modelClient->setHeaderData(0, Qt::Horizontal, ("#"));
    modelClient->setHeaderData(1, Qt::Horizontal, ("Nom"));
    modelClient->setHeaderData(2, Qt::Horizontal, ("Prénom"));
    modelClient->setHeaderData(3, Qt::Horizontal, ("Rue"));
    modelClient->setHeaderData(4, Qt::Horizontal, ("CP"));
    modelClient->setHeaderData(5, Qt::Horizontal, ("Ville"));
    modelClient->setHeaderData(6, Qt::Horizontal, ("Téléphone"));
    modelClient->setHeaderData(7, Qt::Horizontal, ("@mail"));

    //on associe le modele à sa vue
    ui->tableView_Client->setModel(modelClient);
    //on affiche l'onglet correspondant
    ui->tabWidget_main->setCurrentIndex(1);
    //adapter les largeurs des colonnes par rapport au contenu
    ui->tableView_Client->resizeColumnsToContents();

    queryClient=new QSqlQueryModel;


    //On déclaire une nouvelle mémoire pour le model Produit
    modelProduits=new QSqlTableModel(this);
    modelProduits->setTable("Produit");

    //On sélectionne la table
    modelProduits->select();

    //Liste des produits dans la combo box
    //------------------------------------
    //On associe d'abord le model à sa vue
    ui->comboBox_Produit->setModel(modelProduits);

    //On désigne la colone de la table de la BDD que l'on souhaite
    ui->comboBox_Produit->setModelColumn(1);

    //On attribut une valeur par défaut à la spinbox quantité
    ui->spinBox_Quantite->setValue(1);
}

void MainWindow::on_action_Cr_er_un_nouveau_client_triggered()
{

    //on affiche l'onglet correspondant
    DialogNouveauClient * formNouveauClient = new DialogNouveauClient(this);

    if (formNouveauClient->exec()==QDialog::Accepted)
    {
        /*
        modelClient=new QSqlRelationalTableModel(this, baseCommerciale);
        modelClient->setTable("Client");
        modelClient->setEditStrategy(QSqlTableModel::OnRowChange);*/
        QSqlRecord nouveauClient = modelClient->record();
        nouveauClient.setValue("no",formNouveauClient->ui->lineEdit_noClient->text());
        nouveauClient.setValue("nom",formNouveauClient->ui->lineEdit_clientNom->text());
        nouveauClient.setValue("prenom",formNouveauClient->ui->lineEdit_clientPrenom->text());
        nouveauClient.setValue("mail",formNouveauClient->ui->lineEdit_clientMail->text());
        nouveauClient.setValue("rue",formNouveauClient->ui->lineEdit_clientRue->text());
        nouveauClient.setValue("ville",formNouveauClient->ui->lineEdit_clientVille->text());
        nouveauClient.setValue("tel",formNouveauClient->ui->lineEdit_clientTel->text());
        nouveauClient.setValue("CP",formNouveauClient->ui->lineEdit_CP->text());

        modelClient=new QSqlTableModel(this);
        modelClient->setTable("Client");
        //On effectue un select sur la table
        modelClient->select();
        ui->tableView_Client->setModel(modelClient);
        modelClient->setEditStrategy(QSqlTableModel::OnRowChange);



        //Affichage des données des Clients
        modelClient->setHeaderData(0, Qt::Horizontal, ("#"));
        modelClient->setHeaderData(1, Qt::Horizontal, ("Nom"));
        modelClient->setHeaderData(2, Qt::Horizontal, ("Prénom"));
        modelClient->setHeaderData(3, Qt::Horizontal, ("Rue"));
        modelClient->setHeaderData(4, Qt::Horizontal, ("CP"));
        modelClient->setHeaderData(5, Qt::Horizontal, ("Ville"));
        modelClient->setHeaderData(6, Qt::Horizontal, ("Téléphone"));
        modelClient->setHeaderData(7, Qt::Horizontal, ("@mail"));

        if(modelClient->insertRecord(-1,nouveauClient))
        {
            qDebug()<<"Client ajouté";
        }
        else
        {
            qDebug()<<"NOOOOO";
        }

    }
}

void MainWindow::on_pushButton_nvClient_clicked()
{

DialogNouveauClient * formNouveauClient = new DialogNouveauClient(this);

if (formNouveauClient->exec()==QDialog::Accepted)
{
    /*
    modelClient=new QSqlRelationalTableModel(this, baseCommerciale);
    modelClient->setTable("Client");
    modelClient->setEditStrategy(QSqlTableModel::OnRowChange);*/
    QSqlRecord nouveauClient = modelClient->record();
    nouveauClient.setValue("no",formNouveauClient->ui->lineEdit_noClient->text());
    nouveauClient.setValue("nom",formNouveauClient->ui->lineEdit_clientNom->text());
    nouveauClient.setValue("prenom",formNouveauClient->ui->lineEdit_clientPrenom->text());
    nouveauClient.setValue("mail",formNouveauClient->ui->lineEdit_clientMail->text());
    nouveauClient.setValue("rue",formNouveauClient->ui->lineEdit_clientRue->text());
    nouveauClient.setValue("ville",formNouveauClient->ui->lineEdit_clientVille->text());
    nouveauClient.setValue("tel",formNouveauClient->ui->lineEdit_clientTel->text());
    nouveauClient.setValue("CP",formNouveauClient->ui->lineEdit_CP->text());

    modelClient=new QSqlTableModel(this);
    ui->tableView_Client->setModel(modelClient);
    modelClient->setTable("Client");
    modelClient->setEditStrategy(QSqlTableModel::OnRowChange);

    //On effectue un select sur la table
    modelClient->select();

    //Affichage des données des Clients
    modelClient->setHeaderData(0, Qt::Horizontal, ("#"));
    modelClient->setHeaderData(1, Qt::Horizontal, ("Nom"));
    modelClient->setHeaderData(2, Qt::Horizontal, ("Prénom"));
    modelClient->setHeaderData(3, Qt::Horizontal, ("Rue"));
    modelClient->setHeaderData(4, Qt::Horizontal, ("CP"));
    modelClient->setHeaderData(5, Qt::Horizontal, ("Ville"));
    modelClient->setHeaderData(6, Qt::Horizontal, ("Téléphone"));
    modelClient->setHeaderData(7, Qt::Horizontal, ("@mail"));

    if(modelClient->insertRecord(-1,nouveauClient))
    {
        qDebug()<<"Client ajouté";
    }
    else
    {
        qDebug()<<"NOOOOO";
    }

}
//on affiche l'onglet correspondant
//ui->tabWidget_main->setCurrentIndex(2);
}

void MainWindow::monSlot()
{
 QString where="";
 QStringList listeRestrictions;

 if (ui->spinBox->value()!=0)
 {
     listeRestrictions.append(" Client.no like '%"+ui->spinBox->text()+"%'");
 }

 if (ui->lineEdit_clientNom->text()!="")
 {
     listeRestrictions.append(" Client.nom like '%"+ui->lineEdit_clientNom->text()+"%'");
 }
 if (ui->lineEdit_clientPrenom->text()!="")
 {
     listeRestrictions.append(" Client.prenom like '%"+ui->lineEdit_clientPrenom->text()+"%'");
 }
 if (ui->lineEdit_clientVille->text()!="")
 {
    listeRestrictions.append(" Client.ville like '%"+ui->lineEdit_clientVille->text()+"%'");
 }
 if (ui->lineEdit_clientTel->text()!="")
 {
     listeRestrictions.append(" Client.tel like '%"+ui->lineEdit_clientTel->text()+"%'");
 }

 if (listeRestrictions.count()>0)
 {
     where=" where"+listeRestrictions.join( "and");
 }
qDebug()<<"CoucouD";
 QString textRequeteClient="SELECT * FROM Client"+where+";";
 qDebug()<<textRequeteClient;
 queryClient->setQuery(textRequeteClient);
   qDebug()<<"Zboub";
 ui->tableView_Client->setModel(queryClient);
 ui->tableView_Client->show();

}

void MainWindow::on_pushButton_Ajouter_clicked()
{

    //On met en place le tableau de commande
ui->tableWidget_Commande->setRowCount(ui->tableWidget_Commande->rowCount()+1);
ui->comboBox_Produit->setModelColumn(0);
QString numeroProduit=QString::number(ui->comboBox_Produit->currentIndex());
QString quantiteProduit=QString::number(ui->spinBox_Quantite->value());
ui->comboBox_Produit->setModelColumn(1);
QString designationProduit=ui->comboBox_Produit->currentText();

QTableWidgetItem * noProduit= new QTableWidgetItem(numeroProduit);
ui->tableWidget_Commande->setItem(ui->tableWidget_Commande->rowCount()-1,0,noProduit);

QTableWidgetItem * desProduit= new QTableWidgetItem(designationProduit);
ui->tableWidget_Commande->setItem(ui->tableWidget_Commande->rowCount()-1,1,desProduit);

QTableWidgetItem * qteProduit= new QTableWidgetItem(quantiteProduit);
ui->tableWidget_Commande->setItem(ui->tableWidget_Commande->rowCount()-1,2,qteProduit);

}

void MainWindow::on_pushButton_Annuler_clicked()
{

    int nbCellule=ui->tableWidget_Commande->rowCount()+1;

    for(int passage=0;passage<nbCellule; passage++)
    {
    ui->tableWidget_Commande->removeRow(passage);
    }
    ui->tableWidget_Commande->removeRow(0);
    for(int passage=0;passage<nbCellule; passage++)
    {
    ui->tableWidget_Commande->removeRow(passage);
    }
    ui->tableWidget_Commande->removeRow(0);
}

void MainWindow::on_pushButton_Effacer_clicked()
{
    int laCelluleQuiVaBien = ui->tableWidget_Commande->currentRow();
    ui->tableWidget_Commande->removeRow(laCelluleQuiVaBien);
}

void MainWindow::on_pushButton_Valider_clicked()
{

}
