#include <stdio.h>
#include <math.h>

// Función que resuelve la ecuación de segundo grado.
void solveEquationSecondDegree(float A, float B, float C) {
    float discriminante, x1, x2;

    // Calcular el discriminante.
    discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        // Dos soluciones reales diferentes.
        x1 = (-B + sqrt(discriminante)) / (2 * A);
        x2 = (-B - sqrt(discriminante)) / (2 * A);
        printf("The equation has two real solutions: x1 = %.2f y x2 = %.2f\n", x1, x2);
    } else if (discriminante == 0) {
        // Una solución real única.
        x1 = -B / (2 * A);
        printf("The equation has a unique real solution: x = %.2f\n", x1);
    } else {
        // Soluciones complejas.
        float real_part = -B / (2 * A);
        float imaginary_part = sqrt(-discriminante) / (2 * A);
        printf("The equation has two complex solutions: x1 = %.2f + %.2fi y x2 = %.2f - %.2fi\n", 
                real_part, imaginary_part, real_part, imaginary_part);
    }
}

int main() {
    float A, B, C;

    // Solicitar los coeficientes de la ecuación.
    printf("Enter the value of A: ");
    scanf("%f", &A);
    
    // Comprobar que A no sea cero (ya que no sería una ecuación de segundo grado).
    while (A == 0) {
        printf("The value of A cannot be 0. Enter a valid value for A: ");
        scanf("%f", &A);
    }

    printf("Enter the value of B: ");
    scanf("%f", &B);
    
    printf("Enter the value of C: ");
    scanf("%f", &C);

    // Llamar al subprograma para resolver la ecuación.
    solveEquationSecondDegree(A, B, C);

    return 0;
}
