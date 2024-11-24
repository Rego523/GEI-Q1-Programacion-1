#include <stdio.h>
#include <ctype.h>

// Función para verificar si un carácter es vocal (sin diferenciar mayúsculas y minúsculas).
int isVocal(char c) {
    // Convertir el carácter a minúscula.
    c = tolower(c);

    // Verificar si el carácter es una vocal.
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;  // Es vocal.
    } else {
        return 0;  // No es vocal.
    }
}

// Función de prueba
void testIsVocal() {
    char c;

    // Solicitar el carácter al usuario.
    printf("Enter a character: ");
    scanf(" %c", &c);  // El espacio antes de %c asegura que no se lean caracteres de nueva línea previos.

    // Verificar si es vocal y mostrar el resultado.
    if (isVocal(c)) {
        printf("The character '%c' is a vowel.\n", c);
    } else {
        printf("The character '%c' is not a vowel.\n", c);
    }
}

int main() {
    testIsVocal();
    return 0;
}
