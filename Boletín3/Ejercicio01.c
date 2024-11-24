#include <stdio.h>

// Subprograma que escribe N líneas en blanco y verifica cuántas ha escrito.
void blankSpaces(int number) {
    int counter = 0; // Para contar las líneas impresas.

    for (int i = 0; i < number; i++) {
        printf("\n");
        counter++;
    }

    // Comprobar si se imprimieron el número correcto de líneas.
    if(counter == number) {
        printf("%d blank lines were printed correctly.\n", counter);
    } else {
        printf("Error: Expected to print %d lines, but only %d were printed.\n", number, counter);
    }
}

int main() {
    int number;

    // Solicitar al usuario el número de líneas en blanco.
    printf("Enter the number of blank lines to print:");
    scanf("%d", &number);

    // Llamar al subprograma para imprimir las líneas en blanco.
    blankSpaces(number);

    return 0;
}
