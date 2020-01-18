#ifndef przeglad_h
#define przeglad_h
#include "samochod.h"
#include <iostream>
#include <iomanip>
using namespace std;
class przeglad:public samochod
{
    public:
    przeglad();
    przeglad(string a,string b, string c, string d, int e,float f,bool g);
    void testy();
    void view();
    private:
        int test_hamulcow,test_zawieszenia,test_swiatel,test_spalin,test_wyciekow;
};
#endif // przeglad_h
