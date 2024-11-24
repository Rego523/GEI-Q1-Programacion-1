#include <stdio.h>

// Procedimiento para pedir una nota válida entre 0 y 100.
void askNote(int *note) {
    do {
        printf("Enter a grade (0-100): ");
        scanf("%d", note);
        if (*note < 0 || *note > 100) {
            printf("Invalid note. It must be between 0 and 100.\n");
        }
    } while (*note < 0 || *note > 100);
}

// Función para calcular la letra de la puntuación basada en la media.
char calculateScore(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'E';
    }
}

// Procedimiento principal que solicita notas, calcula la media y determina la letra.
int main() {
    int note1, note2, note3, note4;
    float average;
    char punctuation;

    // Solicitar notas
    printf("Enter the first note:\n");
    askNote(&note1);
    printf("Enter the second note:\n");
    askNote(&note2);
    printf("Enter the third note:\n");
    askNote(&note3);
    printf("Enter the fourth note:\n");
    askNote(&note4);

    // Calcular la media.
    average = (note1 + note2 + note3 + note4) / 4.0;

    // Calcular la letra de la puntuación.
    punctuation = calculateScore(average);

    // Mostrar resultados.
    printf("The average of the grades is: %.2f\n", average);
    printf("The punctuation letter is: %c\n", punctuation);

    return 0;
}
