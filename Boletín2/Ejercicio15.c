#include <stdio.h>

int main() {
    
    char opcion;

    // Mostrar el menú
    printf("Menú de opciones:\n");
    printf("B.- Bebé\n");
    printf("A.- Adolescente\n");
    printf("M.- Mujer\n");
    printf("H.- Hombre\n");

    // Solicitar al usuario que ingrese una opción
    printf("Introduzca una opción (B/A/M/H): ");
    scanf(" %c", &opcion);  // El espacio antes de %c es para ignorar cualquier espacio en blanco

    // Manejar la opción ingresada
    switch (opcion) {
        case 'B':
        case 'b':
            printf("BEBÉ\n");
            break;
        case 'A':
        case 'a':
            printf("ADOLESCENTE\n");
            break;
        case 'M':
        case 'm':
            printf("MUJER\n");
            break;
        case 'H':
        case 'h':
            printf("HOMBRE\n");
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
