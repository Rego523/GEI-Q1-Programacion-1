#include <stdio.h>

// Función recursiva para contar el número de dígitos en un número.
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

// Función recursiva para verificar si un número es capicúa.
int isCapicuaRecursive(int n, int numDigits) {
    // Caso base: cuando el número es menor que 10, es capicúa por definición.
    if (n < 10) {
        return 1;
    }
    
    // Extraer el primer y el último dígito.
    int firstDigit = n / pow(10, numDigits - 1);
    int lastDigit = n % 10;

    // Comparar el primer y el último dígito.
    if (firstDigit != lastDigit) {
        return 0; // No es capicúa si los dígitos no coinciden.
    }

    // Eliminar el primer y el último dígito y llamar recursivamente.
    int reducedNumber = (n % (int)pow(10, numDigits - 1)) / 10;
    return isCapicuaRecursive(reducedNumber, numDigits - 2);
}

// Función principal para verificar si un número es capicúa.
int isCapicua(int n) {
    // Manejar el caso especial para el número 0.
    if (n == 0) {
        return 1;
    }

    // Contar el número de dígitos en el número.
    int numDigits = countDigits(n);
    
    // Llamar a la función recursiva.
    return isCapicuaRecursive(n, numDigits);
}

int main() {
    int number;

    // Solicitar el número al usuario.
    printf("Enter a natural integer: ");
    scanf("%d", &number);

    // Verificar y mostrar si el número es capicúa.
    if (isCapicua(number)) {
        printf("%d is a capicúa number.\n", number);
    } else {
        printf("%d is not a capicúa number.\n", number);
    }
    
    return 0;
}
