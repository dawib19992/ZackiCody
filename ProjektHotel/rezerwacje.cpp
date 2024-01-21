#include "rezerwacje.h"

Rezerwacje::Rezerwacje() {}

void Rezerwacje::setGosc(Gosc* gosc)
{
    obecnygosc = gosc;
}
void Rezerwacje::setRR(int rr)
{
    rodzajrezerwacji = rr;
}
Gosc* Rezerwacje::getGosc()
{
    return obecnygosc;
}
int Rezerwacje::GetRR()
{
    return rodzajrezerwacji;
}
