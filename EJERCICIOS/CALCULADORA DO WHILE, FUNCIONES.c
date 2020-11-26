#include <stdio.h>
#include <math.h>
#include <windows.h>

long factorial(int n){
		long resultado;
	 if (n==0)
		 return 1;
	 else
	 resultado= n*factorial(n-1);
	return resultado;
}

float suma(float n1, float n2){
	float resultado=0;
	resultado= n1+n2;
	return resultado;
}
float resta(float n1, float n2){
	float resultado=0;
	resultado= n1-n2;
	return resultado;
}

float division(float n1, float n2){
	float resultado=0;
	resultado= n1/n2;
	return resultado;
}

float multiplicacion(float n1, float n2){
	float resultado=0;
	resultado= n1*n2;
	return resultado;
}

float potencia(float n1, float n2){
	float resultado=0;
	resultado= pow(n1,n2);
	return resultado;
}

float raiz(float n1){
	float resultado=0;
	resultado= sqrt(n1);
	return resultado;
}

int main()
{

	int opcion;
	float n1, n2, resultado;
	int n;
	do{
		system("pause");
		system("cls");
	printf("Elige una opcion:\n");
	
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz \n");
	printf("\t 7.- Factorial\n");
	printf("\t 8.- Salir\n");
	scanf("%d",&opcion);
			system("cls");	
	
	if (opcion==6){
	printf("\n Escribe el numero: ");
	scanf("\n%f",&n);
	
	} else if (opcion>=8){
 printf("Adios, vuelve pronto\n");
 
		}else if(opcion==7){
				printf("Digita un numero: ");
					scanf("\n%d",&n);
			}else{

		printf("\n Escribe el primer numero: ");
	scanf("\n%f",&n1);
		printf("\t\n Escribe el segundo numero: ");
	scanf("\n%f",&n2);
		}

	
	switch(opcion)
	{
	
	case 1:
	
		printf("\n El resultado es %0.2f\n", suma(n1,n2));
		
			break;
	case 2:
	
		printf("\n El resultado es %0.2f\n", resta(n1,n2));
			break;
	case 3: 
		if(n2==0)
		{
			printf("No se puede dividir entre 0\n");
		}
		else{
	printf("\n El resultado es %0.2f\n", division(n1,n2));
		}
		break;
	case 4: 
		
		printf("\n El resultado es %0.2f\n", multiplicacion(n1,n2));
		break;
	case 5: 		
	
		printf("\n El resultado es %0.2f\n",potencia(n1,n2));
		break;
	case 6: 
		if(n1<0){
				printf("Error matematico");
		}
		else{
			printf("\n El resultado es %0.2f\n",raiz(n1));
		}
		break;
	case 7:
	printf("%ld\n",factorial(n));
		
			break;	
	default:
		exit(0);
	}
	}while(opcion<8);
	}
