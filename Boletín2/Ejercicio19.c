#include <stdio.h>
#include <string.h>

// Función para determinar si un año es bisiesto
int es_bisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1; // Año bisiesto
    } else {
        return 0; // Año no bisiesto
    }
}

int main() {
    
    char mes[20];
    int dias;

    // Solicitar el nombre del mes
    printf("Introduzca el nombre del mes del que quiere calcular los días: ");
    scanf("%s", mes);

    // Convertir el nombre del mes a minúsculas para simplificar la comparación
    for (int i = 0; mes[i]; i++) {
        mes[i] = tolower(mes[i]);
    }

    // Determinar el número de días del mes
    if (strcmp(mes, "enero") == 0 || strcmp(mes, "marzo") == 0 || strcmp(mes, "mayo") == 0 ||
        strcmp(mes, "julio") == 0 || strcmp(mes, "agosto") == 0 || strcmp(mes, "octubre") == 0 ||
        strcmp(mes, "diciembre") == 0) {
        dias = 31;
    } else if (strcmp(mes, "abril") == 0 || strcmp(mes, "junio") == 0 || strcmp(mes, "septiembre") == 0 ||
               strcmp(mes, "noviembre") == 0) {
        dias = 30;
    } else if (strcmp(mes, "febrero") == 0) {
        int anio;
        // Solicitar el año para febrero
        printf("Introduzca el año: ");
        scanf("%d", &anio);
        if (es_bisiesto(anio)) {
            dias = 29; // Febrero en un año bisiesto
        } else {
            dias = 28; // Febrero en un año no bisiesto
        }
    } else {
        // Mes no válido
        printf("El mes introducido no es válido.\n");
        return 1; // Terminar el programa con un código de error
    }

    // Mostrar el número de días del mes
    printf("El mes de %s tiene %d días.\n", mes, dias);

    return 0;
}
