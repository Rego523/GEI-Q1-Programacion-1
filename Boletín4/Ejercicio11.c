#include <stdio.h>

#define SIZE 10

// Función recursiva para calcular la suma de los elementos de un array
int sumArray(int array[], int index, int size) {
    // Caso base: si el índice alcanza el tamaño del array, retornar 0
    if (index == size) {
        return 0;
    }
    // Caso recursivo: sumar el elemento actual con la suma de los siguientes elementos
    return array[index] + sumArray(array, index + 1, size);
}

int main() {
    int array[SIZE];

    // Solicitar al usuario los elementos del array
    printf("Introduce los elementos del array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Llamar a la función recursiva para calcular la suma
    int result = sumArray(array, 0, SIZE);

    // Mostrar el resultado
    printf("\nLa suma de los elementos del array es: %d\n", result);

    return 0;
}
