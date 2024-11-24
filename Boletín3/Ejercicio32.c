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

int main() {
    int n;

    // Solicitar el valor de N al usuario.
    printf("Enter the N term of the Fibonacci sequence: ");
    scanf("%d", &n);

    // Verificar que el término es no negativo.
    if (n < 0) {
        printf("The N term must be a non-negative integer.\n");
    } else {
        // Calcular y mostrar el N-ésimo término de la sucesión de Fibonacci.
        printf("The %d term of the Fibonacci sequence is %d\n", n, fibonacci(n));
    }

    return 0;
}
