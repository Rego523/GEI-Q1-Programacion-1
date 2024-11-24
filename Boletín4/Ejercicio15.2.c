#include <stdio.h>

#define MAX_SIZE 20

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Solicitar al usuario los elementos de la matriz de números enteros
    printf("Enter the elements of the %dx%d matrix (integers):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Mostrar la matriz en formato matricial
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE], int n) {
    // Calcular la matriz transpuesta
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int n;

    // Solicitar el tamaño de la matriz
    printf("Enter the size of the matrix (N for NxN, 1 <= N <= 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Matrix size must be between 1 and 20.\n");
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE], transposed[MAX_SIZE][MAX_SIZE];

    // Introducir los elementos de la matriz
    inputMatrix(matrix, n);

    // Mostrar la matriz original
    printf("\nOriginal matrix:\n");
    printMatrix(matrix, n);

    // Calcular la matriz transpuesta
    transposeMatrix(matrix, transposed, n);

    // Mostrar la matriz transpuesta
    printf("\nTransposed matrix:\n");
    printMatrix(transposed, n);

    return 0;
}
