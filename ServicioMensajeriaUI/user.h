#ifndef USER_H
#define USER_H
#include <iostream>
#include <QString>
#include <vector>//19 febrero libreria para vector



using namespace std;


class User
{

private:
    QString userName;
    QString phoneNumber;
    QString password;
    vector<QString> contacts;// 19 de febrero vector para los usuarios

public:
    User();

    vector<QString> getContacts() const;
    void setContacts(const vector<QString> &value);


    QString getUserName() const;
    void setUserName(const QString &value);
    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
};

#endif // USER_H
