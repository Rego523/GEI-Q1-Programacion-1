#include <stdio.h>

#define MAX_SIZE 20

// Función para verificar si la matriz es mágica
int isMagicSquare(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    int sumRow, sumCol, sumDiag1 = 0, sumDiag2 = 0;

    // Sumar la diagonal principal
    for (int i = 0; i < n; i++) {
        sumDiag1 += matrix[i][i];
    }

    // Sumar la diagonal secundaria
    for (int i = 0; i < n; i++) {
        sumDiag2 += matrix[i][n - 1 - i];
    }

    // Si las dos diagonales no tienen la misma suma, no es un cuadrado mágico
    if (sumDiag1 != sumDiag2) {
        return 0;
    }

    // Verificar las filas y columnas
    for (int i = 0; i < n; i++) {
        sumRow = 0;
        sumCol = 0;

        for (int j = 0; j < n; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];
        }

        // Si alguna fila o columna no tiene la misma suma, no es un cuadrado mágico
        if (sumRow != sumDiag1 || sumCol != sumDiag1) {
            return 0;
        }
    }

    // Si todo coincide, es un cuadrado mágico
    return 1;
}

// Función para introducir la matriz
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("Enter the elements of the %dx%d matrix (1 to %d):\n", n, n, n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Función para imprimir la matriz
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
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

    int matrix[MAX_SIZE][MAX_SIZE];

    // Introducir los elementos de la matriz
    inputMatrix(matrix, n);

    // Mostrar la matriz introducida
    printMatrix(matrix, n);

    // Verificar si es un cuadrado mágico
    if (isMagicSquare(matrix, n)) {
        printf("\nThe matrix is a magic square.\n");
    } else {
        printf("\nThe matrix is not a magic square.\n");
    }

    return 0;
}
