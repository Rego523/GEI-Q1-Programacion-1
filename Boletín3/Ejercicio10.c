#include <stdio.h>

// Función que recibe un número entero y devuelve 'P' si es positivo o 'N' si es negativo.
char determineSign(int number) {
    if (number > 0) {
        return 'P';  // Número positivo.
    } else if (number < 0) {
        return 'N';  // Número negativo.
    } else {
        return '0';  // Número cero (opcional, aunque no especificado en el enunciado).
    }
}

int main() {
    int number;
    char sign;

    // Solicitar al usuario que ingrese un número entero
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Llamar a la función DetermineSign para obtener el signo del número
    sign = determineSign(number);

    // Mostrar el resultado
    if (sign == '0') {
        printf("The number is zero.\n");
    } else {
        printf("The sign of the number is: %c\n", sign);
    }

    return 0;
}
