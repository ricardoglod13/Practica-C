#include<stdio.h>

void introduce(int m[][10]);
void ordenar(int m[][10]);

int main(){
	
	int m[10][10];
	
	introduce(m);
	ordenar(m);
	
	system("pause");
	return 0; 
}

void introduce(int m[][10]){
	
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			
			m[i][j] = rand()%100;
		}
	}
}

void ordenar(int m[][10]){
	
	int i, j, x, y, aux;
	int vec[100];
	
	for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            for(x=0; x<10;x++){
                for(y=0; y<10; y++){
                    if(m[i][j] < m[x][y]){
                        
						aux=m[i][j];
                        m[i][j]=m[x][y];
                        m[x][y]=aux;
                    }
                }
            }
        }
    }
		
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			
			printf("%i ",m[i][j]);
		}
		printf("\n");
	}
}

