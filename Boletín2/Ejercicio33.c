#include <stdio.h>

// Función para calcular el factorial de un número entero positivo
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;  // Inicializamos el resultado en 1
    for (int i = 1; i <= n; i++) {
        resultado *= i;  // Multiplicamos el resultado por cada número desde 1 hasta n
    }
    return resultado;
}

int main() {
    
    int numero;

    // Solicitar al usuario un número entero positivo
    printf("Introduzca un número entero positivo: ");
    scanf("%d", &numero);

    // Comprobar que el número es positivo
    if (numero < 0) {
        printf("El número debe ser entero positivo.\n");
    } else {
        // Calcular el factorial usando la función
        unsigned long long resultado = factorial(numero);

        // Mostrar el resultado
        printf("El factorial de %d es %llu\n", numero, resultado);
    }

    return 0;
}
