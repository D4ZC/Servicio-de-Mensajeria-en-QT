#include "user.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidget>
#include <QListWidgetItem>
#include <QMainWindow>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(User *u, vector<User> &users, QWidget *parent = 0);//recibe un usuario
    ~MainWindow();

    void informacion_contacto();
    void lista_contactos();

//private slots:
    //void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private slots:


    void on_addPB_clicked();
    void on_contactosLW_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);//nuevo
    void on_searchLE_textChanged(const QString &arg1);


private:
    Ui::MainWindow *ui;
    vector<User>::iterator it;
    vector<QString>::iterator itcontact;//iterador para lista de contactos
    vector<QString> tempoListaContacts;//lista de contactos temporal
    vector<User> tempoUsers;
    User *user;

signals:
    void createContact(QString name);

};

#endif // MAINWINDOW_H
