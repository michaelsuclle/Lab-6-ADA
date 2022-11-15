/*

Alumno : Suclle Suca, Michael Benjamin
CUI: 20211794
Docente: Oscar Ramirez Valdez
Curso:Analisis de Diseño y Algoritmos

*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void imprimirArreglo(int *arregloaimprimir, int cantidad) {
  for (int i = 0; i < cantidad ; i++) {
      cout << arregloaimprimir[i]<< "  ";
  }
    cout << "\n";
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
        
    }
    // Copiar los elementos ordenados de aux al vector "a"
    for (int m = 0; m < fin-ini+1; m++){
        a[ini + m] = aux[m];
    }
    delete [] aux;
}

void merge_sort(int *a, int ini, int fin) { 
    int med;
    if (ini < fin) {
        med = (ini + fin)/2; 
        merge_sort(a, ini, med); 
        merge_sort(a, med + 1, fin); 
        mezcla(a, ini, med, fin); 
    }
} 


int main(){
    //Ejercicio 1
    cout<< "Ejercicio 1: \n";

    int array1[5] = {45, 17, 23, 67, 21};
    cout<< "antes funcion \n";
    imprimirArreglo(array1, 5);
    merge_sort(array1, 0, 4);
    cout<< "despues funcion \n";
    imprimirArreglo(array1, 5);


    //Ejercicio 2
    cout<< "\nEjercicio 2: \n";

    int array2[8] = {6, 0, 3, 2, 5, 7, 4, 1};
    cout<< "antes funcion \n";
    imprimirArreglo(array2, 8);
    merge_sort(array2, 0, 7);
    cout<< "despues funcion \n";
    imprimirArreglo(array2, 8);


    //Ejercicio 3
    cout<< "\nEjercicio 3: \n";

    int array3[8] = {6, 5, 3, 1, 8, 7, 2, 4};
    cout<< "antes funcion \n";
    imprimirArreglo(array3, 8);
    merge_sort(array3, 0, 7);
    cout<< "despues funcion \n";
    imprimirArreglo(array3, 8);

    return 0;
}









