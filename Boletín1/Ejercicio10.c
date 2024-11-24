#include <stdio.h>

int main() {
    // Declarar variables para almacenar las coordenadas de los dos vectores.
    int x1, y1, z1;  // Coordenadas del primer vector.
    int x2, y2, z2;  // Coordenadas del segundo vector.
    int scalar_product;

    // Solicitar las coordenadas del primer vector.
    printf("Cartesian coordinates first vector (separated by space): ");
    scanf("%d %d %d", &x1, &y1, &z1);

    // Solicitar las coordenadas del segundo vector.
    printf("Cartesian coordinates second vector (separated by space): ");
    scanf("%d %d %d", &x2, &y2, &z2);

    // Calcular el producto escalar (P = x1 * x2 + y1 * y2 + z1 * z2).
    scalar_product = x1 * x2 + y1 * y2 + z1 * z2;

    // Mostrar el resultado del producto escalar.
    printf("Scalar product: %d\n", scalar_product);

    return 0;
}
