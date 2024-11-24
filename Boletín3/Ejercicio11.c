#include <stdio.h>

// Función para leer un entero dentro de un intervalo [min, max].
int readIntegerInInterval(int min, int max) {
    int number;
    do {
        printf("Enter a number between %d and %d: ", min, max);
        scanf("%d", &number);

        if (number < min || number > max) {
            printf("Number out of range. Please try again.\n");
        }
    } while (number < min || number > max);

    return number;
}

// Función de prueba.
void tryReadIntegerInInterval() {
    int min, max, number;

    // Solicitar los límites inferior y superior.
    printf("Enter the lower limit of the range:");
    scanf("%d", &min);
    
    printf("Enter the upper limit of the range:");
    scanf("%d", &max);

    // Validar que el límite inferior sea menor que el superior.
    if (min >= max) {
        printf("The lower limit must be less than the upper limit.\n");
        return;
    }

    // Llamar a la función para leer un entero en el intervalo.
    number = readIntegerInInterval(min, max);

    // Imprimir el número introducido.
    printf("Number entered correctly: %d\n", number);
}

int main() {
    tryReadIntegerInInterval();
    return 0;
}
