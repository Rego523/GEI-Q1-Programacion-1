#include <stdio.h>
#include <math.h>

int main() {
    
    // Variables para los coeficientes y las raíces
    double a, b, c;
    double discriminante, x1, x2;

    // Solicitar los coeficientes al usuario
    printf("Introduce el coeficiente a: ");
    scanf("%lf", &a);
    printf("Introduce el coeficiente b: ");
    scanf("%lf", &b);
    printf("Introduce el coeficiente c: ");
    scanf("%lf", &c);

    // Calcular el discriminante
    discriminante = b * b - 4 * a * c;

    // Comprobar si el coeficiente a es cero
    if (a == 0) {
        printf("El coeficiente 'a' no puede ser cero.\n");
        return 1;
    }

    // Evaluar el discriminante para determinar el tipo de soluciones
    if (discriminante > 0) {
        // Dos raíces reales distintas
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces de la ecuación son: x1 = %.2f y x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        // Una raíz real doble
        x1 = x2 = -b / (2 * a);
        printf("La raíz doble de la ecuación es: x1 = x2 = %.2f\n", x1);
    } else {
        // Raíces complejas
        double realParte = -b / (2 * a);
        double imaginarioParte = sqrt(-discriminante) / (2 * a);
        printf("Las raíces complejas de la ecuación son: x1 = %.2f + %.2fi y x2 = %.2f - %.2fi\n", realParte, imaginarioParte, realParte, imaginarioParte);
    }

    return 0;
}
