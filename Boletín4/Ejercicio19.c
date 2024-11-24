#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para mostrar un array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Función para comparar dos números (para usar en qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int array1[500], array2[500], array3[500];
    int combinedArray[1500];  // Array para almacenar los tres arrays combinados

    // Inicializar la semilla para la generación aleatoria
    srand(time(NULL));

    // Rellenar los tres arrays con números aleatorios
    for (int i = 0; i < 500; i++) {
        array1[i] = rand() % 1000;  // Números aleatorios entre 0 y 999
        array2[i] = rand() % 1000;
        array3[i] = rand() % 1000;
    }

    // Combinar los tres arrays en uno solo
    for (int i = 0; i < 500; i++) {
        combinedArray[i] = array1[i];
        combinedArray[i + 500] = array2[i];
        combinedArray[i + 1000] = array3[i];
    }

    // Ordenar el array combinado
    qsort(combinedArray, 1500, sizeof(int), compare);

    // Mostrar el array ordenado
    printf("Números ordenados de menor a mayor:\n");
    printArray(combinedArray, 1500);

    return 0;
}
