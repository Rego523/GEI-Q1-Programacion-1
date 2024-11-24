#include <stdio.h>

int main() {
    // Declarar variables para la base, altura y superficie.
    float base, height, surface;

    // Solicitar la base del rectángulo.
    printf("Enter the base of the rectangle: ");
    scanf("%f", &base);

    // Solicitar la altura del rectángulo.
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    // Calcular la superficie del rectángulo (Superficie = base * altura).
    surface = base * height;

    // Mostrar el resultado.
    printf("The area of the rectangle with base %.2f and height %.2f is %.2f\n", base, height, surface);

    return 0;
}
