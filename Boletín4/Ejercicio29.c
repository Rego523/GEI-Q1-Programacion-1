#include <stdio.h>
#include <string.h>

// Función que invierte la cadena
void reverseString(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    
    // Intercambiamos los caracteres de la cadena desde los extremos
    while (start < end) {
        // Intercambiar los caracteres
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Movemos los índices hacia el centro
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Solicitar la cadena al usuario
    printf("Introduce una cadena de texto:\n");
    fgets(str, sizeof(str), stdin);

    // Eliminar el salto de línea al final de la cadena
    str[strcspn(str, "\n")] = '\0';

    // Llamar a la función para invertir la cadena
    reverseString(str);

    // Mostrar la cadena invertida
    printf("Cadena invertida: %s\n", str);

    return 0;
}
