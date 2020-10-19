#include <stdio.h>
#include <math.h>
#define PI 3.1416
 int main() 
 {
	int r;
	float l, a;
	printf("Dame el valor del radio (en numeros enteros):\n");
	scanf("\n%d",&r);
	l= 2*PI*r;
	a = PI* pow(r,2);
	printf("La longuitud del circulo con radio %d es %0.3f\n",r,l);
 	printf("El area del circulo con radio %d, es %0.3f", r, a);
     return 0;
}



