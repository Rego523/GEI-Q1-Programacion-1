#include <stdio.h>

#define MAX_SIZE 100

// Función para encontrar el menor y el mayor índice de un valor dado en el array
void findIndices(int array[], int size, int x, int *firstIndex, int *lastIndex) {
    *firstIndex = -1;
    *lastIndex = -1;

    for (int i = 0; i < size; i++) {
        if (array[i] == x) {
            if (*firstIndex == -1) {
                *firstIndex = i; // Guarda el primer índice
            }
            *lastIndex = i; // Actualiza el último índice
        }
    }
}

int main() {
    int array[MAX_SIZE];
    int size = 0;
    int x;
    int firstIndex, lastIndex;

    // Solicitar al usuario los elementos del array
    printf("Enter the elements of the array separated by spaces, press <Enter> to finish:\n");
    while (scanf("%d", &array[size]) == 1) {
        size++;
        if (size == MAX_SIZE) {
            printf("Maximum array size reached.\n");
            break;
        }
    }

    // Limpiar el búfer de entrada
    while (getchar() != '\n');

    // Bucle para buscar múltiples valores
    while (1) {
        printf("\nEnter the number you want to search (or -1 to exit): ");
        scanf("%d", &x);

        if (x == -1) { // Condición para salir
            printf("Exiting program.\n");
            break;
        }

        // Buscar el valor en el array
        findIndices(array, size, x, &firstIndex, &lastIndex);

        // Mostrar resultados
        if (firstIndex == -1) {
            printf("The number %d does not appear in the array.\n", x);
        } else if (firstIndex == lastIndex) {
            printf("The number %d appears for the first and only time at position %d.\n", x, firstIndex + 1);
        } else {
            printf("The number %d appears for the first time at position %d and for the last time at position %d.\n",
                   x, firstIndex + 1, lastIndex + 1);
        }
    }

    return 0;
}
