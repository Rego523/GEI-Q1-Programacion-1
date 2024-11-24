#include <stdio.h>

int main() {
    
    int i, j;

    // Iterar sobre los primeros 5 números
    for (i = 1; i <= 5; i++) {
        printf("TABLA DE MULTIPLICAR DEL %d\n", i);

        // Bucle para imprimir la tabla de multiplicar del número actual
        for (j = 0; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        // Espacio entre las tablas
        printf("\n");
    }

    return 0;
}
