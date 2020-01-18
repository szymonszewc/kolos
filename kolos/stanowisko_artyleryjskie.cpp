#include "stanowisko_artyleryjskie.h"

stanowisko_artyleryjskie::stanowisko_artyleryjskie()
{
    x=100;
    y=100;
    range=3000;
    type="Mozdzierz";
    quantity=5;
}
stanowisko_artyleryjskie::stanowisko_artyleryjskie(int a, int b, string d,int f,int g):x(a),y(b),type(d),range(f),quantity(g){};
float stanowisko_artyleryjskie::ret_X()
{
    return x;
}
float stanowisko_artyleryjskie::ret_Y()
{
    return y;
}
 void stanowisko_artyleryjskie::view()
 {
     cout<<"Grid_X"<<setw(15)<<"Grid_Y"<<setw(15)<<"Type"<<setw(15)<<"Range"<<setw(15)<<"Members"<<endl;
        cout<<setw(1)<<setfill(' ')<<""<<setw(4)<<setfill('0')<<x;
        cout<<setw(11)<<setfill(' ')<<""<<setw(4)<<setfill('0')<<y;
        cout<<setw(10)<<setfill(' ')<<""<<type;
        cout<<setw(7)<<setfill(' ')<<""<<range;
        cout<<setw(12)<<setfill(' ')<<""<<quantity<<endl;
 }
