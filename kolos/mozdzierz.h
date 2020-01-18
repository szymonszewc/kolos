#ifndef mozdzierz_h
#define mozdzierz_h
#include "stanowisko_artyleryjskie.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
class mozdzierz:public stanowisko_artyleryjskie
{
public:
    mozdzierz();
    mozdzierz(float a, float b, int c, int d, int g,int h, int i);
    void salwa(float a, float b, int c, int d);
    void prowadzenie_ognia();
    void view();
private:
    float wsp_czasu_lotu,czas_przeladowania;
    int typ_amunicji;
};
#endif // mozdzierz_h
