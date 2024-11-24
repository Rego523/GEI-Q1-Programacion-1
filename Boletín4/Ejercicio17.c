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

// Función para sumar dos matrices
void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Función para restar dos matrices
void subtractMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Función para multiplicar dos matrices
void multiplyMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int n;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Solicitar tamaño de la matriz
    printf("Introduce el tamaño de la matriz (N para NxN, 1 <= N < 10): ");
    scanf("%d", &n);

    if (n <= 0 || n >= MAX_SIZE) {
        printf("El tamaño de la matriz debe ser entre 1 y 9.\n");
        return 1;
    }

    // Introducir las dos matrices
    printf("\nMatriz 1:\n");
    inputMatrix(matrix1, n);
    printf("\nMatriz 2:\n");
    inputMatrix(matrix2, n);

    int option;

    do {
        // Mostrar el menú de operaciones
        printf("\nSeleccione una operación:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Producto\n");
        printf("4. Salir\n");
        printf("Opción: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addMatrices(matrix1, matrix2, result, n);
                printf("\nResultado de la suma:\n");
                printMatrix(result, n);
                break;
            case 2:
                subtractMatrices(matrix1, matrix2, result, n);
                printf("\nResultado de la resta:\n");
                printMatrix(result, n);
                break;
            case 3:
                multiplyMatrices(matrix1, matrix2, result, n);
                printf("\nResultado del producto:\n");
                printMatrix(result, n);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione nuevamente.\n");
        }
    } while (option != 4);

    return 0;
}
