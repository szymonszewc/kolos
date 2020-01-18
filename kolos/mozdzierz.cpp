#include "mozdzierz.h"

mozdzierz::mozdzierz():stanowisko_artyleryjskie()
{
    wsp_czasu_lotu=0.02;
    czas_przeladowania=5;
    typ_amunicji=1;
};
mozdzierz::mozdzierz(float a, float b, int c, int d, int g,int h, int i):stanowisko_artyleryjskie(d,g,"Mozdzierz",h,i),typ_amunicji(c),wsp_czasu_lotu(a),czas_przeladowania(b){};
void mozdzierz::view()
{
    cout<<"MOZDZIERZ"<<endl;
    stanowisko_artyleryjskie::view();
    cout<<"wsp.czasu_lotu"<<setw(20)<<"czas_przeladowania"<<setw(20)<<"Typ amunicji"<<endl;
    if(typ_amunicji==1)
    cout<<setw(11)<<wsp_czasu_lotu<<setw(20)<<czas_przeladowania<<setw(20)<<"HE"<<endl;
    if(typ_amunicji==2)
    cout<<setw(11)<<wsp_czasu_lotu<<setw(20)<<czas_przeladowania<<setw(20)<<"Smoke"<<endl;
    if(typ_amunicji==3)
    cout<<setw(11)<<wsp_czasu_lotu<<setw(20)<<czas_przeladowania<<setw(20)<<"Iluminating"<<endl;
    if((typ_amunicji!=3)&&(typ_amunicji!=2)&&(typ_amunicji!=1))
    cout<<setw(11)<<wsp_czasu_lotu<<setw(20)<<czas_przeladowania<<setw(20)<<"nie wybrano"<<endl;
}
void mozdzierz::salwa(float a, float b, int c, int d)
{
    float x=1, y=b, dystans,azymut,czas,n=1,czas_salwy;
    int ammo=c,QUANT=d;
    dystans=pow((pow(ret_X()-x,2)+pow(ret_Y(),2)),0.5);
    azymut=atan((y-ret_Y())/(x-ret_X()));
    azymut=((azymut*180)/3.14);
    cout<<"dystans:"<<dystans<<endl;
    cout<<"azymut"<<azymut<<endl;
    do{
    switch(ammo){
case 1:
    czas=(dystans*wsp_czasu_lotu*1);
    n=0;
    break;
case 2:
    czas=(dystans*wsp_czasu_lotu*1.2);
    n=0;
    break;
case 3:
    czas=(czas=dystans*wsp_czasu_lotu*1.4);
    n=0;
    break;
default:
    cout<<"Podaj typ amunicji 1,2 lub 3:"<<endl;
    cin>>ammo;
    n=1;
    }
    }while(n!=0);
    cout<<"Czas:"<<czas<<endl;
    czas_salwy=(czas_przeladowania*QUANT)+czas;
    cout<<"Czas salwy: "<<czas_salwy<<endl;
}
void mozdzierz::prowadzenie_ognia()
{
    int b=1;
    float x,y;
    int ammo,QUANT;
    while(b!=0){
    cout<<"Podaj wspolrzedne celu (x,y), typ amunicji (1-HE,2-SMOKE,3-ILUMINATING) i ilosc strzalow"<<endl;
    cin>>x>>y>>ammo>>QUANT;
    salwa(x,y,ammo,QUANT);
    cout<<"Kontynuowac? 1-tak/0-nie"<<endl;
    cin>>b;
    }
}
