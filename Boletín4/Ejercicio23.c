#include <stdio.h>

#define SIZE 100

// Función para ordenar el array de caracteres usando el algoritmo de ordenación por burbuja
void ordenarArray(char array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Intercambiar los caracteres
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Función para combinar los dos arrays en uno solo y ordenarlo
void combinarYOrdenar(char array1[], char array2[], char result[], int size1, int size2) {
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
void mostrarArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
}

int main() {
    char array1[SIZE] = {'b', 'a', 'e', 'd', 'c', 'f', 'h', 'g', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                         'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 
                         'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                         'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 
                         'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};  // Primer array desordenado
    char array2[SIZE] = {'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f',
                         'e', 'd', 'c', 'b', 'a', 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 
                         'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 
                         'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', 'z', 'y', 'x', 
                         'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 
                         'c', 'b', 'a', 'z'};  // Segundo array desordenado
    char result[SIZE * 2];  // Array resultante de los dos arrays combinados y ordenados
    
    // Combinar y ordenar los arrays
    combinarYOrdenar(array1, array2, result, SIZE, SIZE);
    
    // Mostrar el array combinado y ordenado
    printf("Array combinado y ordenado:\n");
    mostrarArray(result, SIZE * 2);
    
    return 0;
}
