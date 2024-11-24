#include <stdio.h>

// Función para determinar si un año es bisiesto.
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // El año es bisiesto.
    } else {
        return 0;  // El año no es bisiesto.
    }
}

// Función para validar si una fecha es correcta.
int validateDate(int day, int month, int anio) {
    // Validar el mes.
    if (month < 1 || month > 12) {
        return 0;  // Mes inválido.
    }

    // Días máximos según el mes.
    int month_total_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Si el año es bisiesto y el mes es febrero, cambiar el número de días a 29.
    if (isLeapYear(anio) && month == 2) {
        month_total_days[1] = 29;
    }

    // Validar el día.
    if (day < 1 || day > month_total_days[month - 1]) {
        return 0;  // Día inválido.
    }

    // Si llegamos aquí, la fecha es válida.
    return 1;
}

int main() {
    int day, month, year;

    // Solicitar la fecha al usuario.
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Validar la fecha.
    if (validateDate(day, month, year)) {
        printf("The date entered is correct.\n");
    } else {
        printf("The date entered is not correct.\n");
    }

    return 0;
}
