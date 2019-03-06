#include "admin.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Admin admin;
    admin.start();

    return a.exec();
}
