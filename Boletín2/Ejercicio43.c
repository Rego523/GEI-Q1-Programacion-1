#include <stdio.h>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    
    double e = 1.0; // Inicializamos con el primer término de la serie (1/0!)
    double term = 1.0; // Primer término de la serie
    int n = 1; // Comenzamos con el segundo término de la serie

    // Calcular términos sucesivos de la serie hasta que el término sea menor que 0.0001
    while (term >= 0.0001) {
        term = 1.0 / factorial(n); // Calculamos el término actual
        e += term; // Añadimos el término a la suma total
        n++; // Pasamos al siguiente término
    }

    // Mostrar el valor aproximado de e
    printf("Valor aproximado de e: %.5f\n", e);

    return 0;
}
