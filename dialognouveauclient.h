#ifndef DIALOGNOUVEAUCLIENT_H
#define DIALOGNOUVEAUCLIENT_H

#include <QDialog>

namespace Ui {
    class DialogNouveauClient;
}

class DialogNouveauClient : public QDialog {
    Q_OBJECT
public:
    DialogNouveauClient(QWidget *parent = 0);
    ~DialogNouveauClient();

protected:
    void changeEvent(QEvent *e);

public:
    Ui::DialogNouveauClient *ui;

private slots:
    void on_buttonBox_ok_accepted();
};

#endif // DIALOGNOUVEAUCLIENT_H
