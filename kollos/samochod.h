#ifndef samochod_h
#define samochod_h
#include <iostream>
#include <iomanip>
using namespace std;
class samochod
{
public:
    samochod();
    samochod(string a,string b, string c, string d, int e,float f,bool g);
    void view();
    void LPG();
    private:
    string marka,model,nr_r,nr_VIN;
    int rok,przebieg;
    bool lpg;
};
#endif // samochod_h
