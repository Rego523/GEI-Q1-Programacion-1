#include <stdio.h>

// Definición del tipo tMes como un alias para int.
typedef int tMonth;

// Función que recibe un valor de tipo tMes y devuelve el siguiente mes.
tMes nextMonth(tMonth month) {
    // Si el mes es 12 (diciembre), el siguiente mes es enero (1).
    if (month == 12) {
        return 1;
    } else {
        return month + 1;
    }
}

int main() {
    tMonth month, nextMonth;

    // Solicitar al usuario que ingrese un mes.
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Validar que el mes esté entre 1 y 12
    if (month < 1 || month > 12) {
        printf("Invalid month. It must be between 1 and 12.\n");
    } else {
        // Llamar a la función NextMonth para obtener el siguiente mes.
        nextMonth = nextMonth(month);
        printf("The month following %d is: %d\n", month, nextMonth);
    }

    return 0;
}
