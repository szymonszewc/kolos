#include "samochod.h"
samochod::samochod()
{
    marka="BMW";
    model="E-36";
    rok=1998;
    nr_r="LLE 9897";
    nr_VIN="WX91093612613";
    przebieg=199000;
    lpg=1;
}
samochod::samochod(string a,string b, string c, string d, int e,float f,bool g):marka(a),model(b),nr_r(c),nr_VIN(d),rok(e),przebieg(f),lpg(g){};
void samochod::view()
{
cout<<"Marka"<<setw(15)<<"Model"<<setw(15)<<"Nr_reje"<<setw(15)<<"Nr_VIN"<<setw(15)<<"rok_pro"<<setw(15)<<"przebieg"<<setw(15)<<"Czy_LPG"<<endl;
if(lpg)
    cout<<setw(1)<<marka<<setw(16)<<model<<setw(15)<<nr_r<<setw(20)<<nr_VIN<<setw(10)<<rok<<setw(15)<<przebieg<<setw(15)<<"TAK"<<endl;
else
    cout<<marka<<setw(15)<<model<<setw(15)<<nr_r<<setw(15)<<nr_VIN<<setw(15)<<rok<<setw(15)<<przebieg<<setw(15)<<"NIE"<<endl;
}
 void samochod::LPG()
 {
     int a,n=1;
     if(lpg)
     {do{
         cout<<"Czy zdemontowac lpg?\n1-TAK 0-NIE"<<endl;
         cin>>a;
         switch(a)
         {
         case 0:
            lpg=lpg;
            cout<<"Nie zdemontowano"<<endl;
            n=0;
            break;
         case 1:
            lpg=!lpg;
            cout<<"Nie masz LPG"<<endl;
            n=0;
            break;
         default:
            cout<<"Podaj jeszcze raz"<<endl;
            n=1;
         }
         }while(n!=0);
         }
     else
     {
         cout<<"Zamontowac lpg?\n1-TAK 0-NIE"<<endl;
         cin>>a;
                  do{
         switch(a)
         {
         case 0:
            lpg=lpg;
            cout<<"Nie zamontowano"<<endl;
            n=0;
            break;
         case 1:
            lpg=!lpg;
            cout<<"Masz LPG"<<endl;
            n=0;
            break;
         default:
            cout<<"Podaj jeszcze raz"<<endl;
            n=1;
         }
        } while(n!=0);

 }
     }
