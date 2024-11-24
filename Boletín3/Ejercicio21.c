#include <stdio.h>

// Función recursiva para calcular el término N de la sucesión de Fibonacci.
unsigned long long fibonacciRecursive(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int term = 10;
    printf("The %d term of the Fibonacci sequence is %llu\n", term, fibonacciRecursive(term));
    return 0;
}
