# include <stdio.h>

int main()
{
	int base,altura;
	float area;	
	
		printf ( "Asigna el valor de la base  en numeros enteros\n");
		scanf("%d",&base);
		
		printf ("Asigna el valor de la altura \n");
		scanf("%d",&altura);
		
	area=((base*altura)/2);
		printf("El area del triangulo con base %d y altura %d es: %0.2f\n",base, altura,area);
		
return 0;
}



