#include "dialognouveauclient.h"
#include "ui_dialognouveauclient.h"

DialogNouveauClient::DialogNouveauClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNouveauClient)
{
    setWindowTitle("Création du nouveau Client");
    ui->setupUi(this);
}

DialogNouveauClient::~DialogNouveauClient()
{
    delete ui;
}

void DialogNouveauClient::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}


void DialogNouveauClient::on_buttonBox_ok_accepted()
{
    accept();
}
