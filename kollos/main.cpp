#include <iostream>
#include "przeglad.h"

using namespace std;

int main()
{
    samochod s1;
    s1.view();
    s1.LPG();
    s1.view();
    przeglad p1;
    p1.view();
    p1.testy();
    p1.view();
    return 0;
}
