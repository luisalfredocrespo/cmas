//diseña uma clase que permita la conversion de cordenadas polares a rectagulares
//implementando constructores y funciones friend.
//r, theta class coord{
//(x,y)

#include <iostream.h>
#include <conio.h>
#include <math.h>

//Declaracion de la clase
class coord{
   friend coord conv(coord&,float r, float t);
	private:
   	float val_x,val_y;
   public:
       coord (float x, float y);
       void mostrar(){

        cout<<"La valor x es:"<<val_x<<endl;
        cout<<"La valor y es:"<<val_y<<endl;
       }
};

 coord::coord(float x,float y){

        val_x=x;
        val_y=y;
}

coord conv (coord &o,float r ,float t){
        o.val_x=r*cos(t);
        o.val_y=r*sin(t);

        return o;
}

  int main(){

  float ra,th;
  ra=5;
  th=0.91;

  coord c1(0,0);
  c1=conv(c1,ra,th);

  c1.mostrar();

  getch();
     return 0;
}

