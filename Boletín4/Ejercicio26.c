#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Función para reemplazar una palabra por su sinónimo
void replaceWord(char *sentence, const char *word, const char *synonym) {
    char buffer[MAX_LENGTH];
    char *position;
    int wordLength = strlen(word);
    int synonymLength = strlen(synonym);
    int bufferIndex = 0;

    // Recorremos la frase
    while ((position = strstr(sentence, word)) != NULL) {
        // Copiamos todo lo que está antes de la palabra a reemplazar
        while (sentence < position) {
            buffer[bufferIndex++] = *sentence++;
        }

        // Reemplazamos la palabra por el sinónimo
        for (int i = 0; i < synonymLength; i++) {
            buffer[bufferIndex++] = synonym[i];
        }

        // Saltamos la palabra original
        sentence = position + wordLength;
    }

    // Copiamos el resto de la frase
    while (*sentence != '\0') {
        buffer[bufferIndex++] = *sentence++;
    }

    buffer[bufferIndex] = '\0';
    strcpy(sentence, buffer);
}

int main() {
    char sentence[MAX_LENGTH];
    char word[MAX_LENGTH], synonym[MAX_LENGTH];

    // Solicitar al usuario la frase original
    printf("Enter a sentence (max 100 characters): ");
    fgets(sentence, MAX_LENGTH, stdin);

    // Eliminar el salto de línea de fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    // Mostrar la frase original
    printf("Original sentence: %s\n", sentence);

    // Solicitar la palabra a reemplazar y su sinónimo
    printf("Enter the word you want to replace: ");
    fgets(word, MAX_LENGTH, stdin);
    word[strcspn(word, "\n")] = '\0';  // Eliminar salto de línea

    printf("Enter the synonym: ");
    fgets(synonym, MAX_LENGTH, stdin);
    synonym[strcspn(synonym, "\n")] = '\0';  // Eliminar salto de línea

    // Reemplazar la palabra por el sinónimo
    replaceWord(sentence, word, synonym);

    // Mostrar la frase después de la sustitución
    printf("Updated sentence: %s\n", sentence);

    return 0;
}
