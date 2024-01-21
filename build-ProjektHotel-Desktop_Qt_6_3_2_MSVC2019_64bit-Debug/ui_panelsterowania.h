/********************************************************************************
** Form generated from reading UI file 'panelsterowania.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELSTEROWANIA_H
#define UI_PANELSTEROWANIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Panelsterowania
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *td_login;
    QLabel *td_haslo;
    QPushButton *sprawdzMenu;
    QPushButton *wylogujSie;
    QGroupBox *groupBox_2;
    QLabel *mr_qlabel;
    QGroupBox *groupBox_4;
    QLabel *mz_qlabel;
    QPushButton *rezerwujSK;
    QPushButton *rezerwujPokoj;
    QPushButton *rezerwujParking;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Panelsterowania)
    {
        if (Panelsterowania->objectName().isEmpty())
            Panelsterowania->setObjectName(QString::fromUtf8("Panelsterowania"));
        Panelsterowania->resize(800, 600);
        Panelsterowania->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 28, 36);\n"
"color: rgb(223, 223, 223);"));
        centralwidget = new QWidget(Panelsterowania);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(600, 430, 181, 121));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        td_login = new QLabel(groupBox);
        td_login->setObjectName(QString::fromUtf8("td_login"));
        td_login->setGeometry(QRect(10, 30, 161, 31));
        td_login->setFrameShape(QFrame::Box);
        td_haslo = new QLabel(groupBox);
        td_haslo->setObjectName(QString::fromUtf8("td_haslo"));
        td_haslo->setGeometry(QRect(10, 70, 161, 31));
        td_haslo->setFrameShape(QFrame::Box);
        sprawdzMenu = new QPushButton(centralwidget);
        sprawdzMenu->setObjectName(QString::fromUtf8("sprawdzMenu"));
        sprawdzMenu->setGeometry(QRect(20, 460, 211, 91));
        wylogujSie = new QPushButton(centralwidget);
        wylogujSie->setObjectName(QString::fromUtf8("wylogujSie"));
        wylogujSie->setGeometry(QRect(20, 20, 91, 24));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(570, 10, 211, 331));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        mr_qlabel = new QLabel(groupBox_2);
        mr_qlabel->setObjectName(QString::fromUtf8("mr_qlabel"));
        mr_qlabel->setGeometry(QRect(10, 30, 191, 291));
        mr_qlabel->setFrameShape(QFrame::Box);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(310, 10, 221, 331));
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        mz_qlabel = new QLabel(groupBox_4);
        mz_qlabel->setObjectName(QString::fromUtf8("mz_qlabel"));
        mz_qlabel->setGeometry(QRect(10, 30, 201, 291));
        mz_qlabel->setFrameShape(QFrame::Box);
        rezerwujSK = new QPushButton(centralwidget);
        rezerwujSK->setObjectName(QString::fromUtf8("rezerwujSK"));
        rezerwujSK->setGeometry(QRect(20, 170, 211, 91));
        rezerwujPokoj = new QPushButton(centralwidget);
        rezerwujPokoj->setObjectName(QString::fromUtf8("rezerwujPokoj"));
        rezerwujPokoj->setGeometry(QRect(20, 60, 211, 91));
        rezerwujParking = new QPushButton(centralwidget);
        rezerwujParking->setObjectName(QString::fromUtf8("rezerwujParking"));
        rezerwujParking->setGeometry(QRect(20, 280, 211, 91));
        Panelsterowania->setCentralWidget(centralwidget);
        rezerwujPokoj->raise();
        groupBox->raise();
        sprawdzMenu->raise();
        wylogujSie->raise();
        groupBox_2->raise();
        groupBox_4->raise();
        rezerwujSK->raise();
        rezerwujParking->raise();
        menubar = new QMenuBar(Panelsterowania);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Panelsterowania->setMenuBar(menubar);
        statusbar = new QStatusBar(Panelsterowania);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Panelsterowania->setStatusBar(statusbar);

        retranslateUi(Panelsterowania);

        QMetaObject::connectSlotsByName(Panelsterowania);
    } // setupUi

    void retranslateUi(QMainWindow *Panelsterowania)
    {
        Panelsterowania->setWindowTitle(QCoreApplication::translate("Panelsterowania", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Panelsterowania", "TWOJE DANE:", nullptr));
        td_login->setText(QString());
        td_haslo->setText(QString());
        sprawdzMenu->setText(QCoreApplication::translate("Panelsterowania", "SPRAWD\305\271 MENU", nullptr));
        wylogujSie->setText(QCoreApplication::translate("Panelsterowania", "WYLOGUJ SI\304\230", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Panelsterowania", "MOJE REZERWACJE:", nullptr));
        mr_qlabel->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("Panelsterowania", "MOJE ZAM\303\223WIENIA:", nullptr));
        mz_qlabel->setText(QString());
        rezerwujSK->setText(QCoreApplication::translate("Panelsterowania", "ZAREZERWUJ SK", nullptr));
        rezerwujPokoj->setText(QCoreApplication::translate("Panelsterowania", "ZAREZERWUJ POKOJ", nullptr));
        rezerwujParking->setText(QCoreApplication::translate("Panelsterowania", "ZAREZERWUJ PARKING", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Panelsterowania: public Ui_Panelsterowania {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELSTEROWANIA_H
