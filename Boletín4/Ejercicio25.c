#include <stdio.h>
#include <ctype.h>  // Para usar la función tolower()

// Función para contar las vocales
void contarVocales(char *frase) {
    int vocales[5] = {0};  // Array para contar la frecuencia de cada vocal
    int totalCaracteres = 0;  // Contador total de caracteres (no solo vocales)

    // Recorremos la frase
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);  // Convertimos el carácter a minúscula para simplificar la comparación
        // Comprobamos si el carácter es una vocal
        if (c == 'a') {
            vocales[0]++;
            totalCaracteres++;
        } else if (c == 'e') {
            vocales[1]++;
            totalCaracteres++;
        } else if (c == 'i') {
            vocales[2]++;
            totalCaracteres++;
        } else if (c == 'o') {
            vocales[3]++;
            totalCaracteres++;
        } else if (c == 'u') {
            vocales[4]++;
            totalCaracteres++;
        }
        // Si el carácter es una letra, se cuenta como parte del total
        else if (isalpha(c)) {
            totalCaracteres++;
        }
    }

    // Mostramos los resultados
    if (totalCaracteres == 0) {
        printf("No vowels found in the sentence.\n");
    } else {
        printf("Total characters: %d\n", totalCaracteres);
        printf("Frequency of vowels:\n");
        printf("A: %.2f%%\n", (vocales[0] / (float)totalCaracteres) * 100);
        printf("E: %.2f%%\n", (vocales[1] / (float)totalCaracteres) * 100);
        printf("I: %.2f%%\n", (vocales[2] / (float)totalCaracteres) * 100);
        printf("O: %.2f%%\n", (vocales[3] / (float)totalCaracteres) * 100);
        printf("U: %.2f%%\n", (vocales[4] / (float)totalCaracteres) * 100);
    }
}

int main() {
    char frase[1000];

    // Pedimos al usuario que ingrese una frase
    printf("Please enter a sentence: ");
    fgets(frase, sizeof(frase), stdin);  // Usamos fgets para leer la línea completa

    // Llamamos a la función para contar las vocales
    contarVocales(frase);

    return 0;
}
