QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gosc.cpp \
    main.cpp \
    logowanie.cpp \
    menu.cpp \
    panelsterowania.cpp \
    rezerwujparking.cpp \
    rezerwujpokoj.cpp \
    rezerwujsk.cpp

HEADERS += \
    gosc.h \
    logowanie.h \
    menu.h \
    panelsterowania.h \
    rezerwujparking.h \
    rezerwujpokoj.h \
    rezerwujsk.h

FORMS += \
    logowanie.ui \
    menu.ui \
    panelsterowania.ui \
    rezerwujparking.ui \
    rezerwujpokoj.ui \
    rezerwujsk.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
