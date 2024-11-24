#include <stdio.h>

// Función para convertir un número decimal a binario
void decimal_a_binario(int numero) {
    int binario[32]; // Suponemos que el número no tiene más de 32 bits
    int i = 0;

    // Caso especial para el número 0
    if (numero == 0) {
        printf("0");
        return;
    }

    // Convertir el número decimal a binario
    while (numero > 0) {
        binario[i] = numero % 2; // Guardar el resto de la división por 2
        numero = numero / 2;     // Actualizar el número dividiéndolo por 2
        i++;
    }

    // Imprimir el número binario en orden inverso
    printf("Número en binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    
    int numero;

    // Solicitar al usuario que introduzca un número entero positivo
    printf("Introduzca un número decimal entero positivo: ");
    scanf("%d", &numero);

    // Validar la entrada
    if (numero < 0) {
        printf("El número debe ser positivo.\n");
        return 1; // Salir del programa con un código de error
    }

    // Llamar a la función para convertir y mostrar el número binario
    decimal_a_binario(numero);

    return 0;
}
