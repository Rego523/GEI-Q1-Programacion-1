#include <stdio.h>

int main() {
    
    int n;  // Número de filas del triángulo de Floyd
    int number = 1;  // Número que se imprimirá en el triángulo

    // Solicitar al usuario el número de filas
    printf("Introduce el número de filas para el triángulo de Floyd: ");
    scanf("%d", &n);

    // Generar las filas del triángulo de Floyd
    for (int i = 1; i <= n; i++) {
        // Imprimir los números de la fila i
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;  // Incrementar el número para la siguiente impresión
        }
        // Salto de línea al final de cada fila
        printf("\n");
    }

    return 0;
}
