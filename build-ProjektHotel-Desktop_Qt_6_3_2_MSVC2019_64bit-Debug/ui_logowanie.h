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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Logowanie
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Logowanie)
    {
        if (Logowanie->objectName().isEmpty())
            Logowanie->setObjectName(QString::fromUtf8("Logowanie"));
        Logowanie->resize(800, 600);
        centralwidget = new QWidget(Logowanie);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
    } // retranslateUi

};

namespace Ui {
    class Logowanie: public Ui_Logowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOWANIE_H
