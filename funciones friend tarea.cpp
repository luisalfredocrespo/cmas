#include <iostream.h>
#include <conio.h>

class Complejo{
	friend double multi_real(Complejo &a, Complejo &b);
   friend double multi_imag(Complejo &a, Complejo &b);

   private:
   	double real, imag;
      friend double multi_imag(Complejo &a, Complejo &b);
   public:
   	Complejo(double=0, double=0);
      void mostrar();
};

Complejo::Complejo(double r, double i){
	real=r;
   imag=i;
}

double multi_real(Complejo &a, Complejo &b){
	return (a.real*b.real);
}

double multi_imag(Complejo &a, Complejo &b){
	return (a.imag*b.imag);
}

void Complejo ::mostrar(){
	cout<<real<<", "<<imag<<"i"<<endl;
}

int main (){
 Complejo n1(3.2, 5.6), n2(8.1,1.4);
 double re, im;

 n1.mostrar();
 n2.mostrar();

 re=multi_real(n1, n2);
 im=multi_imag(n1, n2);

 Complejo res(re, im);
 cout<<"La multiplicacion de los complejos es: ";
 res.mostrar();

 getch();
 return 0;

}


