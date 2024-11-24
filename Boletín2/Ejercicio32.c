#include <stdio.h>

// Función para calcular la potencia de un número entero
int potencia(int base, int exponente) {
    int resultado = 1;  // Inicializamos el resultado en 1
    for (int i = 0; i < exponente; i++) {
        resultado *= base;  // Multiplicamos el resultado por la base en cada iteración
    }
    return resultado;
}

int main() {
    
    int base, exponente;

    // Solicitar al usuario el número entero base
    printf("Introduzca un número entero base: ");
    scanf("%d", &base);

    // Solicitar al usuario el exponente no negativo
    printf("Introduzca un exponente no negativo: ");
    scanf("%d", &exponente);

    // Comprobar que el exponente es no negativo
    if (exponente < 0) {
        printf("El exponente no puede ser negativo.\n");
    } else {
        // Calcular la potencia usando la función
        int resultado = potencia(base, exponente);

        // Mostrar el resultado
        printf("%d elevado a la potencia %d es %d\n", base, exponente, resultado);
    }

    return 0;
}
