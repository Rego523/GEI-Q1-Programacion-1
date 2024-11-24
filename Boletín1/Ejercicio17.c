#include <stdio.h>

int main() {
    // Declarar las matrices y una matriz para almacenar el resultado.
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j, k;

    // Solicitar los elementos de la primera matriz.
    printf("Enter the elements of the first 2x2 matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Solicitar los elementos de la segunda matriz.
    printf("Enter the elements of the second 2x2 matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calcular el producto de las dos matrices.
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;  // Inicializar el elemento del resultado.
            for (k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Mostrar el resultado.
    printf("\nThe product of the two matrices is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
