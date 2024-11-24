#include <stdio.h>

// Función para convertir Fahrenheit a Celsius.
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    // Declarar variables para el nombre de la ciudad y las temperaturas.
    char city[50];
    float temp_max_fahrenheit, temp_min_fahrenheit;
    float temp_max_celsius, temp_min_celsius;

    // Solicitar el nombre de la ciudad.
    printf("Enter the name of your city: ");
    scanf("%49[^\n]", city);  // Leer una línea de texto.

    // Solicitar la temperatura máxima y mínima en Fahrenheit.
    printf("Enter the maximum temperature in degrees Fahrenheit: ");
    scanf("%f", &temp_max_fahrenheit);
    printf("Enter the minimum temperature in degrees Fahrenheit: ");
    scanf("%f", &temp_min_fahrenheit);

    // Convertir las temperaturas a Celsius.
    temp_max_celsius = fahrenheitToCelsius(temp_max_fahrenheit);
    temp_min_celsius = fahrenheitToCelsius(temp_min_fahrenheit);

    // Mostrar la tabla de resultados.
    printf("\n--------------------------------------------------%s 15/09/2019--------------------------------------------------\n", city);
    printf("TMax (ºF) TMin (ºF) TMax (ºC) TMin (ºC)\n");
    printf("%5.0f ºF %5.0f ºF %7.2f ºC %7.2f ºC\n", temp_max_fahrenheit, temp_min_fahrenheit, temp_max_celsius, temp_min_celsius);
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
