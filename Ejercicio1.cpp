
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void imprimirArreglo(int *arregloaimprimir, int cantidad) {
  for (int i = 0; i < cantidad ; i++) {
      cout << arregloaimprimir[i]<< "  ";
    cout << "\n";
  }
}

void mezcla (int *a, int ini, int med, int fin) {
    
    int *aux;
    aux = new int [fin - ini + 1];
    // Índice sub vector izquierdo
    int i = ini;
    // Índice sub vector derecho
    int j = med + 1;
    int k = 0;
    // Índice del vector aux
    // Mientras ninguno de los indices llegue a su fin se hacen
    // comparaciones. El elemento más pequeño se copia a "aux"
    
    while (i <= med && j <= fin) {
        if (a[i] < a[j]) {
            aux[k] = a[i];
            i++;
        }
        else {
            aux[k] = a[j];
            j++;
        }
        k++;
    }
    
    //    Uno de los dos sub-vectores ya ha sido copiado del todo,
    //    falta copiar el otro sub-vector
    while (i <= med) {
        aux[k] = a[i];
        i++;
        k++;
    }
    while (j <= fin) {
        aux[k] = a[j];
        j++;
        k++;
        // Copiar los elementos ordenados de aux al vector "a"
        for (int m = 0; m < fin-ini+1; m++){
            a[ini + m] = aux[m];
        }
    }
    cout<< "en funcion \n";
    imprimirArreglo(aux, 5);
    delete [] aux;
}



int main(){
    int array[5] = {45, 17, 23, 67, 21};
    int ini = 0;
    int med = 2;
    int fin = 4;//size(array);
    
    cout<< "antes funcion \n";
    imprimirArreglo(array, 5);
    mezcla(array, ini, med, fin);
    cout<< "despues funcion \n";
    imprimirArreglo(array, 5);
    return 0;
}









