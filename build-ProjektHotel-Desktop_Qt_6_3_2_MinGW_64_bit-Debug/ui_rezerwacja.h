/********************************************************************************
** Form generated from reading UI file 'rezerwacja.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REZERWACJA_H
#define UI_REZERWACJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rezerwacja
{
public:
    QWidget *centralwidget;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Rezerwacja)
    {
        if (Rezerwacja->objectName().isEmpty())
            Rezerwacja->setObjectName(QString::fromUtf8("Rezerwacja"));
        Rezerwacja->resize(512, 483);
        centralwidget = new QWidget(Rezerwacja);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(30, 20, 80, 24));
        Rezerwacja->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Rezerwacja);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 21));
        Rezerwacja->setMenuBar(menubar);
        statusbar = new QStatusBar(Rezerwacja);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Rezerwacja->setStatusBar(statusbar);

        retranslateUi(Rezerwacja);

        QMetaObject::connectSlotsByName(Rezerwacja);
    } // setupUi

    void retranslateUi(QMainWindow *Rezerwacja)
    {
        Rezerwacja->setWindowTitle(QCoreApplication::translate("Rezerwacja", "MainWindow", nullptr));
        back->setText(QCoreApplication::translate("Rezerwacja", "Powr\303\263t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rezerwacja: public Ui_Rezerwacja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REZERWACJA_H
