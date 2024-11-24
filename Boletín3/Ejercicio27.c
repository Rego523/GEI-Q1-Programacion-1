#include <stdio.h>
#include <math.h>

// Función recursiva para invertir un número entero.
int investNumber(int n) {
    // Caso base: cuando n es menor o igual a 0.
    if (n == 0) {
        return 0;
    }

    // Calcular el número de dígitos en n.
    int numDigits = (int)log10(n) + 1;
    
    // Función auxiliar recursiva que realiza la inversión.
    return invertAux(n, numDigits);
}

// Función auxiliar para invertir el número
int invertAux(int n, int numDigits) {
    if (n == 0) {
        return 0;
    }

    // Extraer el último dígito y colocarlo en la posición correcta.
    return (n % 10) * pow(10, numDigits - 1) + invertAux(n / 10, numDigits - 1);
}

int main() {
    int number = 12345;

    // Invertir el número.
    int invertedNumber = investNumber(number);

    // Mostrar el resultado.
    printf("The number %d inverted is %d\n", number, invertedNumber);
    
    return 0;
}
