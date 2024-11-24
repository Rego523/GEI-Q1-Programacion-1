#include <stdio.h>
#include <math.h>  // Para la función sqrt.

int main() {
    // Declarar variables.
    float T, B;    // Kilogramos totales de baldosas y peso por baldosa.
    int total_tiles, maximum_side;

    // Solicitar el peso total de las baldosas y el peso por baldosa.
    printf("Enter the total weight of the tiles in kilograms (T): ");
    scanf("%f", &T);
    printf("Enter the weight per tile in kilograms (B): ");
    scanf("%f", &B);

    // Calcular el número total de baldosas.
    total_tiles = (int)(T / B);  // Convertir a entero.

    // Calcular el lado del mayor cuadrado que se puede formar.
    maximum_side = (int)sqrt(total_tiles);

    // Mostrar el resultado.
    printf("The number of tiles that would be on one side of the largest square is: %d\n", maximum_side);

    return 0;
}
