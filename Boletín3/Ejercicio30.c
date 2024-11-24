#include <stdio.h>

// Función recursiva para calcular la suma de las cifras de un número entero.
int sumFigures(int n) {
    if (n == 0) {
        return 0; // Caso base: si el número es 0, la suma de las cifras es 0.
    } else {
        return (n % 10) + sumFigures(n / 10); // Sumar el último dígito y llamar recursivamente con el resto del número.
    }
}

int main() {
    int number;

    // Solicitar el número al usuario.
    printf("Enter an integer greater than 0: ");
    scanf("%d", &number);

    // Verificar que el número es mayor que 0.
    if (number <= 0) {
        printf("The number must be greater than 0.\n");
    } else {
        // Calcular y mostrar la suma de las cifras.
        printf("The sum of the digits of %d is %d\n", number, sumFigures(number));
    }

    return 0;
}
