#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Función para imprimir la palabra y su longitud
void printWordLength(char *word) {
    int length = strlen(word);
    printf("%s %d\n", word, length);
}

// Función para extraer y mostrar las palabras de la frase
void extractWords(char *sentence) {
    char word[MAX_LENGTH];
    int wordIndex = 0;

    // Recorremos la frase carácter por carácter
    for (int i = 0; sentence[i] != '\0'; i++) {
        // Comprobamos si el carácter es parte de una palabra
        if (isalnum(sentence[i])) {
            word[wordIndex++] = sentence[i];
        } else {
            // Si encontramos un espacio, coma o punto, terminamos la palabra
            if (wordIndex > 0) {
                word[wordIndex] = '\0';  // Terminamos la palabra
                printWordLength(word);    // Imprimimos la palabra y su longitud
                wordIndex = 0;           // Reiniciamos para la siguiente palabra
            }
        }
    }

    // Imprimimos la última palabra si es que no terminó con un delimitador
    if (wordIndex > 0) {
        word[wordIndex] = '\0';
        printWordLength(word);
    }
}

int main() {
    char sentence[MAX_LENGTH];

    // Solicitar la frase al usuario
    printf("Introduzca una frase de como máximo 100 caracteres:\n");
    fgets(sentence, MAX_LENGTH, stdin);

    // Eliminar el salto de línea de fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    // Llamar a la función para extraer e imprimir las palabras y su longitud
    extractWords(sentence);

    return 0;
}
