#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para contar las vocales diferentes en una palabra
int contarVocalesDiferentes(const char* palabra) {
    int vocalesEncontradas = 0;
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'};  // Lista de vocales
    int vocalCount[5] = {0};  // Contador de vocales

    // Recorremos la palabra y marcamos las vocales encontradas
    for (int i = 0; palabra[i] != '\0'; i++) {
        char c = tolower(palabra[i]);
        for (int j = 0; j < 5; j++) {
            if (c == vocales[j] && vocalCount[j] == 0) {
                vocalCount[j] = 1;  // Marcamos esta vocal como encontrada
                vocalesEncontradas++;
                break;
            }
        }
    }
    return vocalesEncontradas;
}

int main() {
    char texto[1000];  // Variable para almacenar el texto
    int palabrasConVocalesDiferentes = 0;

    printf("Introduzca un texto (max 1000 caracteres): ");
    fgets(texto, sizeof(texto), stdin);  // Leemos el texto del usuario

    // Reemplazamos el salto de línea por el carácter nulo '\0'
    texto[strcspn(texto, "\n")] = '\0';

    // Separamos las palabras en el texto
    char* palabra = strtok(texto, " ,.-");  // Usamos espacios, comas, puntos como delimitadores

    // Recorremos todas las palabras
    while (palabra != NULL) {
        // Contamos las vocales diferentes en la palabra
        if (contarVocalesDiferentes(palabra) >= 3) {
            palabrasConVocalesDiferentes++;
        }
        palabra = strtok(NULL, " ,.-");  // Continuamos con la siguiente palabra
    }

    printf("Número de palabras con al menos tres vocales diferentes: %d\n", palabrasConVocalesDiferentes);

    return 0;
}
