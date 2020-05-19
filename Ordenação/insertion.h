#include <bits/stdc++.h>
using namespace std;

// Metodo de ordenação Insertion Sort
void insertionSort(string *vet, int n) {

  int j;
  string aux;
  
  for(int i=1; i<n; i++) {
    aux = vet[i];

    for(j=i-1; (vet[j] > aux) && (j >= 0); j--) {
      vet[j+1] = vet[j];
    }
    
    vet[j+1] = aux;
  }
}
