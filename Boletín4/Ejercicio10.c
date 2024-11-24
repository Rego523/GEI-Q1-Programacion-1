#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

// Función para comparar dos números (utilizada por qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Función para combinar dos arrays y devolver un array ordenado
void mergeAndSortArrays(int array1[], int array2[], int result[]) {
    // Copiar los elementos del primer array al array resultante
    for (int i = 0; i < SIZE; i++) {
        result[i] = array1[i];
    }

    // Copiar los elementos del segundo array al array resultante
    for (int i = 0; i < SIZE; i++) {
        result[SIZE + i] = array2[i];
    }

    // Ordenar el array resultante utilizando la función qsort
    qsort(result, SIZE * 2, sizeof(int), compare);
}

int main() {
    int array1[SIZE], array2[SIZE], result[SIZE * 2];

    // Solicitar al usuario los elementos del primer array
    printf("Enter elements for the first array (50 integers):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Solicitar al usuario los elementos del segundo array
    printf("\nEnter elements for the second array (50 integers):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Llamar a la función para combinar y ordenar los arrays
    mergeAndSortArrays(array1, array2, result);

    // Mostrar el array resultante ordenado
    printf("\nMerged and sorted array:\n");
    for (int i = 0; i < SIZE * 2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
