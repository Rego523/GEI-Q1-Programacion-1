#include <stdio.h>

int main() {
    
    float num;         // Variable para almacenar el número introducido
    float sum = 0;     // Variable para almacenar la suma total
    int count = 0;     // Variable para contar la cantidad de números introducidos

    printf("A continuación introduzca los números de los que desee calcular la media separados por espacios:\n");

    // Leer números hasta que se pulse Enter sin introducir ningún número
    while (1) {
        // Si no hay más entradas, scanf no leerá nada y devolverá EOF
        if (scanf("%f", &num) != 1) {
            // Limpiar el buffer de entrada
            while (getchar() != '\n'); 
            break; // Salir del bucle si no se puede leer un número
        }

        sum += num; // Añadir el número a la suma total
        count++;    // Incrementar el contador de números introducidos
    }

    // Verificar si se introdujeron números
    if (count > 0) {
        // Calcular y mostrar la media aritmética
        float average = sum / count;
        printf("La media aritmética de los números introducidos es %.2f\n", average);
    } else {
        printf("No se introdujeron números.\n");
    }

    return 0;
}
