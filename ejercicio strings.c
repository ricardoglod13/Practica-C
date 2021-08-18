#include<stdio.h>
#include<string.h>

void comparar(char st1[], char st2[]);

int main(){
	
	char string1[61];
	char string2[61];
	
	printf("Introduzca dos frases de no mas de 60 caracteres para compararlas\n\n");
	printf("Primera frase: ");
	fgets(string1,61,stdin);
	printf("Segunda frase: ");
	fgets(string2,61,stdin);
	
	comparar(string1, string2);
	
	system("pause");
	return 0;
}

void comparar(char st1[], char st2[]){
	
	if(strcmp(st1,st2) == 0){
		
		printf("\nLos string son iguales.\n\n");
	}else{
		
		printf("\nLos strings NO son iguales.\n\n");
	}
}
