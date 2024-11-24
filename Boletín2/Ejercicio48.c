#include <stdio.h>

int main() {
    
    int limit;  // Número hasta el cual generar los elementos del triángulo de Floyd
    int number = 1;  // Número que se imprimirá en el triángulo

    // Solicitar al usuario el número límite
    printf("Introduce el número hasta el cual generar los elementos del triángulo de Floyd: ");
    scanf("%d", &limit);

    // Generar el triángulo de Floyd hasta el número límite
    printf("Triángulo de Floyd hasta el número %d:\n", limit);
    for (int i = 1; number <= limit; i++) {
        // Imprimir los números de la fila i
        for (int j = 1; j <= i && number <= limit; j++) {
            printf("%d ", number);
            number++;  // Incrementar el número para la siguiente impresión
        }
        // Salto de línea al final de cada fila
        printf("\n");
    }

    return 0;
}
