/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLineEdit *userLE;
    QLineEdit *passwordLE;
    QPushButton *loginPB;
    QLabel *newLabel;
    QLineEdit *newUserLE;
    QLineEdit *phoneLE;
    QLineEdit *newPasswordLE;
    QPushButton *createPB;
    QLabel *newLabel_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *fondoPrincipal;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(396, 558);
        LoginDialog->setStyleSheet(QStringLiteral(""));
        userLE = new QLineEdit(LoginDialog);
        userLE->setObjectName(QStringLiteral("userLE"));
        userLE->setGeometry(QRect(60, 240, 281, 22));
        userLE->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(60, 60, 60);\n"
""));
        passwordLE = new QLineEdit(LoginDialog);
        passwordLE->setObjectName(QStringLiteral("passwordLE"));
        passwordLE->setGeometry(QRect(60, 270, 281, 22));
        passwordLE->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(60, 60, 60);\n"
""));
        passwordLE->setEchoMode(QLineEdit::Password);
        loginPB = new QPushButton(LoginDialog);
        loginPB->setObjectName(QStringLiteral("loginPB"));
        loginPB->setEnabled(false);
        loginPB->setGeometry(QRect(130, 320, 141, 21));
        loginPB->setAutoFillBackground(false);
        loginPB->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"\n"
"background-color: rgb(116, 116, 116);\n"
""));
        loginPB->setCheckable(false);
        newLabel = new QLabel(LoginDialog);
        newLabel->setObjectName(QStringLiteral("newLabel"));
        newLabel->setGeometry(QRect(150, 210, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(16);
        newLabel->setFont(font);
        newLabel->setStyleSheet(QStringLiteral("color: rgb(85, 0, 0);"));
        newUserLE = new QLineEdit(LoginDialog);
        newUserLE->setObjectName(QStringLiteral("newUserLE"));
        newUserLE->setGeometry(QRect(60, 380, 281, 22));
        newUserLE->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(60, 60, 60);\n"
""));
        phoneLE = new QLineEdit(LoginDialog);
        phoneLE->setObjectName(QStringLiteral("phoneLE"));
        phoneLE->setGeometry(QRect(60, 410, 281, 22));
        phoneLE->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(60, 60, 60);\n"
""));
        newPasswordLE = new QLineEdit(LoginDialog);
        newPasswordLE->setObjectName(QStringLiteral("newPasswordLE"));
        newPasswordLE->setGeometry(QRect(60, 440, 281, 22));
        newPasswordLE->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(60, 60, 60);\n"
""));
        newPasswordLE->setEchoMode(QLineEdit::Normal);
        createPB = new QPushButton(LoginDialog);
        createPB->setObjectName(QStringLiteral("createPB"));
        createPB->setEnabled(false);
        createPB->setGeometry(QRect(140, 470, 121, 21));
        createPB->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"\n"
"background-color: rgb(116, 116, 116);\n"
""));
        newLabel_2 = new QLabel(LoginDialog);
        newLabel_2->setObjectName(QStringLiteral("newLabel_2"));
        newLabel_2->setGeometry(QRect(90, 350, 231, 21));
        newLabel_2->setFont(font);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 201, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../Downloads/5a29abcb606e96.567447721512680395395.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 60, 101, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../zneon.png")));
        label_3->setScaledContents(true);
        fondoPrincipal = new QLabel(LoginDialog);
        fondoPrincipal->setObjectName(QStringLiteral("fondoPrincipal"));
        fondoPrincipal->setGeometry(QRect(0, -10, 401, 571));
        fondoPrincipal->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        fondoPrincipal->setPixmap(QPixmap(QString::fromUtf8("fondoPrincipal.jpg")));
        fondoPrincipal->setScaledContents(true);
        fondoPrincipal->raise();
        userLE->raise();
        passwordLE->raise();
        loginPB->raise();
        newLabel->raise();
        newUserLE->raise();
        phoneLE->raise();
        newPasswordLE->raise();
        createPB->raise();
        newLabel_2->raise();
        label->raise();
        label_3->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
        userLE->setPlaceholderText(QApplication::translate("LoginDialog", "User", nullptr));
        passwordLE->setText(QString());
        passwordLE->setPlaceholderText(QApplication::translate("LoginDialog", "Password", nullptr));
        loginPB->setText(QApplication::translate("LoginDialog", "Login", nullptr));
        newLabel->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#550000;\">Welcome!</span></p></body></html>", nullptr));
        newUserLE->setPlaceholderText(QApplication::translate("LoginDialog", "User", nullptr));
        phoneLE->setPlaceholderText(QApplication::translate("LoginDialog", "Phone", nullptr));
        newPasswordLE->setPlaceholderText(QApplication::translate("LoginDialog", "Password", nullptr));
        createPB->setText(QApplication::translate("LoginDialog", "Create!", nullptr));
        newLabel_2->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#550000;\">Create New Account</span></p></body></html>", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        fondoPrincipal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
