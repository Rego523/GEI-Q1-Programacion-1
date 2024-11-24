#include <stdio.h>

// Función recursiva para sumar los números enteros positivos hasta n.
int sumTo(int n) {
    if (n <= 0) {
        return 0; // Caso base: si n es 0 o negativo, la suma es 0.
    } else {
        return n + sumTo(n - 1); // Llamada recursiva.
    }
}

int main() {
    int number = 5;
    
    printf("The sum of positive integers up to %d is %d\n", number, sumTo(number));
    
    return 0;
}
