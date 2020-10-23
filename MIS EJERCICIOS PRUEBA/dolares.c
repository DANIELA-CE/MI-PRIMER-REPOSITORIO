#include <stdio.h>

int main()
{
	float G,L,J,Total;
		printf("Guillerno tiene N dolares.\n Luis tiene la mitad de lo que tiene Guillermo. \n Juan tiene la mitad de lo que posee Luis y Guillermo juntos \n");
		printf("Cuantos dolares tiene Guillermo \?\n");
		scanf("\v%f",&G);
		
		L= G/2;
		printf("La cantidad de dolares que tiene Luis es: %0.2f\n",L);
		J= (G+L)/2;
		printf("La cantidad de dolares que tiene Juan es %0.2f\n",J);
		
		Total= G+L+J;
		printf("Entre Guillermo, Luis y Juan juntan %0.2f dolares en total.\n",Total);
	return 0;
}
