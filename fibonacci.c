#include <stdio.h>
#include <conio.h>

main() {
    
	int fibo1, fibo2, i, n;
	char resp;
	resp='s';
      
      	do{
      		
			fibo1=0;
    		fibo2=1;
    		
	        printf("Ingrese la cantidad de numeros de la serie que desea ver.\n");
			scanf("%i",&n);
			
			while(n<=0){
				printf("La cantidad debe ser un numero mayor a 0.\n");
				fflush(stdin);
				scanf("%i",&n);
			}
			
			printf("%i\n",fibo1);
	          
	        for(i=0;i<=n;i++){
	          	
	        	printf("%i\n",fibo2);
	        	
	        	fibo2=fibo2+fibo1;
	        	fibo1=fibo2-fibo1;
	        }
	        
	        printf("Coloque s si desea repetir el programa, presione cualquier letra si desea salirse.\n");
	        fflush(stdin);
			scanf("%c",&resp);
			
			
        }while(resp=='s');
		
getche();    
}
