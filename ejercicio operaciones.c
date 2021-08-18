#include<stdio.h>

float suma (float a, float b);
float resta (float a, float b);
float multiplicacion (float a, float b);
float division (float a, float b);
int menu();

int main(){
	
	float sum, rest, mult, div, x, y;
	int op;
	
	printf("Introdusca el primer numero: ");
	scanf("%f",&x);
	
	printf("Introdusca el segundo numero: ");
	scanf("%f",&y);
	
	sum = suma(x,y);
	rest = resta(x,y);
	mult = multiplicacion(x,y);
	div = division(x,y);
	op = menu();
	
	switch(op){
		
		case 1:
			printf("\nEl resultado de la suma es %f.\n\n",sum);
			break;
		case 2:
			printf("\nEl resultado de la resta es %f.\n\n",rest);
			break;
		case 3:
			printf("\nEl resultado de la multiplicacion es %f.\n\n",mult);
			break;
		case 4:
			printf("\nEl resultado de la division es %f.\n\n",div);
			break;
		case 5:
			printf("\nGracias por utilizar este programa.\n\n");
			break;
		default:
			printf("\nLa opcion elegida es invalida.\n\n");
			break;
	}
	
	system("pause");
	return 0;
}

int menu(){
	
	int op;
	
	printf("Elija una opcion:\n\n 1: suma.\n 2: resta.\n 3: multiplicacion.\n 4: division.\n 5: salir\n Opcion: ");
	scanf("%i",&op);
	
	return op;
}

float suma(float a, float b){
	
	float sum;
	
	sum = a+b;
	
	return sum;
}

float resta(float a, float b){
	
	float rest;
	
	rest = a-b;
	
	return rest;
}

float multiplicacion(float a, float b){
	
	float mult;
	
	mult = a*b;
	
	return mult;
}

float division(float a, float b){
	
	float div;
	
	div = a/b;
	
	return div;
}
