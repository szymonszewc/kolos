#ifndef stanowisko_artyleryjskie_h
#define stanowisko_artyleryjskie_h
#include <iostream>
#include <iomanip>
using namespace std;
class stanowisko_artyleryjskie
{
public:
    stanowisko_artyleryjskie();
    stanowisko_artyleryjskie(int a, int b, string d,int f,int g);
   float ret_X();
    float ret_Y();
    void view();
private:
    int x,y,range,quantity;
    string type;
    };
#endif // stanowisko_artyleryjskie_h
