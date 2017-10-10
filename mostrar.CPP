#include <iostream.h>
#include <conio.h>
#include <stdio.h>


long main ( long i,  long cadena)
{
  char *Cadena=new char ;

    printf("igresa la fecha  ");
    scanf("%s",Cadena);



     cout << "la fecha es " << Cadena[0]<<Cadena[1]<< "/"<< Cadena[2]<<Cadena[3]<< "/"<< Cadena[4]<<Cadena[5]<<Cadena[6]<<Cadena[7]<< endl;


   getch();



   return 0;
}
