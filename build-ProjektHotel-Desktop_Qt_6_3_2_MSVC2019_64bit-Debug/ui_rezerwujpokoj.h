/********************************************************************************
** Form generated from reading UI file 'rezerwujpokoj.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REZERWUJPOKOJ_H
#define UI_REZERWUJPOKOJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RezerwujPokoj
{
public:
    QWidget *centralwidget;
    QPushButton *powrot;
    QCalendarWidget *calendarWidget;
    QPushButton *rezerwuj;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RezerwujPokoj)
    {
        if (RezerwujPokoj->objectName().isEmpty())
            RezerwujPokoj->setObjectName(QString::fromUtf8("RezerwujPokoj"));
        RezerwujPokoj->resize(800, 600);
        RezerwujPokoj->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 28, 36);\n"
"color: rgb(223, 223, 223);"));
        centralwidget = new QWidget(RezerwujPokoj);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        powrot = new QPushButton(centralwidget);
        powrot->setObjectName(QString::fromUtf8("powrot"));
        powrot->setGeometry(QRect(40, 20, 80, 24));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(150, 100, 304, 163));
        rezerwuj = new QPushButton(centralwidget);
        rezerwuj->setObjectName(QString::fromUtf8("rezerwuj"));
        rezerwuj->setGeometry(QRect(550, 210, 80, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(490, 130, 191, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("QlineEdit{\n"
"border : 2px solid rgb(37,39,48);\n"
"border-radius : 20px;\n"
"color: #FFF;\n"
"padding-left : 20px;\n"
"padding-right : 20px;\n"
"\n"
"}"));
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(false);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(490, 170, 191, 24));
        lineEdit_2->setReadOnly(false);
        RezerwujPokoj->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RezerwujPokoj);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        RezerwujPokoj->setMenuBar(menubar);
        statusbar = new QStatusBar(RezerwujPokoj);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RezerwujPokoj->setStatusBar(statusbar);

        retranslateUi(RezerwujPokoj);

        QMetaObject::connectSlotsByName(RezerwujPokoj);
    } // setupUi

    void retranslateUi(QMainWindow *RezerwujPokoj)
    {
        RezerwujPokoj->setWindowTitle(QCoreApplication::translate("RezerwujPokoj", "MainWindow", nullptr));
        powrot->setText(QCoreApplication::translate("RezerwujPokoj", "POWR\303\223T", nullptr));
        rezerwuj->setText(QCoreApplication::translate("RezerwujPokoj", "Rezerwuj", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("RezerwujPokoj", "DATA ROZPOCZ\304\230CIA REZERWACJI", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("RezerwujPokoj", "DATA ZAKO\305\203CZENIA REZERWACJI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RezerwujPokoj: public Ui_RezerwujPokoj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REZERWUJPOKOJ_H
