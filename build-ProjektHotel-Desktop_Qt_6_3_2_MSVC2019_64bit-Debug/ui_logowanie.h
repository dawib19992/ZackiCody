/********************************************************************************
** Form generated from reading UI file 'logowanie.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOWANIE_H
#define UI_LOGOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logowanie
{
public:
    QWidget *centralwidget;
    QPushButton *zaloguj;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *Haslo_lineedit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Login_lineedit;
    QPushButton *rejestracja;
    QLabel *label_pic;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Logowanie)
    {
        if (Logowanie->objectName().isEmpty())
            Logowanie->setObjectName(QString::fromUtf8("Logowanie"));
        Logowanie->resize(595, 365);
        Logowanie->setMinimumSize(QSize(595, 365));
        Logowanie->setMaximumSize(QSize(595, 365));
        QFont font;
        font.setPointSize(13);
        Logowanie->setFont(font);
        Logowanie->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 28, 36);\n"
"color: rgb(223, 223, 223);"));
        centralwidget = new QWidget(Logowanie);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        zaloguj = new QPushButton(centralwidget);
        zaloguj->setObjectName(QString::fromUtf8("zaloguj"));
        zaloguj->setGeometry(QRect(240, 240, 111, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        zaloguj->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 180, 110, 54));
        QFont font2;
        font2.setPointSize(12);
        layoutWidget->setFont(font2);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Haslo_lineedit = new QLineEdit(layoutWidget);
        Haslo_lineedit->setObjectName(QString::fromUtf8("Haslo_lineedit"));
        Haslo_lineedit->setFont(font1);
        Haslo_lineedit->setStyleSheet(QString::fromUtf8("QlineEdit{\n"
"border : 2px solid rgb(37,39,48);\n"
"border-radius : 20px;\n"
"color: #FFF;\n"
"padding-left : 20px;\n"
"padding-right : 20px;\n"
"	background-color: rgb(170, 170, 255);\n"
"}"));
        Haslo_lineedit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(Haslo_lineedit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 110, 111, 75));
        layoutWidget1->setFont(font2);
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Login_lineedit = new QLineEdit(layoutWidget1);
        Login_lineedit->setObjectName(QString::fromUtf8("Login_lineedit"));
        Login_lineedit->setFont(font1);
        Login_lineedit->setStyleSheet(QString::fromUtf8("QlineEdit{\n"
"border : 2px solid rgb(37,39,48);\n"
"border-radius : 20px;\n"
"color: #FFF;\n"
"padding-left : 20px;\n"
"padding-right : 20px;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(Login_lineedit);

        rejestracja = new QPushButton(centralwidget);
        rejestracja->setObjectName(QString::fromUtf8("rejestracja"));
        rejestracja->setGeometry(QRect(240, 270, 111, 24));
        rejestracja->setFont(font1);
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(160, 0, 290, 104));
        label_pic->setMinimumSize(QSize(290, 104));
        Logowanie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Logowanie);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 595, 21));
        Logowanie->setMenuBar(menubar);
        statusbar = new QStatusBar(Logowanie);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Logowanie->setStatusBar(statusbar);

        retranslateUi(Logowanie);

        QMetaObject::connectSlotsByName(Logowanie);
    } // setupUi

    void retranslateUi(QMainWindow *Logowanie)
    {
        Logowanie->setWindowTitle(QCoreApplication::translate("Logowanie", "Logowanie", nullptr));
        zaloguj->setText(QCoreApplication::translate("Logowanie", "Zaloguj si\304\231", nullptr));
        Haslo_lineedit->setPlaceholderText(QCoreApplication::translate("Logowanie", "Has\305\202o ", nullptr));
        Login_lineedit->setPlaceholderText(QCoreApplication::translate("Logowanie", "Login", nullptr));
        rejestracja->setText(QCoreApplication::translate("Logowanie", "Zarejestruj si\304\231", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Logowanie: public Ui_Logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H
