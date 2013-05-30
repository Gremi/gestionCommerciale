#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQueryModel>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    //Modèle de données associer aux produits
    QSqlTableModel * modelProduits;
    QSqlTableModel * modelClient;
    QSqlQueryModel * queryClient;
    QSqlDatabase  baseCommerciale;

private slots:
    void on_pushButton_Valider_clicked();
    void on_pushButton_Effacer_clicked();
    void on_pushButton_Annuler_clicked();
    void on_pushButton_Ajouter_clicked();
    void monSlot();
    void on_pushButton_nvClient_clicked();
    void on_action_Cr_er_un_nouveau_client_triggered();
    void on_actionGestion_de_Commandes_triggered();
    void on_pushButton_Supprimer_clicked();
    void on_pushButton_Nouveau_clicked();
    void on_action_Gestion_du_catalogue_triggered();
    void on_action_Quitter_triggered();
};

#endif // MAINWINDOW_H
