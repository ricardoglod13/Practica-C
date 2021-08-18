#include<stdio.h>

void obtener_valores(float *x, float *y);
float calcular(float x, float y);
void imprimir_respuesta(float x);

int main(){
	
	float res, vol, intensidad;
	
	obtener_valores(&res, &vol);
	intensidad = calcular(res, vol);
	imprimir_respuesta(intensidad);
	
	system("pause");
	return 0;
}

void obtener_valores(float *x, float *y){
	
	printf("Ingrese los valores de la resistencia y el voltaje.\n\n");
	printf("Ingrese el valor de la resistencia: ");
	scanf ("%f",x);
	printf("Ingrese el valor del voltaje: ");
	scanf ("%f",y);	
}

float calcular(float x, float y){
	
	float intensidad;
	
	intensidad = y / x;
	
	return intensidad;	
}

void imprimir_respuesta(float x){
	
	printf("La intensidad de la corriente que pasa por dicha resistencia es %f.\n\n",x);
}
