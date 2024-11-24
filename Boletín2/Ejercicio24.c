#include <stdio.h>

int main() {
    
    int i;
    int multiplicador = 7;

    // Mostrar el encabezado de la tabla
    printf("TABLA DE MULTIPLICAR DEL %d\n", multiplicador);

    // Bucle para imprimir la tabla de multiplicar
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
    }

    return 0;
}
