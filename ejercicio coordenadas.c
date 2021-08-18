#include<stdio.h>

int cuadrante(int a , int b);

int main(){
	
	int x, y, cuad;
	
	printf("Introdusca la coordenada x del punto: ");
	scanf("%i",&x);
	
	printf("Introdusca la coordenada y del punto: ");
	scanf("%i",&y);
	
	cuad = cuadrante(x,y);
	
	if(cuad != 0){
		printf("El punto se encuentra en el cuadrante %i.\n\n",cuad);
		
	}else{
		printf("El punto se encuentra sobre un eje.\n\n");
		
	}
	
	
	system("pause");
	return 0;
}

int cuadrante(int a, int b){
	
	int cuad;
	
	if(a == 0 || b == 0){
		return 0;
		
	}else if(a > 0 && b > 0){
		cuad = 1;
		
	}else if(a < 0 && b > 0){
		cuad = 2;
		
	}else if(a < 0 && b < 0){
		cuad = 3;
		
	}else if(a > 0 && b < 0){
		cuad = 4;
		
	}
	
	if(a != 0 || b != 0){
		return cuad;
		
	}
}
