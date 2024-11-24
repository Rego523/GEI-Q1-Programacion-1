#include <stdio.h>
#include <ctype.h>

// Función para contar letras y dígitos en una frase.
void countLettersAndDigits(const char *phrase, int *num_letters, int *num_digits) {
    *num_letters = 0;
    *num_digits = 0;

    // Iterar sobre cada carácter de la frase.
    while (*phrase != '\0') {
        if (isalpha(*phrase)) {
            (*num_letters)++;
        } else if (isdigit(*phrase)) {
            (*num_digits)++;
        }
        phrase++;
    }
}

// Función de prueba.
void testCountLettersAndDigits() {
    char phrase[1000];  // Buffer para almacenar la frase.
    int num_letters, num_digits;

    // Solicitar la frase al usuario
    printf("Enter a phrase (ending in ENTER): ");
    fgets(phrase, sizeof(phrase), stdin);  // Leer una línea de texto.

    // Contar letras y dígitos en la frase.
    countLettersAndDigits(phrase, &num_letters, &num_digits);

    // Mostrar el resultado.
    printf("Number of letters: %d\n", num_letters);
    printf("Number of digits: %d\n", num_digits);
}

int main() {
    testCountLettersAndDigits();
    return 0;
}
