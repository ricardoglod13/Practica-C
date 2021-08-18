#include<stdio.h>
#include<string.h>

typedef struct{
	
	char nom[31];
	char ape[31];
	char dni[11];
	int edad;
}per;

void formulario(per x[]);
void imprimir(per x[]);
int busqueda_persona(per x[], char *dni);
void cambio(char x[]);

int main(){
	
	per intro[20];
	int s_per;
	char resp, dni[11];
	
	printf("Este es un formulario para guardar datos de personas.\n\n");
	
	formulario(intro);
	imprimir(intro);
	
	printf("Si desea buscar la edad de una persona por su dni marque S para si o N para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
		
		printf("\n\nIntroduzca el dni de la persona que desea buscar: ");
		fflush(stdin);
		fgets(dni,11,stdin);
		cambio(dni);
		
		s_per = busqueda_persona(intro, dni);
		
		if(s_per != 0){
			
			printf("\nLa edad de la persona con el dni ingresado es: %i\n\n",s_per);	
		}else{
			
			printf("\nEl dni ingresado no existe\n\n");
		}
	}
	
	system("pause");
	return 0;
}

void formulario(per x[]){
	
	int i;
	
	for(i = 0; i < 20; i++){
		
	printf("Introduzca el nombre de la %i° persona: ", i+1);
	fflush(stdin);
	fgets(x[i].nom,31,stdin);
	cambio(x[i].nom);
	printf("Introduzca los apellidos de la %i° persona: ", i+1);
	fflush(stdin);
	fgets(x[i].ape,31,stdin);
	cambio(x[i].ape);
	printf("Introduzca el dni de la %i° persona: ", i+1);
	fflush(stdin);
	fgets(x[i].dni,11,stdin);
	cambio(x[i].dni);
	printf("Introduzca la edad de la %i° persona: ", i+1);
	fflush(stdin);
	scanf("%i",&x[i].edad);
	}
}

void imprimir(per x[]){
	
	int i;
	char resp;
	
	printf("\nSi desea imprimir marque S para si o N para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
		
		for(i = 0; i < 20; i++){
			
			printf("\n\nEl nombre de la %i° persona es: %s\n", i+1, x[i].nom);
			printf("Los apellidos de la %i° persona son: %s\n", i+1, x[i].ape);
			printf("El dni de la %i° persona es: %s\n", i+1, x[i].dni);
			printf("La edad de la %i° persona es: %i\n\n", i+1, x[i].edad);
		}
	}		
}

int busqueda_persona(per x[], char *dni){
	
	int i, aux, s_pers, j;
	aux = 0;
	
	for(i = 0; i < 20 && aux == 0; i++){
		
		j = strcmp(dni, x[i].dni);
		
		if(j != 0){
			
			aux = 1;
			return 0;
		}else{
			
			s_pers = x[i].edad;
			return s_pers;
		}
	}
}

void cambio(char x[]){
	
	int i, aux;
	aux = 0;
	
	for(i = 0; i < 31 && aux == 0; i++){
		
		if(x[i] == '\n'){
			
			x[i] = '\0';
			aux = 1;
		}
	}
}
