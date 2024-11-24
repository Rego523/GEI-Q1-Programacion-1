#include <stdio.h>

int main() {
    
    int numero1, numero2;

    // Solicitar dos números enteros al usuario
    printf("Introduce el primer número entero: ");
    scanf("%d", &numero1);

    printf("Introduce el segundo número entero: ");
    scanf("%d", &numero2);

    // Verificar si el segundo número no es cero para evitar división por cero
    if (numero2 == 0) {
        printf("Error: División por cero no permitida.\n");
    } else if (numero1 % numero2 == 0) {
        printf("El número %d es divisible por %d.\n", numero1, numero2);
    } else {
        printf("El número %d no es divisible por %d.\n", numero1, numero2);
    }

    return 0;
}
