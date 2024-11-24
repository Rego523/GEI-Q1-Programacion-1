#include <stdio.h>

#define MAX_SIZE 10

// Función para introducir una matriz NxN
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("Introduce los elementos de la matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Función para mostrar una matriz NxN
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Función para encontrar un punto de silla en la matriz
int findSaddlePoint(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        // Encuentra el valor mínimo en la fila i
        int minRowValue = matrix[i][0];
        int minColumnIndex = 0;
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] < minRowValue) {
                minRowValue = matrix[i][j];
                minColumnIndex = j;
            }
        }

        // Verifica si el valor mínimo de la fila es el máximo en su columna
        int isMaxInColumn = 1;
        for (int k = 0; k < n; k++) {
            if (matrix[k][minColumnIndex] > minRowValue) {
                isMaxInColumn = 0;
                break;
            }
        }

        // Si se cumple la condición, es un punto de silla
        if (isMaxInColumn) {
            printf("El punto de silla se encuentra en la posición [%d][%d] con valor %d\n", i + 1, minColumnIndex + 1, minRowValue);
            return 1; // Punto de silla encontrado
        }
    }
    
    return 0; // No se encontró un punto de silla
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // Solicitar tamaño de la matriz
    printf("Introduce el tamaño de la matriz (N para NxN, 1 <= N < 10): ");
    scanf("%d", &n);

    if (n <= 0 || n >= MAX_SIZE) {
        printf("El tamaño de la matriz debe ser entre 1 y 9.\n");
        return 1;
    }

    // Introducir la matriz
    inputMatrix(matrix, n);

    // Mostrar la matriz
    printMatrix(matrix, n);

    // Buscar y mostrar el punto de silla
    if (!findSaddlePoint(matrix, n)) {
        printf("No se encontró un punto de silla en la matriz.\n");
    }

    return 0;
}
