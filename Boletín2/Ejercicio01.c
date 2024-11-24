#include <stdio.h>

int main() {
    
    int numero;

    // Solicitar un número entero al usuario
    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    // Determinar si el número es positivo, negativo o cero
    if (numero > 0) {
        printf("El número %d es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El número %d es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
