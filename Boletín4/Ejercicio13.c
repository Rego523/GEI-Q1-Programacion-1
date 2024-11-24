#include <stdio.h>

#define N 5 // Tamaño de la matriz (puedes cambiarlo para que sea de tamaño NxN, donde 0 < N < 20)

void inputMatrix(int matrix[N][N]) {
    // Solicitar al usuario los elementos de la matriz
    printf("Introduce los elementos de la matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[N][N]) {
    // Mostrar la matriz en formato matricial
    printf("\nMatriz introducida:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void findMaxMin(int matrix[N][N], int *max, int *min, int *maxPos, int *minPos) {
    // Inicializar max y min con el primer elemento de la matriz
    *max = matrix[0][0];
    *min = matrix[0][0];
    *maxPos = 0;
    *minPos = 0;

    // Recorrer la matriz para encontrar el máximo y el mínimo
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
                *maxPos = i * N + j; // Guardamos la posición como un índice único
            }
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
                *minPos = i * N + j; // Guardamos la posición como un índice único
            }
        }
    }
    // Calcular las posiciones de la matriz a partir del índice único
    int maxRow = *maxPos / N;
    int maxCol = *maxPos % N;
    int minRow = *minPos / N;
    int minCol = *minPos % N;

    printf("\nEl elemento mayor es %d en la posición [%d][%d].\n", *max, maxRow + 1, maxCol + 1);
    printf("El elemento menor es %d en la posición [%d][%d].\n", *min, minRow + 1, minCol + 1);
}

int main() {
    int matrix[N][N];
    int max, min, maxPos, minPos;

    // Introducir los elementos de la matriz
    inputMatrix(matrix);

    // Mostrar la matriz
    printMatrix(matrix);

    // Encontrar el máximo y mínimo y sus posiciones
    findMaxMin(matrix, &max, &min, &maxPos, &minPos);

    return 0;
}
