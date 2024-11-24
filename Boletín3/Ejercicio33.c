#include <stdio.h>

// Función recursiva para calcular el N-ésimo término de la sucesión de Fibonacci.
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base: F(0) = 0.
    } else if (n == 1) {
        return 1; // Caso base: F(1) = 1.
    } else {
        // Caso recursivo: F(n) = F(n-1) + F(n-2).
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Función recursiva para calcular la suma de los términos de Fibonacci hasta el N-ésimo término.
int sumFibonacci(int n) {
    if (n < 0) {
        return 0; // Caso base: si n es negativo, la suma es 0.
    } else if (n == 0) {
        return 0; // Caso base: suma de términos hasta F(0) es 0.
    } else {
        // Caso recursivo: suma de los términos hasta el N-ésimo.
        return fibonacci(n) + sumFibonacci(n - 1);
    }
}

int main() {
    int n;

    // Solicitar el valor de N al usuario.
    printf("Enter the number of terms up to the N term of the Fibonacci sequence: ");
    scanf("%d", &n);

    // Verificar que el número de términos es no negativo.
    if (n < 0) {
        printf("The number of terms must be a non-negative integer.\n");
    } else {
        // Calcular y mostrar la suma de los términos de Fibonacci hasta el N-ésimo término.
        printf("The sum of the Fibonacci terms up to the term %d is %d\n", n, sumFibonacci(n));
    }

    return 0;
}
