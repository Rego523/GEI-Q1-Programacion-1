#include <stdio.h>
#include <ctype.h>

// Función para verificar si un carácter es un dígito.
int checkIsDigit(char c) {
    // Utilizamos la función isdigit() de ctype.h para verificar si es un dígito.
    if (isdigit(c)) {
        return 1;  // Es un dígito.
    } else {
        return 0;  // No es un dígito.
    }
}

// Función de prueba.
void tryIsDigit() {
    char c;

    // Solicitar el carácter al usuario.
    printf("Enter a character: ");
    scanf(" %c", &c);

    // Verificar si es un dígito y mostrar el resultado.
    if (checkIsDigit(c)) {
        printf("The character '%c' is a digit.\n", c);
    } else {
        printf("The character '%c' is not a digit.\n", c);
    }
}

int main() {
    tryIsDigit();
    return 0;
}
