#include <stdio.h>

#define MAX_SIZE 20

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Solicitar al usuario los elementos de la matriz
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
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
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void swapRows(int matrix[MAX_SIZE][MAX_SIZE], int n, int row1, int row2) {
    // Intercambiar dos filas de la matriz
    for (int i = 0; i < n; i++) {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

void swapColumns(int matrix[MAX_SIZE][MAX_SIZE], int n, int col1, int col2) {
    // Intercambiar dos columnas de la matriz
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, choice, i, j;

    // Solicitar el tamaño de la matriz
    printf("Enter the size of the matrix (N for NxN, 1 <= N <= 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Matrix size must be between 1 and 20.\n");
        return 1;
    }

    // Introducir los elementos de la matriz
    inputMatrix(matrix, n);

    // Mostrar la matriz original
    printf("\nOriginal matrix:\n");
    printMatrix(matrix, n);

    // Solicitar al usuario si desea intercambiar filas o columnas
    printf("\nDo you want to swap rows or columns? (1 for rows, 2 for columns): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Intercambiar filas
        printf("\nEnter the row indices to swap (1 <= i, j <= %d): ", n);
        scanf("%d %d", &i, &j);
        
        // Validar que los índices estén dentro del rango
        if (i < 1 || i > n || j < 1 || j > n) {
            printf("Row indices are invalid.\n");
            return 1;
        }

        // Intercambiar las filas (restamos 1 para ajustar a índices base 0)
        swapRows(matrix, n, i - 1, j - 1);
    } else if (choice == 2) {
        // Intercambiar columnas
        printf("\nEnter the column indices to swap (1 <= i, j <= %d): ", n);
        scanf("%d %d", &i, &j);
        
        // Validar que los índices estén dentro del rango
        if (i < 1 || i > n || j < 1 || j > n) {
            printf("Column indices are invalid.\n");
            return 1;
        }

        // Intercambiar las columnas (restamos 1 para ajustar a índices base 0)
        swapColumns(matrix, n, i - 1, j - 1);
    } else {
        printf("Invalid option.\n");
        return 1;
    }

    // Mostrar la matriz después del intercambio
    printf("\nMatrix after the swap:\n");
    printMatrix(matrix, n);

    return 0;
}
