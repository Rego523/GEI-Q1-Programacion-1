#include <stdio.h>
#include <math.h>

int main() {
    
    double a, b, c;        // Coeficientes de la ecuación
    double discriminante;  // Discriminante de la ecuación
    double x1, x2;         // Raíces de la ecuación
    int caso;              // Caso determinado por el discriminante

    // Solicitar coeficientes al usuario
    printf("Introduce el coeficiente a: ");
    scanf("%lf", &a);

    printf("Introduce el coeficiente b: ");
    scanf("%lf", &b);

    printf("Introduce el coeficiente c: ");
    scanf("%lf", &c);

    // Verificar si 'a' es cero (no es una ecuación de segundo grado)
    if (a == 0) {
        printf("El coeficiente 'a' no puede ser cero.\n");
        return 1;
    }

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    // Determinar el caso basado en el discriminante
    switch (discriminante > 0) {
        case 1: // Raíces reales y distintas
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Las raíces son reales y distintas:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
            break;
        case 0: // Aquí se maneja el caso para discriminante >= 0 y <= 0
            switch (discriminante == 0) {
                case 1: // Raíz real doble
                    x1 = -b / (2 * a);
                    printf("La raíz es real y doble:\n");
                    printf("x1 = x2 = %.2lf\n", x1);
                    break;
                default: // Discriminante < 0, raíces complejas conjugadas
                    double parteReal = -b / (2 * a);
                    double parteImaginaria = sqrt(-discriminante) / (2 * a);
                    printf("Las raíces son complejas conjugadas:\n");
                    printf("x1 = %.2lf + %.2lfi\n", parteReal, parteImaginaria);
                    printf("x2 = %.2lf - %.2lfi\n", parteReal, parteImaginaria);
                    break;
            }
            break;
    }

    return 0;
}
