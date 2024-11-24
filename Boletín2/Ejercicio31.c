#include <stdio.h>
#include <stdlib.h>  // Para la función system("pause") en Windows

// Función para verificar si un año es bisiesto
int esBisiesto(int año) {
    return (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0));
}

int main() {
    
    int año;

    // Mostrar los años bisiestos del siglo XIX
    printf("Años bisiestos en el siglo XIX (1801-1900):\n");
    for (año = 1801; año <= 1900; año++) {
        if (esBisiesto(año)) {
            printf("%d\n", año);
        }
    }

    // Esperar a que el usuario pulse una tecla
    printf("\nPulse una tecla para continuar...\n");
    getchar();  // Leer el carácter que se introduce para pausar el programa
    getchar();  // Leer el Enter que se introduce después de la tecla

    // Mostrar los años bisiestos del siglo XX
    printf("Años bisiestos en el siglo XX (1901-2000):\n");
    for (año = 1901; año <= 2000; año++) {
        if (esBisiesto(año)) {
            printf("%d\n", año);
        }
    }

    return 0;
}
