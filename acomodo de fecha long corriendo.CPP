#include <iostream.h>
#include <conio.h>

class Fecha{

	private:
   	int dia,mes,anio;
   public:               //Agregar Fecha (long f) un argumento y tiene que tener dd,mm,aaaa      no char, no arreglos
      Fecha (){}
      Fecha (int d, int m, int a);

      ~Fecha(){           //Java no tiene destructor
      	cout<<"Invocando al destructor"<<endl;
         }
   	      void set_Fecha(int d, int m, int a);
      //seccion de implementacion inline
            void mostrar (){
           cout<<"La fecha es "<<dia<<"/"<<mes<<"/"<<anio<<endl;
      }
};

//seccion de implementacion fuera de linea
void Fecha::set_Fecha(int d, int m, int a){
 	dia=d;
   mes=m;
   anio=a;
}

Fecha::Fecha (int d, int m, int a){
	dia=d;
   mes=m;
   anio=a;
}

   int main (){
	//declaracion de objetos
   int d,mm,aa;


   Fecha f1,f2,f3,f4(10,9,2015);
   f1.set_Fecha(20,12,2000);
   f1.mostrar();
   //almacena datos a traves de variables
   cout<<"ingresa dia ";
   cin>>d;
   cout<<"\ningresa el mes ";
   cin>>mm;
   cout<<"\ningresa el anio ";
   cin>>aa;

   //trasladar los valores de las variables al objeto a partir del metodo mutador
   f2.set_Fecha(d,mm,aa);
   f2.mostrar();

   //f3.mostrar();

   long aaaammdds,dds,mms,aaaas;

     cout <<"ingresa fecha AAAAMMDD:";
     cin>>aaaammdds;

     dds = aaaammdds % 100;
     mms = (aaaammdds % 10000) /100;
     aaaas = (aaaammdds / 10000);
     cout << " La fecha es " << aaaas << " / " << mms << " / " << dds << endl;

     cout << " dia: " << dds << endl;
     cout << " mes: " << mms << endl;
     cout << " año: " << aaaas << endl;





   getch();
   return 0;
}

