#include<stdio.h>

float perimetro (int a);
float area (int a);
float volumen (int a);

int main(){
	
	float r, per, are, vol;
	int op;
	
	printf("Introdusca el radio de la circuferencia o esfera: ");
	scanf("%f",&r);
	
	printf("Elija una opcion:\n\n 1: perimetro.\n 2: area.\n 3: volumen.\n Opcion: ");
	scanf("%i",&op);
	
	per = perimetro(r);
	are = area(r);
	vol = volumen(r);
	
	switch(op){
		
		case 1:
			printf("\nEl perimetro de la circuferencia de radio %f es %f.\n\n",r,per);
			break;
		case 2:
			printf("\nEl area de la circuferencia de radio %f es %f.\n\n",r,are);
			break;
		case 3:
			printf("\nEl volumen de la esfera de radio %f es %f.\n\n",r,vol);
			break;	
		default:
			printf("\nLa opcion marcada es invalida.\n\n");
	}
	
	system("pause");
	return 0;
}

float perimetro (int a){
	
	float pi, per;
	pi = 3.1416;
	
	per = 2*pi*a;
	
	return per;
}

float area (int a){
	
	float pi, are;
	pi = 3.1416;
	
	are = pi*(a*a);
	
	return are;
}

float volumen (int a){

	float pi, vol;
	pi = 3.1416;
	
	vol = (4/3)*pi*(a*a);
	
	return vol;
}
