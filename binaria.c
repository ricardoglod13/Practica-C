 #include <stdio.h>
#include <math.h>


int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha);
int busquedaBinariaConWhile(int arreglo[], int busqueda, int tamanioDelArreglo);

int main(){
    
	int n, i;
	int numeros[n];
    
	printf("Ingrese la cantidad de elementos que tenga su vector.\n");
	scanf("%i",&n);	
	
	for(i=0; i<n; i++){
 		printf("Coloque el valor del vector en la posicion %i: ",i);
 		scanf("%i",&numeros[i]);
	 }
	 
	 for(i=0; i<n; i++){
 		if(i<n-1){
 			printf("%i, ",numeros[i]);
		 }else{
		 	printf("%i.\n",numeros[i]);
		 }
	 }	
	

    int busqueda = 16;
    int longitudDelArreglo = sizeof(numeros) / sizeof(numeros[0]);
    int resultadoBusquedaRecursiva = busquedaBinariaRecursiva(numeros, busqueda, 0, longitudDelArreglo - 1);
    printf("Al buscar %d recursivamente, el resultado es %d\n", busqueda, resultadoBusquedaRecursiva);
}

int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha) return -1;

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio){
        return indiceDeLaMitad;
    }
    
    if (busqueda < valorQueEstaEnElMedio){
        derecha = indiceDeLaMitad - 1;
    }else{
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}

