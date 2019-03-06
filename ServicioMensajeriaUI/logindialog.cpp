#include "logindialog.h"
#include "string.h"
#include "ui_logindialog.h"


LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::enableLogin()
{
    if (ui->userLE->text().length() >0&&//la longitud de el usuario debe de ser mayor a 0
            ui->passwordLE->text().length()>0)//la longitud de la contrasenia debe de ser mayor a 0
        ui->loginPB->setEnabled(true);
    else
        ui->loginPB->setEnabled(false);
}

void LoginDialog::enableCreate()

{
    bool habilitarCrear=false;
    if (ui->newUserLE->text().length()>0&&//validacion de que el LE User contenga caracteres
        ui->phoneLE->text().length()==10&&//validacion de que el LE Phone contenga 10 caracteres
        ui->newPasswordLE->text().length()>0)//validacion de que el LE Password contenga caracteres
    {
        //Analizar lo que se ingresa en el LE de phone
        for(int i=0; i<10;i++)//se entrara al ciclo las diez veces (que significa el numero de telefono)
        {
            if(ui->phoneLE->text().data()[i].isDigit())//cada vez que detecte un digito "habilitarCrear" sera verdadero y continuara
               habilitarCrear=true;
            else
            {
                habilitarCrear=false;//Si no encuentra un digito la condicion sera falsa
                break;//y tendra que romper el ciclo y se deshabilitara el boton "EnableCreate"
            }//endElse
        }//endFor
        if( habilitarCrear==true)
        {
            ui->createPB->setEnabled(true);//Si "habilitarCrear" es verdadera se habilita el boton

        }//endIf
        else
        {
            ui->createPB->setEnabled(false);//Si no, seguira deshabilitado
        }//endElse

    }//endIf

    else
    {
        ui->createPB->setEnabled(false);
    }//endElse

}//endEnableCreate()


void LoginDialog::on_userLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();
}

void LoginDialog::on_passwordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableLogin();
}

void LoginDialog::on_newUserLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void LoginDialog::on_phoneLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void LoginDialog::on_newPasswordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableCreate();
}

void LoginDialog::on_createPB_clicked()
{
    emit createUser(ui->newUserLE->text(), ui->phoneLE->text(), ui->newPasswordLE->text());
    ui->newUserLE->clear();//19 febrero se limpia el registro cuando se crea el usuario
    ui->newPasswordLE->clear();//19 febrero se limpia el registro cuando se crea el usuario
    ui->phoneLE->clear();//19 febrero se limpia el registro cuando se crea el usuario
}

void LoginDialog::on_loginPB_clicked()
{
    emit login(ui->userLE->text(), ui->passwordLE->text());
}
