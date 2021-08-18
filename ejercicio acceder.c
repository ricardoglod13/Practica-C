#include<stdio.h>
#include<string.h>

void acceder(char st1[], int x);
void cambio(char st1[]);

int main(){
	
	char string1[61];
	int x;
	
	printf("Introduzca una frase de no mas de 60 caracteres\n");
	fgets(string1,61,stdin);
	printf("Introduzca la posicion del caracter que desea ver: ");
	scanf("%i",&x);
	
	cambio(string1);
	acceder(string1, x);
	
	system("pause");
	return 0;
}

void cambio(char st1[]){
	
	int i;
	
	for(i = 0; i < 61; i++){
		
		if(st1[i] == '\n'){
			
			st1[i] = '\0';
		}
	}
}

void acceder(char st1[], int x){
	
	printf("\nEl caracter que esta en la %i° posicion es (%c)\n\n", x, st1[x-1]);
}
