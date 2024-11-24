#include <stdio.h>

// Definimos la estructura para almacenar un número y su descomposición factorial
typedef struct {
    int number;          // Número entero
    int factors[20];     // Array para almacenar los factores de la descomposición
    int numFactors;      // Número de factores en la descomposición
} FactorialDecomposition;

// Función que calcula la descomposición factorial de un número
void factorialDecomposition(int n, FactorialDecomposition* decomposition) {
    decomposition->number = n;
    decomposition->numFactors = 0;

    // Descomponemos el número en sus factores primos
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            decomposition->factors[decomposition->numFactors] = i;
            decomposition->numFactors++;
            n /= i;
        }
    }
}

// Función para mostrar la descomposición de los factores
void printFactorialDecomposition(FactorialDecomposition decomposition) {
    printf("Number: %d\n", decomposition.number);
    printf("Factorial Decomposition: ");
    for (int i = 0; i < decomposition.numFactors; i++) {
        printf("%d", decomposition.factors[i]);
        if (i < decomposition.numFactors - 1) {
            printf(" * ");
        }
    }
    printf("\n\n");
}

int main() {
    // Creamos un array de 5 estructuras para almacenar los números y sus descomposiciones
    FactorialDecomposition decompositions[5];

    printf("Please enter 5 positive integers:\n");

    // Leemos los 5 números y calculamos su descomposición factorial
    for (int i = 0; i < 5; i++) {
        int number;
        do {
            printf("Enter number %d (positive integer): ", i + 1);
            scanf("%d", &number);
        } while (number <= 0); // Aseguramos que el número sea positivo

        factorialDecomposition(number, &decompositions[i]);
    }

    // Mostramos las descomposiciones factoriales
    printf("\nFactorial Decompositions:\n");
    for (int i = 0; i < 5; i++) {
        printFactorialDecomposition(decompositions[i]);
    }

    return 0;
}
