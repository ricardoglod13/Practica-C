#include<stdio.h>

void intro_enteros(int *num);
void ordenar(int *num);
void imprimir(int *num);

int main(){
	
	int num[10];
	
	printf("Bienvenido, en este programa se compararan 10 numeros enteros introducidos por ti y se te dira cual es el mayor\n\n");
	
	intro_enteros(num);
	ordenar(num);
	imprimir(num);
	
	system("pause");
	return 0;
}

void intro_enteros(int *num){
	
	int i;
	
	for(i = 0; i < 10; i++){
		
		printf("Coloque el %i° numero entero: ",i+1);
		scanf("%i",num+i);
	}
}

void ordenar(int *num){
	
	int i, j, aux;
	
	for(i = 0; i < 10; i++){
		for(j = i; j < 10; j++){
			
			if(num+i < num+j){
				
				aux = *(num+i);
				*(num+i) = *(num+j);
				*(num+j) = aux;
			}
		}
	}
}

void imprimir(int *num){
	
	printf("\nEl mayor numero que haz intoducido es el %i\n\n",*(num+0));
}
