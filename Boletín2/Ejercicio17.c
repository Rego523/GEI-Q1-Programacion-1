#include <stdio.h>
#include <ctype.h>  // Para funciones como isalpha, isdigit, etc.

int main() {
    
    char caracter;

    // Solicitar al usuario que introduzca un carácter
    printf("Introduzca un caracter: ");
    scanf(" %c", &caracter);  // El espacio antes de %c es para ignorar cualquier espacio en blanco

    // Clasificar el carácter
    if (isalpha(caracter)) {  // Verifica si el carácter es una letra
        // Convertir el carácter a minúscula para simplificar la comprobación de vocales
        char c = tolower(caracter);
        // Comprobar si es una vocal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("%c es una vocal\n", caracter);
        } else {
            printf("%c es una consonante\n", caracter);
        }
    } else if (isdigit(caracter)) {  // Verifica si el carácter es un dígito
        printf("%c es un dígito\n", caracter);
    } else {  // Si no es ni letra ni dígito, se considera carácter especial
        printf("%c es un caracter especial\n", caracter);
    }

    return 0;
}
