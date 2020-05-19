#include <bits/stdc++.h>
using namespace std;

// Metodo de ordenacao Bubble
void bubbleSort( string vetor[], int tam ) {
  
  string aux;
  
  for(int i=0; i<tam; i++) { 
  
    for(int j=0; j<tam-1-i; j++) {
  		
  		// faz a troca dos elementos adjacentes
      if(vetor[j+1] < vetor[j]) {
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
  
    }
  }
}
