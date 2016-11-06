#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
float arreglos[4],suma=0;
int i;
for (i=0;i<4;i++)
{
printf("\n Ingrese valor:\n");
scanf("%f",&arreglos[i]);
suma+=arreglos[i];
}
float promedio=suma/4;
printf("\n La suma total es: %.2f",suma);
printf("\n El promedio total es: %.2f",promedio);
getch();
return 0;
}
