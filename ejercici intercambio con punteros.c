#include<stdio.h>

void swing(int *x, int *y);

int main(){
	
	int x, y;
	
	printf("Introduzca los valores que desea intercambiar.\n\n");
	printf("1er numero: ");
	scanf("%i",&x);
	printf("2do numero: ");
	scanf("%i",&y);
	
	swing(&x, &y);
	
	system("pause");
	return 0;
}

void swing(int *x, int *y){
	
	int aux;
	
	aux = *x;
	*x = *y;
	*y = aux;
	
	printf("\nAhora el 1er numero es %i y el 2do numero es %i.\n\n",*x,*y);
}
