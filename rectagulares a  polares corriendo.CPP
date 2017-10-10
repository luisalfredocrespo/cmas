#include <iostream.h>
#include <conio.h>
#include <math.h>

//Declaracion de la clase
class coord{
   friend coord conv(coord&,float x, float y);
	private:
   	float val_ra,val_t;
   public:
       coord (float x, float y);
       void mostrar(){
        cout<<"rectagulares a polares "<<endl;
        cout<<"La valor r es:"<<val_ra<<endl;
        cout<<"La valor t es:"<<val_t<<endl;
       }
};

 coord::coord(float ra,float t){

        val_ra=ra;
        val_t=t;
}

coord conv (coord &o,float x ,float y){
        o.val_ra=sqrt(pow(x,2) + (pow,2));
        o.val_t=atan(y/x);

        return o;
}

  int main(){

  float x,y;
  x=5;
  y=0.91;

  coord c1(0,0);
  c1=conv(c1,x,y);

  c1.mostrar();

  getch();
     return 0;
}

