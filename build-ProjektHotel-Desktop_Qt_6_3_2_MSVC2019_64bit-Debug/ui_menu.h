/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *zamow;
    QPlainTextEdit *menu;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(343, 391);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 80, 24));
        zamow = new QPushButton(centralwidget);
        zamow->setObjectName(QString::fromUtf8("zamow"));
        zamow->setGeometry(QRect(59, 300, 91, 31));
        menu = new QPlainTextEdit(centralwidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(30, 50, 281, 241));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 300, 42, 31));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 343, 21));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Powrot", nullptr));
        zamow->setText(QCoreApplication::translate("Menu", "Zam\303\263w", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
