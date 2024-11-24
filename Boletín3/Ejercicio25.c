#include <stdio.h>

// Función recursiva para calcular la N-ésima potencia de un número entero.
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1; // Caso base: cualquier número elevado a la potencia 0 es 1.
    } else {
        return base * potencia(base, exponent - 1); // Llamada recursiva.
    }
}

int main() {
    int base = 2;
    int exponent = 3;
    
    printf("%d raised to the power %d is %d\n", base, exponent, potencia(base, exponent));
    
    return 0;
}
