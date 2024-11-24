#include <stdio.h>
#include <time.h>

// Función para determinar si un año es bisiesto
int esBisiesto(int año) {
    
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return 1; // Año bisiesto
    }
    return 0; // No es bisiesto
}

// Función para calcular la edad exacta
int calcularEdad(int diaNacimiento, int mesNacimiento, int añoNacimiento, int diaActual, int mesActual, int añoActual) {
    int edad = añoActual - añoNacimiento;

    // Ajustar la edad si aún no ha cumplido años en el año actual
    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--;
    }

    return edad;
}

int main() {

    int diaNacimiento, mesNacimiento, añoNacimiento;
    int diaActual, mesActual, añoActual;

    // Obtener la fecha actual
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);
    diaActual = tm_info->tm_mday;
    mesActual = tm_info->tm_mon + 1; // tm_mon es de 0 a 11, por lo que sumamos 1
    añoActual = tm_info->tm_year + 1900; // tm_year es el número de años desde 1900

    // Solicitar la fecha de nacimiento al usuario
    printf("Introduce tu fecha de nacimiento (dd mm aaaa): ");
    scanf("%d %d %d", &diaNacimiento, &mesNacimiento, &añoNacimiento);

    // Validar la fecha de nacimiento
    if (mesNacimiento < 1 || mesNacimiento > 12 || diaNacimiento < 1 || 
        (esBisiesto(añoNacimiento) && mesNacimiento == 2 && diaNacimiento > 29) || 
        (!esBisiesto(añoNacimiento) && mesNacimiento == 2 && diaNacimiento > 28) || 
        diaNacimiento > (mesNacimiento == 4 || mesNacimiento == 6 || mesNacimiento == 9 || mesNacimiento == 11 ? 30 : 31)) {
        printf("Fecha de nacimiento inválida.\n");
        return 1;
    }

    // Calcular y mostrar la edad
    int edad = calcularEdad(diaNacimiento, mesNacimiento, añoNacimiento, diaActual, mesActual, añoActual);
    printf("Tu edad exacta es: %d años\n", edad);

    return 0;
}
