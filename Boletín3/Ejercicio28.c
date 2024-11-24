#include <stdio.h>

// Función recursiva para imprimir la tabla de multiplicar.
void printTable(int number, int maxMultiplier, int currentMultiplier) {
    if (currentMultiplier > maxMultiplier) {
        return; // Caso base: si el multiplicador actual supera el máximo, terminamos.
    }
    
    // Imprimir la línea actual de la tabla de multiplicar.
    printf("%d x %d = %d\n", number, currentMultiplier, number * currentMultiplier);
    
    // Llamada recursiva para el siguiente multiplicador.
    printTable(number, maxMultiplier, currentMultiplier + 1);
}

int main() {
    int number, maxMultiplier;

    // Solicitar el número y el máximo multiplicador.
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter the maximum multiplier: ");
    scanf("%d", &maxMultiplier);

    // Llamar a la función recursiva para imprimir la tabla de multiplicar.
    printTable(number, maxMultiplier, 1);

    return 0;
}
