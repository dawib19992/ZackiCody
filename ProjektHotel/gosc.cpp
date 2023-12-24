#include "gosc.h"

Gosc::Gosc(const QString& login_, const QString& haslo_)
{
    login = login_;
    haslo = haslo_;
}
QString Gosc::getLogin() const
{
    return login;
}
QString Gosc::getHaslo() const
{
    return haslo;
}
