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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *danie5;
    QLineEdit *cena_danie5;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *danie3;
    QLineEdit *cena_danie3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *danie2;
    QLineEdit *cena_danie2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *danie4;
    QLineEdit *cena_danie4;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *danie1;
    QLineEdit *cena_danie1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(312, 379);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 260, 224, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        danie5 = new QLineEdit(layoutWidget);
        danie5->setObjectName(QString::fromUtf8("danie5"));

        horizontalLayout_5->addWidget(danie5);

        cena_danie5 = new QLineEdit(layoutWidget);
        cena_danie5->setObjectName(QString::fromUtf8("cena_danie5"));

        horizontalLayout_5->addWidget(cena_danie5);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 180, 224, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        danie3 = new QLineEdit(layoutWidget_2);
        danie3->setObjectName(QString::fromUtf8("danie3"));

        horizontalLayout_3->addWidget(danie3);

        cena_danie3 = new QLineEdit(layoutWidget_2);
        cena_danie3->setObjectName(QString::fromUtf8("cena_danie3"));

        horizontalLayout_3->addWidget(cena_danie3);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(40, 140, 224, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        danie2 = new QLineEdit(layoutWidget_3);
        danie2->setObjectName(QString::fromUtf8("danie2"));

        horizontalLayout_2->addWidget(danie2);

        cena_danie2 = new QLineEdit(layoutWidget_3);
        cena_danie2->setObjectName(QString::fromUtf8("cena_danie2"));

        horizontalLayout_2->addWidget(cena_danie2);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(40, 220, 224, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        danie4 = new QLineEdit(layoutWidget_4);
        danie4->setObjectName(QString::fromUtf8("danie4"));

        horizontalLayout_4->addWidget(danie4);

        cena_danie4 = new QLineEdit(layoutWidget_4);
        cena_danie4->setObjectName(QString::fromUtf8("cena_danie4"));

        horizontalLayout_4->addWidget(cena_danie4);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(40, 100, 224, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        danie1 = new QLineEdit(layoutWidget_5);
        danie1->setObjectName(QString::fromUtf8("danie1"));

        horizontalLayout->addWidget(danie1);

        cena_danie1 = new QLineEdit(layoutWidget_5);
        cena_danie1->setObjectName(QString::fromUtf8("cena_danie1"));

        horizontalLayout->addWidget(cena_danie1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 300, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 300, 80, 24));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 312, 21));
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
        pushButton_2->setText(QCoreApplication::translate("Menu", "<-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
