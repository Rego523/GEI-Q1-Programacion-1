#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int letras = 0, digitos = 0, otros = 0;

    // Instrucción para que el usuario introduzca la frase
    printf("Introduce una frase (presiona Enter para terminar):\n");

    // Leer carácter por carácter hasta que se presione Enter (salto de línea)
    while ((c = getchar()) != '\n') {  // Leer hasta fin de línea
        if (isalpha(c)) {
            letras++;  // Si es una letra, aumentar contador de letras
        } else if (isdigit(c)) {
            digitos++;  // Si es un dígito, aumentar contador de dígitos
        } else {
            otros++;  // Cualquier otro carácter
        }
    }

    // Mostrar los resultados
    printf("Número de letras: %d\n", letras);
    printf("Número de dígitos: %d\n", digitos);
    printf("Número de otros caracteres: %d\n", otros);

    return 0;
}
