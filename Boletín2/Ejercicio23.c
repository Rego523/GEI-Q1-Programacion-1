#include <stdio.h>

int main() {
    
    int numero;

    // Bucle do-while para solicitar números hasta que estén en el rango [20, 30]
    do {
        // Solicitar número al usuario
        printf("Introduzca un número entre 20 y 30 (ambos inclusive): ");
        scanf("%d", &numero);

        // Comprobar si el número está en el rango
        if (numero < 20 || numero > 30) {
            printf("Número no válido. Inténtelo de nuevo.\n");
        }

    } while (numero < 20 || numero > 30);

    // El número está en el rango permitido
    printf("Número válido: %d\n", numero);

    return 0;
}
