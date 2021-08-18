#include<stdio.h>

int main(){
	
	int num, i, num2, mult;
	float div;
	
	for(i = 0; i < 10; i++){
		
		printf("Ingrese los numeros de la %i° lectura.\n\n",i+1);
		printf("Primer numero: ");
		scanf("%i",&num);
		printf("Segundo numero: ");
		scanf("%i",&num2);
			
			mult = producto_suma(num,num2);
			printf("El resultado de la multiplicacion es %i.\n\n",mult);
	}
	
	system("pause");
	return 0;
}

producto_suma(int a, int b){
	
	int sum, i, aux;
	
	for(i = 0; i < b - 1; i++){
	
		if(b < 2){
			
			sum =  a;	
		}else if(b < 1){
		
			sum = 0;
		}else{
			if(i > 0){
				
			sum = aux + a;	
			}else{
				
				sum = a + a;
			}
			
			aux = sum;
		}
	}
	
	return sum;
}
