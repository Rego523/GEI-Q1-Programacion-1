#include <stdio.h>

int main() {
    // Declarar variables para la base, altura y el perímetro.
    float base, height, perimeter;

    // Solicitar la base del rectángulo.
    printf("Enter the base of the rectangle: ");
    scanf("%f", &base);

    // Solicitar la altura del rectángulo.
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    // Calcular el perímetro del rectángulo (P = 2*(base + altura) = (2*base + 2*altura)).
    perimeter = 2 * (base + height);

    // Mostrar el resultado en el formato adecuado.
    printf("The perimeter of the rectangle with base %.2f and height %.2f is %.2f\n", base, height, perimeter);

    return 0;
}
