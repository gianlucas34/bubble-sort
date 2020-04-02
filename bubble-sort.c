#include <stdio.h>
#include <locale.h>

void bubbleSort (int vetor[], int n) {
    int x, y, aux;

        for (x = 0; x < n; x++) {
        	for(y = 0; y < n-1; y++){
				if (vetor[y] > vetor[y+1]) {
            		aux = vetor[y];
					vetor[y] = vetor[y+1];
					vetor[y+1] = aux;
    	    	}
    	    }
		}
	}

int main (void) {
	setlocale(LC_ALL, "");
	
	int element[100];
	int x = 0, y;
	
	printf("\t---------------------------------------------------------");
	printf("\n\tPARA PARAR O PROGRAMA, DIGITE QUALQUER NÚMERO NEGATIVO!!!\n");
	printf("\t---------------------------------------------------------\n\n\n");
	
	while(element[x-1] >= 0){
		printf("Digite um elemento: ");
		scanf("%d", &element[x]);
		x++;
	}
	
	bubbleSort(element, x);
	printf("\n");
	
	for(y=0; y<x; y++){
		if(element[y] > 0){
			printf("%d  ", element[y]);	
		}
	}
}
