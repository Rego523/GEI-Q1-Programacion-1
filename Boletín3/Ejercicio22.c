#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Función para verificar si un número es primo.
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Los números menores o iguales a 1 no son primos.
    }
    if (n <= 3) {
        return true; // 2 y 3 son primos.
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Elimina múltiplos de 2 y 3.
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // Verifica múltiplos de 6 ± 1.
        }
    }
    return true; // Si no se encontró ningún divisor, es primo.
}

int main() {
    int number = 29;
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
