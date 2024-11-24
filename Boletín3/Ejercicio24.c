#include <stdio.h>

// Función recursiva para calcular el factorial de un número entero.
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: 0! = 1! = 1.
    } else {
        return n * factorial(n - 1); // Llamada recursiva.
    }
}

int main() {
    int number = 5;
    printf("The factorial of %d is %llu\n", number, factorial(number));
    return 0;
}
