#include "user.h"
User::User()
{

}

QString User::getUserName() const
{
    return userName;
}

void User::setUserName(const QString &value)
{
    userName = value;
}

QString User::getPhoneNumber() const
{
    return phoneNumber;
}

void User::setPhoneNumber(const QString &value)
{
    phoneNumber = value;
}

QString User::getPassword() const
{
    return password;
}

void User::setPassword(const QString &value)
{
    password = value;
}

vector<QString> User::getContacts() const
{
    return contacts;
}

void User::setContacts(const vector<QString> &value)
{
    contacts = value;
}

