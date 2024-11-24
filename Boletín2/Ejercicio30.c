#include <stdio.h>

int main() {
    
    int num;            // Variable para almacenar el número introducido
    int sumaPares = 0;  // Variable para almacenar la suma de números pares
    int sumaImpares = 0; // Variable para almacenar la suma de números impares

    printf("Introduzca números enteros. Introduzca 0 para terminar.\n");

    // Leer números hasta que se introduzca 0
    while (1) {
        printf("Número: ");
        scanf("%d", &num);

        if (num == 0) {
            break; // Salir del bucle si se introduce 0
        }

        if (num % 2 == 0) {
            sumaPares += num; // Sumar a la suma de números pares
        } else {
            sumaImpares += num; // Sumar a la suma de números impares
        }
    }

    // Mostrar las sumas de números pares e impares
    printf("Suma de números pares: %d\n", sumaPares);
    printf("Suma de números impares: %d\n", sumaImpares);

    return 0;
}
