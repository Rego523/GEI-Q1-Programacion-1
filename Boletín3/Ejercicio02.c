#include <stdio.h>

// Subprograma que devuelve el nombre del día de la semana según la inicial.
const char* getNameDay(char initial) {
    switch (initial) {
        case 'L':
        case 'l':
            return "Lunes";
        case 'M':
        case 'm':
            return "Martes";
        case 'X':
        case 'x':
            return "Miércoles";
        case 'J':
        case 'j':
            return "Jueves";
        case 'V':
        case 'v':
            return "Viernes";
        case 'S':
        case 's':
            return "Sábado";
        case 'D':
        case 'd':
            return "Domingo";
        default:
            return NULL; // Retorna NULL si la inicial no es válida.
    }
}

int main() {
    char initial;
    const char* day;

    // Bucle que repite hasta que se introduzca una inicial válida.
    do {
        // Solicitar la inicial del día de la semana.
        printf("Ingrese la inicial del día de la semana (L, M, X, J, V, S, D): ");
        scanf(" %c", &initial);

        // Llamar al subprograma para obtener el nombre del día.
        day = getNameDay(initial);

        // Si la inicial es incorrecta, se notifica y se vuelve a preguntar.
        if (day == NULL) {
            printf("Inicial no válida. Inténtelo de nuevo.\n");
        }

    } while (day == NULL); // Se repite mientras no sea una inicial válida.

    // Imprimir el nombre del día correspondiente.
    printf("El día correspondiente es: %s\n", day);

    return 0;
}
