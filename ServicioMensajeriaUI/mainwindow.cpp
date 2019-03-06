#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(User *u,vector<User> &users, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempoUsers=users;
    user = u;

    tempoListaContacts = user->getContacts();
    ////////////////////////////////////////
    ui->userLabel -> setText("User: " + user->getUserName());//imprime el usuario en la pantalla principal
    ui->passwordLabel -> setText("Password: " + user->getPassword());//imprime la contrasenia en la pantalla principal
    ui->phoneLabel -> setText("Phone: " + user->getPhoneNumber());//imprime el telefono en la pantalla principal
//////////////////////////////////
    lista_contactos();//mostrar a los usuarios

}//endContactos



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::informacion_contacto()
{
    ui->micontactoLW->clear();
    QListWidgetItem *lista=ui->contactosLW->currentItem();
    new QListWidgetItem(lista->text(), ui->micontactoLW);
}

void MainWindow::lista_contactos()
{
    for(itcontact=tempoListaContacts.begin();itcontact!=tempoListaContacts.end();++itcontact)
    {
        QString temContact=*itcontact;
        new QListWidgetItem(temContact,ui->contactosLW);
    }

}


void MainWindow::on_addPB_clicked()
{

    bool encontrado=false;
    QString temContact;
    QMessageBox message;
    for(itcontact=tempoListaContacts.begin();itcontact!=tempoListaContacts.end();++itcontact)
    {
        temContact=*itcontact;
        if(temContact==ui->contactosLW->currentItem()->text())
            encontrado=true;
    }
    if(encontrado == true)//Si fue encontrado el objeto en la lista
    {
        message.setWindowTitle("Error 404");
        message.setText("The contact exists");
        message.exec();//ejecuta la ventana
        ui->addPB->setEnabled(false);
    }
    else
    {
        message.setWindowTitle("Contact");
        message.setText("New contact added");
        message.exec();//ejecuta la ventana
        tempoListaContacts.push_back(ui->contactosLW->currentItem()->text());//ingresa el contacto
        user->setContacts(tempoListaContacts);//se ingresa la nueva lista de contactos
        ui->addPB->setEnabled(false);//al agregar el contacto el boton de "+" se deshabilita
        emit createContact(ui->contactosLW->currentItem()->text());
        ui->contactosLW->currentItem()->setTextColor(Qt::blue);
    }
}



void MainWindow::on_searchLE_textChanged(const QString &arg1)
{
    ui->contactosLW->clear();
    if(arg1.size()==0)
    {
        ui->searchLE->setModified(false);
        ui->addPB->setEnabled(false);
        lista_contactos();
    }
    else
    {
        QListWidgetItem *lista;
        bool contactoencontrado=false;
        for(it=tempoUsers.begin();it!=tempoUsers.end();++it)
        {
            User contacto=*it;
            if(contacto.getUserName().contains(arg1)){

                //Cambiar el color del contacto ya registrado
                for(itcontact=tempoListaContacts.begin();itcontact!=tempoListaContacts.end();++itcontact)
                {
                    QString tempo = *itcontact;
                    if(tempo==contacto.getUserName())
                    {
                        lista=new QListWidgetItem(contacto.getUserName(), ui->contactosLW);
                        lista->setTextColor(Qt::blue);
                        contactoencontrado=true;
                        break;
                    }
                    else
                        contactoencontrado=false;

                }
                if(contactoencontrado==false)
                {
                    lista=new QListWidgetItem(contacto.getUserName(), ui->contactosLW);
                    lista->setTextColor(Qt::darkRed);
                }
            }
            ui->addPB->setEnabled(false);//Mientras se este escribiendo en el "search" el boton "+" se deshabilita hasta seleccionar un elemento
        }
    }
}

void MainWindow::on_contactosLW_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(!ui->searchLE->isModified())
        informacion_contacto();
    else
    {
        ui->micontactoLW->clear();
        ui->addPB->setEnabled(true);//Al seleccionar un elemento de la lista el boton "agregar contacto" se habilita.
    }
}
