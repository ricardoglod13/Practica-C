#include<stdio.h>

long long int digitos(long long int a);

int main(){
	
	long long int x;
	int dig;
	
	printf("Ingrese un numero entero para saber cuantos digitos tiene: ");
	scanf("%lli",&x);
	
	dig = digitos(x);
	
	if(dig == 0){
		
		system("pause");
		return 0;	
	}else{
		
		printf("Este entero tiene %i digitos.\n\n",dig);
	}
	
	system("pause");
	return 0;
}

long long int digitos(long long int a){
	
	int dig;
	
	while(a > 0){
		
		a = a / 10;
		dig = dig + 1;
	}
	
	if(dig < 19){
		
		printf("El numero es demasiado grande coloque un numero menor.\n\n");
		return 0;
	}
	
	return dig;
}
