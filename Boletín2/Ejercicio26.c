#include <stdio.h>

int main() {
    
    int num, i;

    // Solicitar al usuario el número para la tabla de multiplicar
    printf("Introduzca un número entero positivo: ");
    scanf("%d", &num);

    // Comprobar si el número es positivo
    if (num <= 0) {
        printf("El número debe ser positivo.\n");
        return 1; // Terminar el programa con un código de error
    }

    // Mostrar la tabla de multiplicar del número introducido
    printf("TABLA DE MULTIPLICAR DEL %d\n", num);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
