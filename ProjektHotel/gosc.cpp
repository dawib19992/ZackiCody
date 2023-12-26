#include "gosc.h"

Gosc::Gosc(const int id_)
{
    id = id_;
}

int Gosc::getID() const
{
    return id;
}

QString Gosc::getLogin() const
{
    return login;
}

QString Gosc::getHaslo() const
{
    return haslo;
}

void Gosc::setLogin(QString login_)
{
    login =  login_;
}

void Gosc::setHaslo(QString haslo_)
{
    haslo = haslo_;
}

