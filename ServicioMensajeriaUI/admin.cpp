#include "admin.h"
#include <QMessageBox>

Admin::Admin()
{
 login = new LoginDialog();
 //connect del nuevo usuario (Quien envia, despues que' envia, quien responde. con que' responde)

 connect (login,
          SIGNAL(createUser(QString, QString, QString)),
          this,
          SLOT (addUser (QString, QString, QString)));


 //connect del login de inicio

 connect (login,
         SIGNAL (login(QString, QString)),
         this,
         SLOT (validateUser (QString, QString)));
 //base de datos

 db.setFileName("telegraph.json");
 loadDB();
 //endBase de datos
}

Admin::~Admin()
{
    saveDB();
}


//Cargar base de datos
void Admin::loadDB()
{
    if(!db.open(QIODevice::ReadOnly))
    {QMessageBox message;
    message.setWindowTitle("ERROR");
    message.setText("Unable to open database");
    message.exec();

    }
    else
    {
        QByteArray data = db.readAll();
        QJsonDocument jsonDocument(QJsonDocument::fromJson(data));//crear el documento a partir de la informacion que se lee
        QJsonObject jsonObject = jsonDocument.object();
        jsonArray = jsonObject ["users"].toArray();//a jsonArray se llena a partir de ese objeto en el campo users
        //iterar por cada uno de esos elementos y por cada uno crear un usuario y agregarlo al vector de usuarios
        for (int i(0); i< jsonArray.size(); i++)
        {
            QJsonObject obj = jsonArray[i].toObject();//creamos el usuario
            User u;//llenamos la informacion
            u.setUserName(obj["userName"].toString());
            u.setPhoneNumber(obj["phone"].toString());
            u.setPassword(obj["password"].toString());
            vector<QString> lista;
            QJsonArray temporalContactos;
            temporalContactos = obj["contacts"].toArray();
            for(int j(0);j<temporalContactos.size();j++)
            {
                QJsonObject object = temporalContactos[j].toObject();
                lista.push_back(object["name"].toString());
            }

            u.setContacts(lista);
            users.push_back(u);
        }

    }
    db.close();
}//End Cargar base de datos


void Admin::saveUser(User u)
{
    jsonArray.erase(array);//Elimina la informacion del usuario que este apuntado el "array".
    //Para volverlas agregar.
    jsonObjectAdmin["userName"] = u.getUserName();
    jsonObjectAdmin["phone"] = u.getPhoneNumber();
    jsonObjectAdmin["password"] = u.getPassword();

}



//Guardar base de datos
void Admin::saveDB()
{
    if(!jsonObjectAdmin.empty())
        jsonArray.append(jsonObjectAdmin);
    if(!db.open(QIODevice::WriteOnly))
    {QMessageBox message;
    message.setWindowTitle("ERROR");
    message.setText("Unable to open database");
    message.exec();

    }
    else
    {

        QJsonObject jsonObject;
        jsonObject ["users"]= jsonArray;
        QJsonDocument jsonDocument(jsonObject);
        db.write(jsonDocument.toJson());
    }
    db.close();


}//endCargar base de datos




void Admin::start()
{
    login ->show();
}

void Admin::addUser(QString name, QString phone, QString password)
{
    bool encontrado=false;//Una bandera que nos permitira seguir o no con la ejecucion
    User us, u;//La variable "us" nos ayudara en la busqueda.
    QMessageBox message;
    for(it = users.begin(); it!=users.end(); ++it)//Empienza al inicio de la lista; mientras sea diferente al final de la lista; ir aumentando en iterador
    {
        us=*it;//El objeto que este apuntando el iterador se lo anexamos a la variable "us"; ya que no es posible hacer "*it.getUsername()"
        if(us.getUserName()==name)//Si el nombre de usuario que esta en la lista es igual al que esta ingresando
            encontrado=true;//Convertimos la bandera en verdadera
    }
    if(encontrado == true)//Si fue encontrado el objeto en la lista
    {
        message.setWindowTitle("Error 404");
        message.setText("Contact duplicate");
        message.exec();//ejecuta la ventana
        return;//Salir de la funcion
    }

    u.setUserName(name);
    u.setPhoneNumber(phone);
    u.setPassword(password);

    users.push_back(u);

    jsonObjectAdmin["userName"] = name;
    jsonObjectAdmin["phone"] = phone;
    jsonObjectAdmin["password"] = password;

    message.setWindowTitle("New User");
    message.setText("New user created");
    message.exec();//ejecuta la ventana
   }

void Admin::validateUser(QString name, QString password)//aqui se realiza la busqueda del usuario
{
    unsigned int i;
    for(i=0; i<users.size();++i)
    {
        if(users[i].getUserName() == name && users[i].getPassword() == password)
        {

            array=jsonArray.begin();
            advance(array,i);

            vector<QString> tempoContactos=users[i].getContacts();
            vector<QString>::iterator cargar; //Va cargar los contactos ya existentes del usuario al "jsonArrayContacts" para no perderlos al cerrar el programa
            for(cargar=tempoContactos.begin();cargar!=tempoContactos.end();++cargar)
            {
                QString tem = *cargar;
                QJsonObject jsonObject;
                jsonObject["name"] = tem;
                jsonArrayContacts.append(jsonObject);
                jsonObjectAdmin["contacts"] = jsonArrayContacts;
            }

            mainWindow = new MainWindow(&users[i], users);
            connect(mainWindow,
                    SIGNAL(createContact(QString)),
                    this,
                    SLOT(addContact(QString)));
            mainWindow->show();
            saveUser(users[i]);
            login->hide();
            break;
        }
    }
    if(i==users.size())
    {
        QMessageBox message;
        message.setWindowTitle("Error 404");
        message.setText("Invalid username or password");
        message.exec();

    }
}

void Admin::addContact(QString name)
{
    QJsonObject jsonObject;
    jsonObject["name"] = name;
    jsonArrayContacts.append(jsonObject);
    jsonObjectAdmin["contacts"] = jsonArrayContacts;

}




