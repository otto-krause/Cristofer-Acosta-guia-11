#include <stdio.h>
#include <stdlib.h>

 int main()
 {
int perimetro, area, val1, val2;
int perimetroarea()
 {
 printf( "\n Introduzca dos valores: \n" );
 scanf( "%d", &val1 );
 scanf( "%d", &val2 );
 perimetro = 2 * val1 + 2 * val2;
 area = val1 * val2;
 printf( "\n El perimetro es %d y su area es %d", perimetro,area);
 }
 perimetroarea();
 return 0;
 }
