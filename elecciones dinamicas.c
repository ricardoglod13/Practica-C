#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int i, n1, n2, n3;
	int op, j;
	int aux1, aux2, aux3;
	int h, e, a;
	int *cand1;
	int *cand2;
	int *cand3;
	char resp;
	
	n1 = 1;
	n2 = 1;
	n3 = 1;
	h = 0;
	e = 0;
	a = 0;
	aux1 = 0;
	aux2 = 0;
	aux3 = 0;
	
	do{
	
		printf("\nMarque el numero del candidato por el cual desea votar.\n\n");
		printf("(1) Hugo Chavez.\n(2) Victoria Capechi.\n(3) Adolf Hitler.\nIngrese su opcion: ");
		scanf("%i",&op);
		
		switch(op){
			
			case 1:{
				if(aux1 == 0){
					
					cand1 = (int*)calloc(n1,sizeof(int));
				}else{
					n1++;
					cand1 = (int*)calloc(n1,sizeof(int));
				}
				aux1 = 1;
				
				break;
			}
			
			case 2:{
				if(aux2 == 0){
					
					cand2 = (int*)calloc(n2,sizeof(int));
				}else{
					
					n2++;
					cand2 = (int*)calloc(n2,sizeof(int));
				}
				aux2 = 1;
				
				break;
			}
				
				
			case 3:{
				if(aux3 == 0){
					
					cand3 = (int*)calloc(n3,sizeof(int));
				}else{
					
					n3++;
					cand3 = (int*)calloc(n3,sizeof(int));
				}
				aux3 = 1;
				
				break;
			}
		}
		
		for(i = 0; i < n1; i++){
			for(j = i; j < n1; j++){
				
				if(cand1+i == cand1+j){
					h++;
				}
			}	
		}
		
		for(i = 0; i < n2; i++){
			for(j = i; j < n2; j++){
				
				if(cand2+i == cand2+j){
					e++;
				}
			}	
		}
		
		for(i = 0; i < n3; i++){
			for(j = i; j < n3; j++){
				
				if(cand3+i == cand3+j){
					a++;
				}
			}	
		}
		
		printf("Si otro elector desea votar marque s, si desea ver lo resultados de la eleccion marque cualquier letra: ");
		fflush(stdin);
		scanf("%c",&resp);
			
	}while(resp == 's' || resp == 'S');
	
	
	if(h > e && h > a){
		printf("\nEl candidato electo es Hugo Chavez con %i votos.\n",h);
		printf("Por el contrario Victoria Capechi con %i votos y Adolf Hitler con %i votos perdieron las elecciones.\n\n",e,a);
	}else if(e > h && e > a){
		printf("\nEl candidato electo es Victoria Capechi con %i votos.\n",e);
		printf("Por el contrario Hugo Chavez con %i votos y Adolf Hitler con %i votos perdieron las elecciones.\n\n",h,a);
	}else if(a > h && a > e){
		printf("\nEl candidato electo es Adolf Hitler con %i votos.\n",a);
		printf("Por el contrario Hugo Chavez con %i votos y Victoria Capechi con %i votos perdieron las elecciones.\n\n",h,e);
	}
	
	system("pause");
	return 0;
}
