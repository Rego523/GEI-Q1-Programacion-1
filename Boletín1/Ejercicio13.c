#include <stdio.h>
#include <math.h>  // Para usar M_PI.

int main() {
    // Declarar variables para los radios, perímetros y áreas.
    float radio[3], perimeter[3], area[3];
    int i;

    // Solicitar el radio para los tres círculos.
    for (i = 0; i < 3; i++) {
        printf("Enter the radius of the circle %d: ", i + 1);
        scanf("%f", &radio[i]);
        
        // Calcular el perímetro (P = 2 * pi * radio).
        perimeter[i] = 2 * M_PI * radio[i];
        
        // Calcular el área (A = pi * radio^2).
        area[i] = M_PI * pow(radio[i], 2);
    }

    // Mostrar la tabla de resultados.
    printf("\nRADIO PERIMETER AREA\n");
    printf("===== ========= =====\n");
    for (i = 0; i < 3; i++) {
        printf("%5.0f %8.2f %5.2f\n", radio[i], perimeter[i], area[i]);
    }

    return 0;
}
