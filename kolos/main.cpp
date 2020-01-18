#include <iostream>
#include "stanowisko_artyleryjskie.h"
#include "mozdzierz.h"
using namespace std;

int main()
{
    stanowisko_artyleryjskie s1;
    s1.view();
    stanowisko_artyleryjskie s2(200,200,"Armata",2555,10);
    s2.view();
    mozdzierz m1(0.1,2.4,2,100,100,3000,5);
    m1.view();
    m1.prowadzenie_ognia();
    return 0;
}
