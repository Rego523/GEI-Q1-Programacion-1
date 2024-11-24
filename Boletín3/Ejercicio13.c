#include <stdio.h>
#include <math.h>

// Función para calcular el valor del polinomio: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.
double calcularPolinomio(double x) {
    double result;
    result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
    return result;
}

// Función de prueba.
void tryCalculatePolynomial() {
    double x;
    
    // Solicitar el valor de x.
    printf("Enter the value of x:");
    scanf("%lf", &x);

    // Calcular el polinomio y mostrar el resultado.
    double result = calcularPolinomio(x);
    printf("The value of the polynomial for x = %.2lf is: %.2lf\n", x, result);
}

int main() {
    tryCalculatePolynomial();
    return 0;
}
