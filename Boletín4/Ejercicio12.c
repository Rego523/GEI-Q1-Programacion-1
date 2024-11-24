#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

// Función para verificar si un array es capicúa
bool isPalindrome(int array[], int size) {
    // Compara los elementos desde los extremos hacia el centro
    for (int i = 0; i < size / 2; i++) {
        if (array[i] != array[size - 1 - i]) {
            return false; // Si algún par de elementos no coincide, no es capicúa
        }
    }
    return true; // Si todos los pares coinciden, es capicúa
}

int main() {
    int array[SIZE];

    // Solicitar al usuario los elementos del array
    printf("Introduce los elementos del array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Verificar si el array es capicúa
    if (isPalindrome(array, SIZE)) {
        printf("\nEl array es capicúa.\n");
    } else {
        printf("\nEl array no es capicúa.\n");
    }

    return 0;
}
