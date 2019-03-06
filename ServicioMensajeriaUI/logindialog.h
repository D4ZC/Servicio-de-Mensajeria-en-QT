#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_userLE_textChanged(const QString &arg1);

    void on_passwordLE_textChanged(const QString &arg1);

    void on_newUserLE_textChanged(const QString &arg1);

    void on_phoneLE_textChanged(const QString &arg1);

    void on_newPasswordLE_textChanged(const QString &arg1);

    void on_createPB_clicked();

    void on_loginPB_clicked();

private:
    Ui::LoginDialog *ui;

    void enableLogin();
    void enableCreate();

signals:
    void createUser(QString name, QString phone, QString password);
    void login(QString name, QString password);



};

#endif // LOGINDIALOG_H
