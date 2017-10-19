#include <iostream.h>
#include <conio.h>

#define PI 3.14

//se hace declaracion de la clase en este solo paso
class Circulo{
	protected:
   	double radio;
   public:
   	Circulo (double r);
      double calc_A();
};

//declaracion de clase padre
Circulo::Circulo(double r){
 	radio=r;
}

double Circulo::calc_A(){
 	return (PI*radio*radio);
}

//declaracion de clase hija

class Cilindro:public Circulo{
	protected:
   	double largo;
   public:
      Cilindro(double r, double l):Circulo(r), largo(l){}
   	double calc();
};
//termina seccion de declaracion de mi clase hija

double Cilindro::calc(){
	return (largo*Circulo::calc_A() );
}

class Esfera:public Circulo{
   public:
   	Esfera (double r):Circulo (r){}
      double cal_B();
};

double Esfera::cal_B(){
	return (4*Circulo::calc_A());
}


int main(){
	Circulo cir1(2);
   Cilindro cil1(3,4);
   Esfera esf1(5);

   cout<<"Area del circulo"<<cir1.calc_A()<<endl;
   cout<<"Volumen del cilindro"<<cil1.calc()<<endl;
   cout<<"Area de la esfera"<<esf1.cal_B()<<endl;
   getch();
   return 0;
}
