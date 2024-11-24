#include <stdio.h>

// Función para determinar si un año es bisiesto
int esBisiesto(int año) {

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return 1; // Año bisiesto
    }
    return 0; // No es bisiesto
}

// Función para calcular el número de días transcurridos hasta la fecha dada
int calcularDiasTranscurridos(int dia, int mes, int año) {

    // Días por mes
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diasTranscurridos = 0;

    // Ajustar para años bisiestos
    if (esBisiesto(año)) {
        diasPorMes[1] = 29; // Febrero tiene 29 días en un año bisiesto
    }

    // Sumar los días de los meses anteriores
    for (int i = 0; i < mes - 1; i++) {
        diasTranscurridos += diasPorMes[i];
    }

    // Sumar los días del mes actual
    diasTranscurridos += dia;

    return diasTranscurridos;
}

int main() {
    
    int dia, mes;
    int año = 2024; // Año actual, puedes modificar este valor si es necesario

    // Solicitar la fecha al usuario
    printf("Escriba una fecha del año %d (dd mm): ", año);
    scanf("%d %d", &dia, &mes);

    // Validar la fecha ingresada
    if (mes < 1 || mes > 12 || dia < 1 || (esBisiesto(año) && mes == 2 && dia > 29) || (!esBisiesto(año) && mes == 2 && dia > 28) || dia > (mes == 4 || mes == 6 || mes == 9 || mes == 11 ? 30 : 31)) {
        printf("Fecha inválida.\n");
        return 1;
    }

    // Calcular los días transcurridos
    int diasTranscurridos = calcularDiasTranscurridos(dia, mes, año);

    // Mostrar el resultado en el centro de la pantalla
    printf("\n\n\n\n");
    printf("%*s\n", 40, "La fecha introducida corresponde al día");
    printf("%*s\n", 40, "del año en curso");
    printf("%*d\n", 40, diasTranscurridos);

    return 0;
}
