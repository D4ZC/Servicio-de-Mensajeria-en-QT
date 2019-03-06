/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *userLabel;
    QLabel *passwordLabel;
    QLabel *phoneLabel;
    QLabel *AgregarContactoPNG;
    QLabel *FONDO;
    QPushButton *addPB;
    QLineEdit *messageLE;
    QLabel *EmojiPNG;
    QPushButton *sendMessage;
    QLineEdit *searchLE;
    QPushButton *searchPB;
    QListWidget *contactosLW;
    QListWidget *micontactoLW;
    QListWidget *pantallaLV;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(889, 654);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        userLabel = new QLabel(centralWidget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(180, 30, 371, 16));
        QFont font;
        font.setPointSize(11);
        userLabel->setFont(font);
        userLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        passwordLabel = new QLabel(centralWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(180, 70, 211, 16));
        passwordLabel->setFont(font);
        passwordLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        phoneLabel = new QLabel(centralWidget);
        phoneLabel->setObjectName(QStringLiteral("phoneLabel"));
        phoneLabel->setGeometry(QRect(180, 110, 371, 16));
        phoneLabel->setFont(font);
        phoneLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        AgregarContactoPNG = new QLabel(centralWidget);
        AgregarContactoPNG->setObjectName(QStringLiteral("AgregarContactoPNG"));
        AgregarContactoPNG->setGeometry(QRect(30, 10, 131, 131));
        AgregarContactoPNG->setPixmap(QPixmap(QString::fromUtf8("usuarioIcono.png")));
        AgregarContactoPNG->setScaledContents(true);
        FONDO = new QLabel(centralWidget);
        FONDO->setObjectName(QStringLiteral("FONDO"));
        FONDO->setGeometry(QRect(0, -20, 921, 721));
        FONDO->setPixmap(QPixmap(QString::fromUtf8("fondo.png")));
        FONDO->setScaledContents(true);
        addPB = new QPushButton(centralWidget);
        addPB->setObjectName(QStringLiteral("addPB"));
        addPB->setGeometry(QRect(240, 150, 31, 31));
        addPB->setAutoFillBackground(false);
        addPB->setStyleSheet(QStringLiteral("border-radius: 1px;"));
        QIcon icon;
        icon.addFile(QStringLiteral("agregar.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPB->setIcon(icon);
        addPB->setIconSize(QSize(40, 40));
        messageLE = new QLineEdit(centralWidget);
        messageLE->setObjectName(QStringLiteral("messageLE"));
        messageLE->setEnabled(true);
        messageLE->setGeometry(QRect(500, 620, 321, 31));
        messageLE->setStyleSheet(QLatin1String("border-radius: 10px;\n"
"background-color: rgb(68, 68, 68);"));
        EmojiPNG = new QLabel(centralWidget);
        EmojiPNG->setObjectName(QStringLiteral("EmojiPNG"));
        EmojiPNG->setGeometry(QRect(460, 620, 31, 31));
        EmojiPNG->setPixmap(QPixmap(QString::fromUtf8("emoji.png")));
        EmojiPNG->setScaledContents(true);
        sendMessage = new QPushButton(centralWidget);
        sendMessage->setObjectName(QStringLiteral("sendMessage"));
        sendMessage->setGeometry(QRect(830, 620, 51, 31));
        sendMessage->setStyleSheet(QStringLiteral("border-radius: 2px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendMessage->setIcon(icon1);
        sendMessage->setIconSize(QSize(40, 40));
        searchLE = new QLineEdit(centralWidget);
        searchLE->setObjectName(QStringLiteral("searchLE"));
        searchLE->setGeometry(QRect(20, 150, 201, 31));
        searchLE->setStyleSheet(QLatin1String("background-color: rgb(68, 68, 68);\n"
"border-radius: 10px;"));
        searchPB = new QPushButton(centralWidget);
        searchPB->setObjectName(QStringLiteral("searchPB"));
        searchPB->setGeometry(QRect(190, 150, 31, 31));
        searchPB->setStyleSheet(QStringLiteral("border-radius:2px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchPB->setIcon(icon2);
        searchPB->setIconSize(QSize(40, 45));
        contactosLW = new QListWidget(centralWidget);
        contactosLW->setObjectName(QStringLiteral("contactosLW"));
        contactosLW->setGeometry(QRect(20, 190, 251, 441));
        micontactoLW = new QListWidget(centralWidget);
        micontactoLW->setObjectName(QStringLiteral("micontactoLW"));
        micontactoLW->setGeometry(QRect(490, 140, 361, 41));
        pantallaLV = new QListWidget(centralWidget);
        pantallaLV->setObjectName(QStringLiteral("pantallaLV"));
        pantallaLV->setGeometry(QRect(490, 210, 361, 401));
        MainWindow->setCentralWidget(centralWidget);
        FONDO->raise();
        userLabel->raise();
        passwordLabel->raise();
        phoneLabel->raise();
        AgregarContactoPNG->raise();
        addPB->raise();
        messageLE->raise();
        EmojiPNG->raise();
        sendMessage->raise();
        searchLE->raise();
        searchPB->raise();
        contactosLW->raise();
        micontactoLW->raise();
        pantallaLV->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        userLabel->setText(QApplication::translate("MainWindow", "User:", nullptr));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        phoneLabel->setText(QApplication::translate("MainWindow", "Phone:", nullptr));
        AgregarContactoPNG->setText(QString());
        FONDO->setText(QString());
        addPB->setText(QString());
        messageLE->setText(QString());
        messageLE->setPlaceholderText(QApplication::translate("MainWindow", "Message", nullptr));
        EmojiPNG->setText(QString());
        sendMessage->setText(QString());
        searchLE->setText(QString());
        searchLE->setPlaceholderText(QApplication::translate("MainWindow", "Search...", nullptr));
        searchPB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
