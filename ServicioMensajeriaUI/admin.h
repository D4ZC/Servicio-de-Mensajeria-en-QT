#ifndef ADMIN_H
#define ADMIN_H
#include <QObject>
#include <iostream>
#include "logindialog.h"
#include "mainwindow.h"
////////////////////////////
#include "user.h"
#include <vector>
#include <iostream>
//Librerias para la base de datos
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
/////////


 using namespace std;
class Admin :public QObject//herencia del entorno qt
{
    Q_OBJECT//indica que va a usar los elementos de QT
public:
    Admin();
    ~Admin();
    void start();

private:
    vector <User> users;
    vector <User>::iterator it;
    LoginDialog *login;
    MainWindow *mainWindow;
    MainWindow *addcontacto;
    //base de datos
    QFile db;
    QJsonArray jsonArray;
    QJsonArray jsonArrayContacts;//contactos
    ////////////

    void saveDB();//metodo para guardar los datos
    void loadDB();
    void saveUser(User u);

    QJsonArray::iterator array;//iterator del array
    QJsonObject jsonObjectAdmin;

    //endBase de datos


private slots:
    void addUser(QString name, QString phone, QString password);//recibe los datos a aniadir
    void validateUser (QString name, QString password);//recibe los datos para validar si existe
    void addContact (QString name);

};

#endif // ADMIN_H
