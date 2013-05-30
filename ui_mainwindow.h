/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 24 10:56:07 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Nouvelle_commande;
    QAction *action_Quitter;
    QAction *action_Gestion_du_catalogue;
    QAction *actionGestion_de_Commandes;
    QAction *action_Cr_er_un_nouveau_client;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTabWidget *tabWidget_main;
    QWidget *tab;
    QTableView *tableView_in;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Nouveau;
    QPushButton *pushButton_Supprimer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QTableView *tableView_Client;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_clientNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_clientPrenom;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *lineEdit_clientVille;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *lineEdit_clientTel;
    QPushButton *pushButton_nvClient;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QTableWidget *tableWidget_Commande;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Valider;
    QPushButton *pushButton_Effacer;
    QPushButton *pushButton_Annuler;
    QLabel *label_2;
    QLabel *label_nomPrenom;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QComboBox *comboBox_Produit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpinBox *spinBox_Quantite;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_Ajouter;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Evenement;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(669, 599);
        action_Nouvelle_commande = new QAction(MainWindow);
        action_Nouvelle_commande->setObjectName(QString::fromUtf8("action_Nouvelle_commande"));
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        action_Gestion_du_catalogue = new QAction(MainWindow);
        action_Gestion_du_catalogue->setObjectName(QString::fromUtf8("action_Gestion_du_catalogue"));
        actionGestion_de_Commandes = new QAction(MainWindow);
        actionGestion_de_Commandes->setObjectName(QString::fromUtf8("actionGestion_de_Commandes"));
        action_Cr_er_un_nouveau_client = new QAction(MainWindow);
        action_Cr_er_un_nouveau_client->setObjectName(QString::fromUtf8("action_Cr_er_un_nouveau_client"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tabWidget_main = new QTabWidget(centralWidget);
        tabWidget_main->setObjectName(QString::fromUtf8("tabWidget_main"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView_in = new QTableView(tab);
        tableView_in->setObjectName(QString::fromUtf8("tableView_in"));
        tableView_in->setGeometry(QRect(0, 20, 641, 371));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 420, 580, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Nouveau = new QPushButton(layoutWidget);
        pushButton_Nouveau->setObjectName(QString::fromUtf8("pushButton_Nouveau"));

        horizontalLayout->addWidget(pushButton_Nouveau);

        pushButton_Supprimer = new QPushButton(layoutWidget);
        pushButton_Supprimer->setObjectName(QString::fromUtf8("pushButton_Supprimer"));

        horizontalLayout->addWidget(pushButton_Supprimer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget_main->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView_Client = new QTableView(tab_2);
        tableView_Client->setObjectName(QString::fromUtf8("tableView_Client"));
        tableView_Client->setGeometry(QRect(0, 110, 641, 131));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 451, 111));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 0, 378, 108));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_clientNom = new QLineEdit(layoutWidget1);
        lineEdit_clientNom->setObjectName(QString::fromUtf8("lineEdit_clientNom"));

        horizontalLayout_2->addWidget(lineEdit_clientNom);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_clientPrenom = new QLineEdit(layoutWidget1);
        lineEdit_clientPrenom->setObjectName(QString::fromUtf8("lineEdit_clientPrenom"));

        horizontalLayout_3->addWidget(lineEdit_clientPrenom);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        lineEdit_clientVille = new QLineEdit(layoutWidget1);
        lineEdit_clientVille->setObjectName(QString::fromUtf8("lineEdit_clientVille"));

        horizontalLayout_5->addWidget(lineEdit_clientVille);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        lineEdit_clientTel = new QLineEdit(layoutWidget1);
        lineEdit_clientTel->setObjectName(QString::fromUtf8("lineEdit_clientTel"));

        horizontalLayout_6->addWidget(lineEdit_clientTel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        pushButton_nvClient = new QPushButton(layoutWidget1);
        pushButton_nvClient->setObjectName(QString::fromUtf8("pushButton_nvClient"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/add/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_nvClient->setIcon(icon);

        verticalLayout_3->addWidget(pushButton_nvClient);


        horizontalLayout_7->addLayout(verticalLayout_3);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(480, 10, 162, 31));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_14->addWidget(label_5);

        dateEdit = new QDateEdit(layoutWidget2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_14->addWidget(dateEdit);

        tableWidget_Commande = new QTableWidget(tab_2);
        if (tableWidget_Commande->columnCount() < 3)
            tableWidget_Commande->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Commande->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Commande->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Commande->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Commande->setObjectName(QString::fromUtf8("tableWidget_Commande"));
        tableWidget_Commande->setGeometry(QRect(10, 300, 511, 131));
        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(540, 320, 101, 116));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Valider = new QPushButton(layoutWidget3);
        pushButton_Valider->setObjectName(QString::fromUtf8("pushButton_Valider"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/add/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Valider->setIcon(icon1);

        verticalLayout->addWidget(pushButton_Valider);

        pushButton_Effacer = new QPushButton(layoutWidget3);
        pushButton_Effacer->setObjectName(QString::fromUtf8("pushButton_Effacer"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/add/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Effacer->setIcon(icon2);

        verticalLayout->addWidget(pushButton_Effacer);

        pushButton_Annuler = new QPushButton(layoutWidget3);
        pushButton_Annuler->setObjectName(QString::fromUtf8("pushButton_Annuler"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/add/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Annuler->setIcon(icon3);

        verticalLayout->addWidget(pushButton_Annuler);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 250, 121, 17));
        label_nomPrenom = new QLabel(tab_2);
        label_nomPrenom->setObjectName(QString::fromUtf8("label_nomPrenom"));
        label_nomPrenom->setGeometry(QRect(30, 270, 131, 17));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 250, 447, 36));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        comboBox_Produit = new QComboBox(widget);
        comboBox_Produit->setObjectName(QString::fromUtf8("comboBox_Produit"));

        horizontalLayout_8->addWidget(comboBox_Produit);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        spinBox_Quantite = new QSpinBox(widget);
        spinBox_Quantite->setObjectName(QString::fromUtf8("spinBox_Quantite"));

        horizontalLayout_9->addWidget(spinBox_Quantite);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButton_Ajouter = new QPushButton(widget);
        pushButton_Ajouter->setObjectName(QString::fromUtf8("pushButton_Ajouter"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/add/insert-object.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Ajouter->setIcon(icon4);

        horizontalLayout_10->addWidget(pushButton_Ajouter);

        tabWidget_main->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget_main);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 25));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menu_Evenement = new QMenu(menuBar);
        menu_Evenement->setObjectName(QString::fromUtf8("menu_Evenement"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_clientNom, lineEdit_clientPrenom);
        QWidget::setTabOrder(lineEdit_clientPrenom, lineEdit_clientVille);
        QWidget::setTabOrder(lineEdit_clientVille, lineEdit_clientTel);
        QWidget::setTabOrder(lineEdit_clientTel, pushButton_nvClient);
        QWidget::setTabOrder(pushButton_nvClient, comboBox_Produit);
        QWidget::setTabOrder(comboBox_Produit, spinBox_Quantite);
        QWidget::setTabOrder(spinBox_Quantite, pushButton_Ajouter);
        QWidget::setTabOrder(pushButton_Ajouter, pushButton_Valider);
        QWidget::setTabOrder(pushButton_Valider, pushButton_Effacer);
        QWidget::setTabOrder(pushButton_Effacer, pushButton_Annuler);
        QWidget::setTabOrder(pushButton_Annuler, tableWidget_Commande);
        QWidget::setTabOrder(tableWidget_Commande, tableView_Client);
        QWidget::setTabOrder(tableView_Client, tabWidget_main);
        QWidget::setTabOrder(tabWidget_main, spinBox);
        QWidget::setTabOrder(spinBox, dateEdit);
        QWidget::setTabOrder(dateEdit, pushButton_Nouveau);
        QWidget::setTabOrder(pushButton_Nouveau, pushButton_Supprimer);
        QWidget::setTabOrder(pushButton_Supprimer, tableView_in);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Evenement->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Evenement->addAction(action_Gestion_du_catalogue);
        menu_Evenement->addAction(actionGestion_de_Commandes);
        menu_Evenement->addSeparator();
        menu_Evenement->addAction(action_Cr_er_un_nouveau_client);

        retranslateUi(MainWindow);

        tabWidget_main->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Nouvelle_commande->setText(QApplication::translate("MainWindow", "&Nouvelle commande", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Gestion_du_catalogue->setText(QApplication::translate("MainWindow", "&Gestion du Catalogue", 0, QApplication::UnicodeUTF8));
        actionGestion_de_Commandes->setText(QApplication::translate("MainWindow", "Gestion de &Commandes", 0, QApplication::UnicodeUTF8));
        action_Cr_er_un_nouveau_client->setText(QApplication::translate("MainWindow", "&Cr\303\251er un nouveau client", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; text-decoration: underline; color:#4387ca;\">Commercial 2013</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tabWidget_main->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_Nouveau->setText(QApplication::translate("MainWindow", "&Nouveau", 0, QApplication::UnicodeUTF8));
        pushButton_Supprimer->setText(QApplication::translate("MainWindow", "&Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab), QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "#", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Nom :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Ville :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Tel :", 0, QApplication::UnicodeUTF8));
        pushButton_nvClient->setText(QApplication::translate("MainWindow", "Nouveau &Client", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Date :", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Commande->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "# Produit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Commande->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Libelle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Commande->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Quantite", 0, QApplication::UnicodeUTF8));
        pushButton_Valider->setText(QApplication::translate("MainWindow", "&Valider", 0, QApplication::UnicodeUTF8));
        pushButton_Effacer->setText(QApplication::translate("MainWindow", "&Effacer", 0, QApplication::UnicodeUTF8));
        pushButton_Annuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Commande pour :", 0, QApplication::UnicodeUTF8));
        label_nomPrenom->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        pushButton_Ajouter->setText(QApplication::translate("MainWindow", "&Ajouter", 0, QApplication::UnicodeUTF8));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_2), QApplication::translate("MainWindow", "Commande", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        menu_Evenement->setTitle(QApplication::translate("MainWindow", "&Evenement", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
