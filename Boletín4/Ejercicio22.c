#include <stdio.h>

#define SIZE 30

// Función para ordenar el array usando el algoritmo de ordenación por burbuja
void ordenarArray(double array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Intercambiar elementos
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Función para combinar los dos arrays en uno solo y ordenarlo
void combinarYOrdenar(double array1[], double array2[], double result[], int size1, int size2) {
    // Copiar elementos del primer array al array resultante
    for (int i = 0; i < size1; i++) {
        result[i] = array1[i];
    }
    
    // Copiar elementos del segundo array al array resultante
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = array2[i];
    }
    
    // Ordenar el array resultante
    ordenarArray(result, size1 + size2);
}

// Función para mostrar el array
void mostrarArray(double array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int main() {
    double array1[SIZE] = {3.4, 1.2, 5.6, 9.8, 2.3, 7.1, 4.5, 6.6, 8.9, 0.4, 1.9, 5.5, 3.3, 7.4, 8.1, 2.6, 4.7, 9.3, 6.7, 5.1, 2.9, 4.2, 7.9, 1.5, 3.7, 8.3, 6.1, 0.9, 7.2, 5.9};  // Primer array desordenado
    double array2[SIZE] = {3.8, 2.1, 6.3, 1.7, 8.4, 4.8, 7.5, 9.0, 2.4, 6.2, 3.1, 5.3, 1.1, 8.0, 7.8, 4.1, 2.7, 6.8, 3.6, 1.4, 5.7, 8.6, 4.9, 7.3, 2.2, 6.0, 9.5, 0.5, 1.6, 7.0};  // Segundo array desordenado
    double result[SIZE * 2];  // Array resultante de los dos arrays combinados y ordenados
    
    // Combinar y ordenar los arrays
    combinarYOrdenar(array1, array2, result, SIZE, SIZE);
    
    // Mostrar el array combinado y ordenado
    printf("Array combinado y ordenado:\n");
    mostrarArray(result, SIZE * 2);
    
    return 0;
}
