#include <stdio.h>

int main() {
    // Declarar variables para almacenar la base, altura y superficie.
    float base, height, surface;

    // Solicitar la base del triángulo.
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    // Solicitar la altura del triángulo.
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calcular la superficie del triángulo.
    surface = (base * height) / 2;

    // Mostrar el resultado con el formato adecuado.
    printf("The surface area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, surface);

    return 0;
}
