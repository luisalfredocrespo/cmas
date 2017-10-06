#include <iostream>
#include <iostream.h>
#include <conio.h>




int main(){
    long aaaammdd,dd,mm,aaaa;

     cout <<"ingresa fecha AAAAMMDD:";
     cin>>aaaammdd;

     dd = aaaammdd % 100;
     cout << "dia: " << dd << endl;


     mm = (aaaammdd % 10000) /100;
     cout << "mes: " << mm << endl;

     aaaa = (aaaammdd / 10000);
     cout << "año: " << aaaa << endl;


     getch();
     return 0;
}

