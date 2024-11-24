#include <stdio.h>
#include <math.h>  // Para usar la función log10

int main() {
    
    double capital_inicial, tasa_interes, anos;

    // Solicitar el capital inicial y la tasa de interés al usuario
    printf("Introduzca el capital inicial (en euros): ");
    scanf("%lf", &capital_inicial);

    printf("Introduzca la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasa_interes);

    // Comprobar que los valores introducidos sean válidos
    if (capital_inicial <= 0 || tasa_interes <= 0) {
        printf("El capital inicial y la tasa de interés deben ser mayores que 0.\n");
        return 1;
    }

    // Calcular el número de años necesarios para que el capital se duplique
    anos = log10(2) / log10(1 + tasa_interes / 100);

    // Mostrar el resultado
    printf("El capital inicial se doblará en aproximadamente %.2f años.\n", anos);

    return 0;
}
