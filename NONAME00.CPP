#include <iostream.h> //librer�a
#include <conio.h> //librer�a

void main()
{
float re, rc, hc, ae, ve, ac, vc; //declara variables
float pi=3.141592; // variable pi

// esfera
cout<<"INGRESE EL RADIO DE LA ESFERA: ";
cin>>re; //radio esfera

//calcula �rea esfera
ae=4*pi*(re*re); //formula �rea

//calcula volumen esfera
ve=(4/3)*pi*(re*re*re); //formula volumen

//muestra en pantalla resultados
cout<<"EL AREA DE LA ESFERA ES: "<<ae<<endl;
cout<<"EL VOLUMEN DE LA ESFERA ES: "<<ve<<endl;
cout<<endl; //salto de l�nea

//cilindro
cout<<"INGRESE EL RADIO DEL CILINDRO: ";
cin>>rc; //radio cilindro
cout<<"INGRESE LA ALTURA DEL CILINDRO: ";
cin>>ac; //altura cilindro

//calcula �rea cilindro
ac=(2*pi*rc*hc)+(2*pi*(rc*rc));
//calcula volumen cilindro
vc=pi*(rc*rc)*hc;

//muestra en pantalla resultados
cout<<"EL AREA DEL CILINDRO ES: "<<ac<<endl;
cout<<"EL VOLUMEN DEL CILINDRO ES: "<<vc<<endl;

getch();
}
