#include <stdio.h>

int main() {
    
    int i, j;

    // Mostrar la primera fila de los números del 1 al 9
    printf("   ");
    for (i = 1; i <= 9; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Mostrar la tabla de multiplicación
    for (i = 1; i <= 9; i++) {
        printf("%2d", i);  // Mostrar el número de la fila
        for (j = 1; j <= 9; j++) {
            printf("%4d", i * j);  // Mostrar el producto
        }
        printf("\n");
    }

    return 0;
}
