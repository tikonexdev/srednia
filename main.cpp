#include <iostream>
#include <cstdlib>
using namespace std;
float oceny[10]; float suma=0, srednia;
int ileocen;
int main()
{cout<<"ocena z plusem rowna sie ocena.75 a ocena z minusem rowna sie na ocena minus 0.25" <<endl;
     cout<<"ile masz ocen"<<endl;
cin >> ileocen ;
    for (int i=0; i<ileocen; i++){
        cout <<endl <<"podaj  ocene numer: " <<i+1<<endl;
        cin>>oceny[i];
        suma += oceny[i];
    }
cout<<endl<<"suma = " <<suma;
    srednia = suma / ileocen;
cout <<endl<<"twoja srednia to : " <<srednia;
getchar();
}
