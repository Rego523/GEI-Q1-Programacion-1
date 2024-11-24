#include <stdio.h>

int main() {
    
    double limite, suma = 0.0;
    int n = 0;

    // Solicitar el límite al usuario
    printf("Introduzca el límite: ");
    scanf("%lf", &limite);

    // Validar que el límite sea positivo
    if (limite <= 0) {
        printf("El límite debe ser un número positivo.\n");
        return 1;
    }

    // Calcular el número de términos necesarios
    while (suma <= limite) {
        n++;
        suma += 1.0 / n;
    }

    // Mostrar el resultado
    printf("Número de términos necesarios para que la suma sea mayor que el límite: %d\n", n);
    printf("Suma alcanzada: %.6f\n", suma);

    return 0;
}
