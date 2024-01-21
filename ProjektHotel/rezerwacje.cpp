#include "rezerwacje.h"

Rezerwacje::Rezerwacje() {}

int Rezerwacje::getRodzajRezerwacji()
{
    return rodzaj_rezerwacji;
}

Gosc* Rezerwacje::getGosc()
{
    return obecnygosc;
}

void Rezerwacje::setGosc(Gosc* gosc)
{
    obecnygosc = gosc;
}

void Rezerwacje::setRodzajRezerwacj(int rr)
{
    rodzaj_rezerwacji = rr;
}
