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
    QLabel *label;
    QLineEdit *Haslo_lineedit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *Login_lineedit;
    QPushButton *rejestracja;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Logowanie)
    {
        if (Logowanie->objectName().isEmpty())
            Logowanie->setObjectName(QString::fromUtf8("Logowanie"));
        Logowanie->resize(800, 600);
        centralwidget = new QWidget(Logowanie);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        zaloguj = new QPushButton(centralwidget);
        zaloguj->setObjectName(QString::fromUtf8("zaloguj"));
        zaloguj->setGeometry(QRect(330, 280, 80, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 210, 110, 48));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(label);

        Haslo_lineedit = new QLineEdit(layoutWidget);
        Haslo_lineedit->setObjectName(QString::fromUtf8("Haslo_lineedit"));

        verticalLayout->addWidget(Haslo_lineedit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 150, 110, 48));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        Login_lineedit = new QLineEdit(layoutWidget1);
        Login_lineedit->setObjectName(QString::fromUtf8("Login_lineedit"));

        verticalLayout_2->addWidget(Login_lineedit);

        rejestracja = new QPushButton(centralwidget);
        rejestracja->setObjectName(QString::fromUtf8("rejestracja"));
        rejestracja->setGeometry(QRect(330, 310, 80, 24));
        Logowanie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Logowanie);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        label->setText(QCoreApplication::translate("Logowanie", "Has\305\202o:", nullptr));
        label_2->setText(QCoreApplication::translate("Logowanie", "Login", nullptr));
        rejestracja->setText(QCoreApplication::translate("Logowanie", "Zarejestruj si\304\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logowanie: public Ui_Logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H
