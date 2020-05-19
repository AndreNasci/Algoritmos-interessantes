#include <bits/stdc++.h>
using namespace std;

// Metodo de ordenacao Selection Sort
void selectionSort( string vetor[], int tam ) {

	string aux;
	int min;

	for(int i=0; i<(tam-1); i++) {
		min = i;

		// procura pelo menor elemento
		for(int j = (i+1); j<tam; j++) {
			if( vetor[j] < vetor[min] )
				min = j;
		}

		// move menor elemento para o incício do vetor
		aux = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = aux;
	}
}
