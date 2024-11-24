#include <stdio.h>

// Función que muestra el triángulo de Floyd hasta el número dado.
void showFloydTriangle(int number) {
    int counter = 1;  // Este contador lleva la cuenta de los números en el triángulo.

    for (int i = 1; counter <= number; i++) { // `i` representa el número de elementos por fila.
        for (int j = 1; j <= i; j++) {         // Este bucle controla cuántos elementos imprimir por fila.
            if (counter > number) {
                break; // Salir si ya hemos impreso todos los números hasta `number`.
            }
            printf("%d ", counter);
            counter++;  // Incrementamos el contador de números.
        }
        printf("\n");  // Imprimir nueva línea al final de cada fila.
    }
}

int main() {
    int number;

    // Solicitar el número al usuario.
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Llamar a la función para mostrar el triángulo de Floyd.
    showFloydTriangle(number);

    return 0;
}
