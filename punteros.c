#include<stdio.h>

int main(){

	int n1, n2;
	int *p;
	
	n1 = 2;
	n2 = 3;
	
	p = &n2;
	n1 = *p;
	
	printf("%i, %i, %i\n\n",n1, n2, p);
	
	n1 = 2;
	n2 = 3;
	
	p = &n1;
	*p = 4;
	
	printf("%i, %i, %i\n\n",n1, n2, p);
	
	n1 = 2;
	n2 = 3;
	
	p = &n2;
	n1 = 6;
	n2 = n1;
	
	printf("%i, %i, %i\n\n",n1, n2, p);
	
	n1 = 2;
	n2 = 3;
	
	p = &n1;
	*p = n2;
	n2 = 6;
	
	printf("%i, %i, %i\n\n",n1, n2, p);
	
	system("pause");
	return 0;
}
