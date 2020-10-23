#include <stdio.h>
 int main()
 {
 	float l1,l2,l3, perimetro;
 	
 	printf("Asigna el valor del lado 1\n");
 	scanf("%f",&l1);
 	
 	printf("Asigna el valor del lado 2\n");
 	scanf("%f",&l2);
 	
 	printf("Asigna el valor del lado 3\n");
 	scanf("%f",&l3);
 	
 	perimetro= l1+l2+l3;
 	printf("El perimetro del triangulo es: %0.2f",perimetro);
 	
 	return 0;
 }
