#include <stdio.h>
 int main()
 {
 	float l1, perimetro;
 	
 	printf("Un triangulo equilatero es aquel que sus tres lados miden lo mismo,\n para calcular el perimetro de un triangulo equilatero\n");
 	printf("Asigna el valor de uno de los lados:");
 	scanf("%f",&l1);
 	
 	perimetro= l1*3;
 	printf("El perimetro del triangulo es: %0.2f",perimetro);
 	
 	return 0;
 }
