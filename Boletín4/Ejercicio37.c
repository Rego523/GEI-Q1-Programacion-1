#include <stdio.h>
#include <string.h>

// Función para comprobar si un año es bisiesto
int esBisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1; // Año bisiesto
    }
    return 0; // Año no bisiesto
}

// Función para leer una fecha en formato dd/mm/yyyy y agregar ceros a la izquierda si es necesario
void leerFecha(char fecha[]) {
    int dia, mes, anio;
    
    printf("Introduzca la fecha en formato dd/mm/yyyy: ");
    scanf("%d/%d/%d", &dia, &mes, &anio);
    
    // Formatear la fecha con ceros a la izquierda si es necesario
    snprintf(fecha, 11, "%02d/%02d/%04d", dia, mes, anio);
}

// Función para imprimir los n primeros años bisiestos a partir de una fecha dada
void imprimirAniosBisiestos(char fecha[], int n) {
    // Extraemos el año de la fecha introducida
    int dia, mes, anio;
    sscanf(fecha, "%d/%d/%d", &dia, &mes, &anio);

    printf("Años bisiestos a partir de %s:\n", fecha);
    
    int encontrados = 0;
    int i = anio;
    
    // Buscamos los años bisiestos y los imprimimos
    while (encontrados < n) {
        if (esBisiesto(i)) {
            printf("%d\n", i);
            encontrados++;
        }
        i++;
    }
}

int main() {
    char fecha[11]; // Almacenamos la fecha en formato dd/mm/yyyy
    
    // Leemos la fecha inicial
    leerFecha(fecha);
    
    // Mostramos los primeros 100 años bisiestos a partir de la fecha dada
    imprimirAniosBisiestos(fecha, 100);
    
    // Opción para cambiar la fecha e imprimir los años bisiestos nuevamente
    char respuesta;
    do {
        printf("\n¿Desea cambiar la fecha y ver los n años bisiestos? (s/n): ");
        scanf(" %c", &respuesta); // El espacio antes de %c es para evitar el salto de línea pendiente

        if (respuesta == 's' || respuesta == 'S') {
            int n;
            printf("Introduzca la nueva fecha en formato dd/mm/yyyy: ");
            leerFecha(fecha); // Leemos la nueva fecha
            printf("¿Cuántos años bisiestos desea ver a partir de la nueva fecha? ");
            scanf("%d", &n); // Leemos el número de años bisiestos a mostrar
            imprimirAniosBisiestos(fecha, n); // Mostramos los primeros n años bisiestos
        }
    } while (respuesta == 's' || respuesta == 'S');
    
    return 0;
}
