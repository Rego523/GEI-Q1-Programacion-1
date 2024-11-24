#include <stdio.h>

#define DAYS 7 // Número de días de la semana

// Función para solicitar las horas de estudio diarias y almacenarlas en un array
void inputStudyHours(float hours[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter study hours for day %d: ", i + 1);
        scanf("%f", &hours[i]);
    }
}

// Función para calcular la media de horas de estudio
float calculateAverage(float hours[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += hours[i];
    }
    return sum / size;
}

// Función para encontrar el índice del día con más y menos horas de estudio
void findStudyExtremes(float hours[], int size, int *mostStudious, int *laziest) {
    *mostStudious = 0;
    *laziest = 0;
    
    for (int i = 1; i < size; i++) {
        if (hours[i] > hours[*mostStudious]) {
            *mostStudious = i;
        }
        if (hours[i] < hours[*laziest]) {
            *laziest = i;
        }
    }
}

int main() {
    // Declarar el array para almacenar las horas de estudio
    float studyHours[DAYS];
    int mostStudiousDay, laziestDay;
    
    // Solicitar al usuario las horas de estudio
    inputStudyHours(studyHours, DAYS);
    
    // Calcular la media de horas de estudio
    float average = calculateAverage(studyHours, DAYS);
    
    // Encontrar el día más aplicado y más vago
    findStudyExtremes(studyHours, DAYS, &mostStudiousDay, &laziestDay);
    
    // Mostrar los resultados
    printf("\nAverage daily study hours: %.2f\n", average);
    printf("Most studious day: Day %d with %.2f hours\n", mostStudiousDay + 1, studyHours[mostStudiousDay]);
    printf("Laziest day: Day %d with %.2f hours\n", laziestDay + 1, studyHours[laziestDay]);
    
    return 0;
}
