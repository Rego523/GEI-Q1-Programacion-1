#include <stdio.h>

int main() {
    
    float euros, tipo_cambio, dolares;

    // Solicitar la cantidad en euros
    printf("Introduzca la cantidad en euros (€): ");
    scanf("%f", &euros);

    // Solicitar el tipo de cambio (euros a dólares)
    printf("Introduzca el tipo de cambio (euros a dólares): ");
    scanf("%f", &tipo_cambio);

    // Verificar que el tipo de cambio es razonable
    if (tipo_cambio <= 0) {
        printf("El tipo de cambio debe ser un valor positivo.\n");
        return 1; // Salir del programa con un código de error
    }

    // Convertir euros a dólares
    dolares = euros * tipo_cambio;

    // Mostrar el resultado
    printf("%.2f euros equivalen a %.2f dólares.\n", euros, dolares);

    return 0;
}
