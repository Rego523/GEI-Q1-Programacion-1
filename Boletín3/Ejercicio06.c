#include <stdio.h>

// Función para obtener un número de filas válido del usuario (N > 0).
int getNumberRows() {
    int N;
    do {
        printf("Enter the number of rows (N > 0): ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("Error: The number of rows must be greater than 0.\n");
        }
    } while (N <= 0);
    return N;
}

// Función que muestra N filas del triángulo de Floyd.
void showFloydTriangleRows(int N) {
    int counter = 1;  // Este contador lleva la cuenta de los números en el triángulo

    for (int i = 1; i <= N; i++) {  // `i` es el número de elementos por fila.
        for (int j = 1; j <= i; j++) {  // Este bucle imprime cada número en la fila.
            printf("%d ", counter);
            counter++;
        }
        printf("\n");  // Imprimir nueva línea al final de cada fila.
    }
}

int main() {
    // Obtener del usuario el número de filas.
    int N = getNumberRows();

    // Mostrar las N filas del triángulo de Floyd.
    showFloydTriangleRows(N);

    return 0;
}
