#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 2500

// Función para sumar dos grandes números representados como cadenas de caracteres
void sumLargeNumbers(char num1[], char num2[], char result[]) {
    int carry = 0;  // Para manejar el acarreo
    int i, j, k;

    // Empezamos desde el final de las cadenas
    i = strlen(num1) - 1;
    j = strlen(num2) - 1;
    k = 0;  // Posición en el arreglo de resultado

    // Mientras haya cifras en cualquiera de los números
    while (i >= 0 || j >= 0 || carry != 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;  // Si no hay más cifras, tomamos 0
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;  // Lo mismo para el segundo número

        // Sumar las cifras y el acarreo
        int sum = digit1 + digit2 + carry;

        // La nueva cifra es el residuo de la división por 10
        result[k] = (sum % 10) + '0';

        // El acarreo es el cociente de la división por 10
        carry = sum / 10;

        // Avanzamos a la siguiente posición
        i--;
        j--;
        k++;
    }

    // Asegurarnos de que la cadena está terminada en nulo
    result[k] = '\0';

    // Invertir el resultado porque lo construimos de atrás hacia adelante
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main() {
    char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1], result[MAX_DIGITS + 2];

    // Leer los dos números como cadenas
    printf("Introduce el primer número de hasta 2500 cifras:\n");
    fgets(num1, sizeof(num1), stdin);
    num1[strcspn(num1, "\n")] = '\0';  // Eliminar salto de línea al final

    printf("Introduce el segundo número de hasta 2500 cifras:\n");
    fgets(num2, sizeof(num2), stdin);
    num2[strcspn(num2, "\n")] = '\0';  // Eliminar salto de línea al final

    // Asegurarnos de que los números son válidos (contienen solo dígitos)
    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] < '0' || num1[i] > '9') {
            printf("El primer número contiene caracteres no válidos.\n");
            return 1;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (num2[i] < '0' || num2[i] > '9') {
            printf("El segundo número contiene caracteres no válidos.\n");
            return 1;
        }
    }

    // Sumar los números
    sumLargeNumbers(num1, num2, result);

    // Mostrar el resultado
    printf("La suma es: %s\n", result);

    return 0;
}
