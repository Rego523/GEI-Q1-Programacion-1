#include <stdio.h>

// Función que encuentra el mayor divisor de un número excluyendo el número mismo.
int greatestDivisor(int number) {
    for (int i = number / 2; i >= 1; i--) { // Comenzamos desde la mitad del número.
        if (number % i == 0) {
            return i;
        }
    }
    return 1; // Si no encuentra otro divisor, devolvemos 1 (todos los números son divisibles por 1).
}

int main() {
    int number;

    // Pedir al usuario que introduzca un número entero.
    printf("Enter an integer:");
    scanf("%d", &number);

    // Llamar a la función para encontrar el mayor divisor.
    int divider = greatestDivisor(number);

    // Mostrar el resultado.
    printf("The greatest divisor of %d, excluding itself, is: %d\n", number, divider);

    return 0;
}
