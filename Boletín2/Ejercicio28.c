#include <stdio.h>

int main() {
    
    int num;          // Variable para almacenar el número introducido
    int sum = 0;      // Variable para almacenar la suma total

    printf("A continuación introduzca los números enteros de los que desee calcular la suma separados por espacios:\n");

    // Leer números hasta que se introduzca el número 0
    while (1) {
        scanf("%d", &num); // Leer un número entero
        
        if (num == 0) {
            break; // Salir del bucle si el número es 0
        }

        sum += num; // Añadir el número a la suma total
    }

    // Mostrar la suma de los números introducidos
    printf("La suma de los números introducidos es %d\n", sum);
    
    return 0;
}
