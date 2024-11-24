#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_WORDS 20
#define MAX_LENGTH 50

// Estructura para almacenar la información de cada palabra
typedef struct {
    char word[MAX_LENGTH];
    int isUppercase;       // 1 si está en mayúsculas, 0 si no
    int vowelCount;        // Número de vocales
    int frequency;         // Número de veces que aparece
    int charFrequency[26]; // Frecuencia de cada carácter (de la 'a' a la 'z')
} WordInfo;

// Función para contar las vocales en una palabra
int countVowels(char* word) {
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Función para contar la frecuencia de caracteres en una palabra
void countCharFrequency(char* word, int* freq) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (isalpha(word[i])) {
            int index = tolower(word[i]) - 'a';
            freq[index]++;
        }
    }
}

int main() {
    WordInfo words[MAX_WORDS];
    char input[MAX_LENGTH];
    int wordCount = 0;

    // Leer palabras hasta que se introduzcan 20 o se presione Enter
    printf("Introduce al menos 20 palabras (presiona <ENTER> para finalizar):\n");

    while (wordCount < MAX_WORDS && scanf("%s", input) == 1) {
        // Copiar la palabra en la estructura
        strcpy(words[wordCount].word, input);

        // Determinar si la palabra está en mayúsculas
        int isUppercase = 1;
        for (int i = 0; input[i] != '\0'; i++) {
            if (!isupper(input[i])) {
                isUppercase = 0;
                break;
            }
        }
        words[wordCount].isUppercase = isUppercase;

        // Contar el número de vocales en la palabra
        words[wordCount].vowelCount = countVowels(input);

        // Contar la frecuencia de los caracteres
        for (int i = 0; i < 26; i++) {
            words[wordCount].charFrequency[i] = 0; // Inicializar la frecuencia de caracteres
        }
        countCharFrequency(input, words[wordCount].charFrequency);

        words[wordCount].frequency = 1; // Iniciar la frecuencia de la palabra como 1

        // Verificar si la palabra ya ha sido introducida anteriormente
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, input) == 0) {
                words[i].frequency++; // Aumentar la frecuencia de la palabra
                words[wordCount].frequency = 0; // No contarla de nuevo
                break;
            }
        }

        wordCount++;
    }

    // Mostrar los resultados
    printf("\nResultados:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("Palabra: %s\n", words[i].word);
        printf("  a) ¿Está en mayúsculas? %s\n", words[i].isUppercase ? "Sí" : "No");
        printf("  b) Número de vocales: %d\n", words[i].vowelCount);
        printf("  c) Frecuencia de aparición: %d\n", words[i].frequency);
        printf("  d) Frecuencia de los caracteres:\n");

        // Mostrar la frecuencia de cada letra
        for (int j = 0; j < 26; j++) {
            if (words[i].charFrequency[j] > 0) {
                printf("    %c: %d\n", 'a' + j, words[i].charFrequency[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
