#include <stdio.h>

int main() {
    
    char opcion;

    do {
        // Mostrar el menú
        printf("Menú:\n");
        printf("R - Dibujar un rectángulo\n");
        printf("C - Dibujar un cuadrado\n");
        printf("P - Dibujar un pentágono\n");
        printf("A - Terminar el programa\n");
        printf("Introduzca una opción: ");
        
        // Leer la opción del usuario
        opcion = getchar();
        
        // Limpiar el buffer de entrada
        while (getchar() != '\n');

        // Procesar la opción
        switch (opcion) {
            case 'R':
            case 'r':
                printf("Ahora dibujaría un rectángulo\n");
                break;
            case 'C':
            case 'c':
                printf("Ahora dibujaría un cuadrado\n");
                break;
            case 'P':
            case 'p':
                printf("Ahora dibujaría un pentágono\n");
                break;
            case 'A':
            case 'a':
                printf("Ahora acabo el programa\n");
                break;
            default:
                printf("Opción no válida. Por favor, intente de nuevo.\n");
                break;
        }
        
    } while (opcion != 'A' && opcion != 'a');

    return 0;
}
