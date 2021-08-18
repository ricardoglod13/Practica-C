#include<stdio.h>
#include<string.h>

typedef struct{
	
	int nota;
	char alum[50];
}alumno;

void formulario(alumno x[][5]);
void imprimir(alumno x[][5]);
void buscar(alumno x[][5]);
void media(alumno x[][5]);
void media5(alumno x[][5]);
void mayor(alumno x[][5]);
void menor(alumno x[][5]);
void cambio(char x[]);

int main(){
	
	char resp;
	alumno m[2][5];
	resp = 's';
	
	printf("Este programa es para ingresar (ademas de otras acciones) alumnos y sus respectivas notas.\n\n");
	
	do{
		
		formulario(m);
		imprimir(m);
		buscar(m);
		media(m);
		media5(m);
		mayor(m);
		menor(m);
		
		printf("\nSi desea repetir marque S para si o cualquier letra para no: ");
		fflush(stdin);
		scanf("%c",&resp);
		printf("\n");
		
	}while(resp == 's' || resp == 'S');
	
	system("pause");
	return 0;
}

void formulario(alumno x[][5]){
	
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 5; j++){
			
			printf("Introduzca el nombre completo del alumno: ");
			fflush(stdin);
			fgets(x[i][j].alum,50,stdin);
			cambio(x[i][j].alum);
			printf("Introduzca la nota del alumno: ");
			fflush(stdin);
			scanf("%i",&x[i][j].nota);
			
			while(x[i][j].nota < 0 || x[i][j].nota > 20){
				
				printf("La nota debe ser mayor a 0 y menor a 20, vuelva a introducir la nota: ");
				fflush(stdin);
				scanf("%i",&x[i][j].nota);
			}
		}
	}
}
	
void imprimir(alumno x[][5]){
	
	int i, j;
	char resp;
	
	printf("\nSi desea imprimir marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	printf("\n");
	
	if(resp == 's' || resp == 'S'){
		
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
				
			printf("El nombre del alumno es: %s\n",x[i][j].alum);
			printf("La nota del alumno es: %i\n",x[i][j].nota);	
			}
		}
	}		
}

void buscar(alumno x[][5]){
	
	int i, j, s_pers, k, aux;
	char resp, nombre[31];
	aux = 0;
	
	printf("\nSi desea buscar la nota de un alumno por su nombre marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
		
		printf("\nIntroduzca el nombre del alumno que desea buscar: ");
		fflush(stdin);
		fgets(nombre,31,stdin);
		cambio(nombre);
		
		for(i = 0; i < 2 && aux == 0; i++){
			for(j = 0; j < 5 && aux == 0; j++){
				
				k = strcmp(nombre, x[i][j].alum);
				s_pers = x[i][j].nota;
				
				if(k == 0){
					aux = 1;
				}
			}
		}
		
		if(k != 0){
					
			printf("\nEl alumno ingresado no existe, vuelva a introducir el nombre: ");
			fflush(stdin);
			fgets(nombre,31,stdin);
			cambio(nombre);
		}
				
		if(k == 0){
			printf("La nota del alumno ingresado es: %i\n",s_pers);	
		}
	}
}

void media(alumno x[][5]){
	
	int i, j;
	float media;
	char resp;
	media = 0;
	
	printf("\nSi desea ver la media de las notas marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
		
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
				
				media = media + x[i][j].nota;	
			}
		}
		media = media / 10;
		printf("La media de todas las notas es: %f\n", media);
	}
}

void media5(alumno x[][5]){
	
	int i, j, aux;
	float mediana;
	char resp;
	aux = 0;
	mediana = 0;
	
	printf("\nSi desea ver la media de las notas menores a 05 marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
		
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
				
				if(x[i][j].nota < 5){
					
					mediana = mediana + x[i][j].nota;
					aux++;
				}
			}
		}
		mediana = mediana / aux;
		printf("La media de todas las notas menores a 05 es: %f\n", mediana);
	}
}

void mayor(alumno x[][5]){
	
	int i, j, my, act;
	char resp;
	my = x[0][0].nota;
	
	printf("\nSi desea ver los alumnos con la nota mayor marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
	
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
			
				act = x[i][j].nota;
				if(act > my){
					
					my = act;
				}
			}
		}
		
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
			
				if(my == x[i][j].nota){
					
					printf("El alumno %s tiene la mayor nota.\n",x[i][j].alum);
				}
			}
		}
	}
}

void menor(alumno x[][5]){
	
	int i, j, mn, act;
	char resp;
	mn = x[0][0].nota;
	
	printf("\nSi desea ver los alumnos con la nota menor marque S para si o cualquier letra para no: ");
	fflush(stdin);
	scanf("%c",&resp);
	
	if(resp == 's' || resp == 'S'){
	
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
			
				act = x[i][j].nota;
				if(act < mn){
					
					mn = act;
				}
			}
		}
		
		for(i = 0; i < 2; i++){
			for(j = 0; j < 5; j++){
			
				if(mn == x[i][j].nota){
					
					printf("El alumno %s tiene la menor nota.\n",x[i][j].alum);
				}
			}
		}
	}
}

void cambio(char x[]){
	
	int i, aux;
	aux = 0;
	
	for(i = 0; i < 31 && aux == 0; i++){
		
		if(x[i] == '\n'){
			
			aux = 1;
			x[i] = '\0';
		}
	}
}
