#include <stdio.h>
#include <ctype.h>

// Función para verificar si un carácter está en mayúsculas o minúsculas.
void verifyUppercaseLowercase(char c) {
    if (isupper(c)) {
        printf("The character '%c' is uppercase.\n", c);
    } else if (islower(c)) {
        printf("The character '%c' is lowercase.\n", c);
    } else {
        printf("The character '%c' is not a letter.\n", c);
    }
}

// Función de prueba.
void testVerifyUppercaseLowercase() {
    char c;

    // Solicitar el carácter al usuario.
    printf("Enter a character: ");
    scanf(" %c", &c);

    // Llamar a la función para verificar si es mayúscula o minúscula.
    verifyUppercaseLowercase(c);
}

int main() {
    testVerifyUppercaseLowercase();
    return 0;
}
