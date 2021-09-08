#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 float por2, total, por1, val1, val2;

 int postulantes()
 {
  printf( "\n Ingrese la cantidad de hombres que se postularon: " );
 scanf( "%f", &val1 );
 printf( "\n Ingrese la cantidad de mujeres que se postularon: " );
 scanf( "%f", &val2 );
 total = val1+val2;
 por1 = (val1*100)/total;
 por2 = (val2*100)/total;
 printf( "\n El por%centaje de los hombres es: %f", 99, por1);
 printf( "\n El por%centaje de las mujeres es: %f", 99, por2);
 }
 postulantes();
 return 0;
 }
