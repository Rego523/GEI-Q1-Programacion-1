#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20

// Función para sustituir números pares por su cuadrado y los impares por la parte entera de la raíz cuadrada de su valor absoluto
void transformArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            array[i] = array[i] * array[i]; // Cuadrado de los números pares
        } else {
            array[i] = (int)sqrt(abs(array[i])); // Raíz cuadrada del valor absoluto de los números impares
        }
    }
}

int main() {
    int array[MAX_SIZE];
    int size = 0;

    // Solicitar al usuario los elementos del array
    printf("Introduce los elementos del array (máximo %d elementos):\n", MAX_SIZE);
    while (scanf("%d", &array[size]) == 1) {
        size++;
        if (size == MAX_SIZE) {
            break; // Limitar el tamaño del array a 20 elementos
        }
    }

    // Mostrar el array original
    printf("\nArray original:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Transformar el array según las reglas dadas
    transformArray(array, size);

    // Mostrar el array resultante
    printf("\nArray transformado:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
