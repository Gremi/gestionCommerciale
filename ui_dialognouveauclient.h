/********************************************************************************
** Form generated from reading UI file 'dialognouveauclient.ui'
**
** Created: Fri May 3 10:16:31 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNOUVEAUCLIENT_H
#define UI_DIALOGNOUVEAUCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNouveauClient
{
public:
    QDialogButtonBox *buttonBox_ok;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_noClient;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_clientNom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_clientPrenom;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLineEdit *lineEdit_clientRue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_CP;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *lineEdit_clientVille;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *lineEdit_clientTel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QLineEdit *lineEdit_clientMail;

    void setupUi(QDialog *DialogNouveauClient)
    {
        if (DialogNouveauClient->objectName().isEmpty())
            DialogNouveauClient->setObjectName(QString::fromUtf8("DialogNouveauClient"));
        DialogNouveauClient->resize(637, 332);
        buttonBox_ok = new QDialogButtonBox(DialogNouveauClient);
        buttonBox_ok->setObjectName(QString::fromUtf8("buttonBox_ok"));
        buttonBox_ok->setGeometry(QRect(270, 290, 341, 32));
        buttonBox_ok->setOrientation(Qt::Horizontal);
        buttonBox_ok->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget_2 = new QWidget(DialogNouveauClient);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 40, 257, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(true);

        horizontalLayout_6->addWidget(label_7);

        lineEdit_noClient = new QLineEdit(layoutWidget_2);
        lineEdit_noClient->setObjectName(QString::fromUtf8("lineEdit_noClient"));
        lineEdit_noClient->setEnabled(true);
        lineEdit_noClient->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_noClient->setReadOnly(false);

        horizontalLayout_6->addWidget(lineEdit_noClient);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        lineEdit_clientNom = new QLineEdit(layoutWidget_2);
        lineEdit_clientNom->setObjectName(QString::fromUtf8("lineEdit_clientNom"));

        horizontalLayout_2->addWidget(lineEdit_clientNom);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_clientPrenom = new QLineEdit(layoutWidget_2);
        lineEdit_clientPrenom->setObjectName(QString::fromUtf8("lineEdit_clientPrenom"));

        horizontalLayout_3->addWidget(lineEdit_clientPrenom);


        verticalLayout_4->addLayout(horizontalLayout_3);

        layoutWidget = new QWidget(DialogNouveauClient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 40, 223, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_4->addWidget(label_10);

        lineEdit_clientRue = new QLineEdit(layoutWidget);
        lineEdit_clientRue->setObjectName(QString::fromUtf8("lineEdit_clientRue"));

        horizontalLayout_4->addWidget(lineEdit_clientRue);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        lineEdit_CP = new QLineEdit(layoutWidget);
        lineEdit_CP->setObjectName(QString::fromUtf8("lineEdit_CP"));
        lineEdit_CP->setEnabled(true);

        horizontalLayout_5->addWidget(lineEdit_CP);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_7->addWidget(label_12);

        lineEdit_clientVille = new QLineEdit(layoutWidget);
        lineEdit_clientVille->setObjectName(QString::fromUtf8("lineEdit_clientVille"));

        horizontalLayout_7->addWidget(lineEdit_clientVille);


        verticalLayout_3->addLayout(horizontalLayout_7);

        layoutWidget_3 = new QWidget(DialogNouveauClient);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 170, 252, 66));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_8->addWidget(label_13);

        lineEdit_clientTel = new QLineEdit(layoutWidget_3);
        lineEdit_clientTel->setObjectName(QString::fromUtf8("lineEdit_clientTel"));

        horizontalLayout_8->addWidget(lineEdit_clientTel);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_9->addWidget(label_14);

        lineEdit_clientMail = new QLineEdit(layoutWidget_3);
        lineEdit_clientMail->setObjectName(QString::fromUtf8("lineEdit_clientMail"));

        horizontalLayout_9->addWidget(lineEdit_clientMail);


        verticalLayout_5->addLayout(horizontalLayout_9);


        retranslateUi(DialogNouveauClient);
        QObject::connect(buttonBox_ok, SIGNAL(accepted()), DialogNouveauClient, SLOT(accept()));
        QObject::connect(buttonBox_ok, SIGNAL(rejected()), DialogNouveauClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNouveauClient);
    } // setupUi

    void retranslateUi(QDialog *DialogNouveauClient)
    {
        DialogNouveauClient->setWindowTitle(QApplication::translate("DialogNouveauClient", "Dialog", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogNouveauClient", "Numero du client :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogNouveauClient", "Nom :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogNouveauClient", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DialogNouveauClient", "Rue :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("DialogNouveauClient", "Code Postal :", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DialogNouveauClient", "Ville :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DialogNouveauClient", "N\302\260 de t\303\251l\303\251phone :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DialogNouveauClient", "@ e-mail :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogNouveauClient: public Ui_DialogNouveauClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNOUVEAUCLIENT_H
