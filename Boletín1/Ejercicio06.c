#include <stdio.h>
#include <math.h>  // Necesario para usar la función pow() y M_PI.

int main() {
    // Declarar variables para el radio, el área y el volumen.
    float radio, area, volume;

    // Solicitar el radio de la esfera.
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radio);

    // Calcular el área de la esfera (Área = 4 * pi * radio^2).
    area = 4 * M_PI * pow(radio, 2);

    // Calcular el volumen de la esfera (Volumen = (4/3) * pi * radio^3).
    volume = (4.0/3.0) * M_PI * pow(radio, 3);

    // Mostrar los resultados.
    printf("The area of ​​the sphere of radius %.2f is %.2f\n", radio, area);
    printf("The volume of the sphere of radius %.2f is %.2f\n", radio, volume);

    return 0;
}
