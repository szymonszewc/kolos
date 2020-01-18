#include "przeglad.h"
przeglad::przeglad():samochod()
{
    test_hamulcow=0;
    test_spalin=0;
    test_swiatel=0;
    test_wyciekow=0;
    test_zawieszenia=0;
}
przeglad::przeglad(string a,string b, string c, string d, int e,float f,bool g):test_hamulcow(100),test_zawieszenia(100),test_swiatel(100),test_spalin(100),test_wyciekow(100),samochod(a,b,c,d,e,f,g){};
void przeglad::testy()
{
    cout<<"Test zawieszenia:\n";
    cin>>test_zawieszenia;
    cout<<"Test swiatel:\n";
    cin>>test_swiatel;
    cout<<"Test spalin:\n";
    cin>>test_spalin;
    cout<<"Test wyciekow:\n";
    cin>>test_wyciekow;
    cout<<"Test hamulcow:\n";
    cin>>test_hamulcow;
}
void przeglad::view()
{
    string a,b,c,d,e;
    cout<<"WYNIK PRZEGLADU:"<<endl;
samochod::view();
cout<<"\n";
cout<<"Test zawieszenia"<<setw(15)<<"Test swiatel"<<setw(15)<<"Test spalin"<<setw(15)<<"Test wyciekow"<<setw(15)<<"Test hamulcow"<<endl;
cout<<setw(13)<<test_zawieszenia<<setw(15)<<test_swiatel<<setw(15)<<test_spalin<<setw(15)<<test_wyciekow<<setw(15)<<test_hamulcow<<endl;
if(test_swiatel==100)
    a="Pozytywny";
else
    a="Negatywny";
if(test_hamulcow>9)
    b="Pozytywny";
else
    b="Negatywny";
if(test_spalin<30)
    c="Pozytywny";
else
    c="Negatywny";
if(test_wyciekow>99)
    d="Pozytywny";
else
    d="Negatywny";
    if(test_zawieszenia>65)
    e="Pozytywny";
else
    e="Negatywny";
    cout<<setw(16)<<a<<setw(15)<<b<<setw(15)<<c<<setw(15)<<d<<setw(15)<<e<<endl;
if(test_swiatel==100&&test_hamulcow>90&&test_spalin<30&&test_wyciekow>99&&test_zawieszenia>65)
cout<<"ZALICZONY\n";
else
    cout<<"NIEZALICZONY\n";
}
