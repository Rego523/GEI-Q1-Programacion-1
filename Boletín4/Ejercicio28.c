#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Función para sustituir las secuencias de dos o más espacios por un solo espacio
void removeExtraSpaces(char *sentence) {
    int i = 0, j = 0;
    int spaceFound = 0;  // Indicador para saber si hemos encontrado un espacio consecutivo

    // Recorremos la frase
    while (sentence[i] != '\0') {
        // Si el carácter es un espacio
        if (sentence[i] == ' ') {
            // Si ya hemos encontrado un espacio, lo omitimos
            if (spaceFound) {
                i++;
                continue;
            }
            // Si es el primer espacio, lo mantenemos
            spaceFound = 1;
        } else {
            // Si no es un espacio, lo agregamos a la nueva frase
            spaceFound = 0;
        }
        
        // Agregamos el carácter (ya sea espacio o no) al índice j
        sentence[j++] = sentence[i++];
    }
    
    // Terminamos la nueva cadena con el carácter nulo
    sentence[j] = '\0';
}

int main() {
    char sentence[MAX_LENGTH];

    // Solicitar la frase al usuario
    printf("Introduzca una frase (máximo 100 caracteres):\n");
    fgets(sentence, MAX_LENGTH, stdin);

    // Eliminar el salto de línea que se agrega con fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    // Llamar a la función para eliminar espacios extra
    removeExtraSpaces(sentence);

    // Mostrar la frase modificada
    printf("Frase modificada: %s\n", sentence);

    return 0;
}
