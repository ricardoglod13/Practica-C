#include<stdio.h>

int factorial(int);

int main(){
	
	int n;
	
	printf("Ingrese un numero para calculart su factorial.\n");
	scanf("%i",&n);
	
		printf("%i\n",factorial(n));
	
	system("pause");
	return(0);	
}

	int factorial(int n){
		if(n==0){
			return 1;
		}else{
			return (n*factorial(n-1));
		}
	}
