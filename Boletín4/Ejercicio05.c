#include <stdio.h>

#define HOURS 24 // Número de horas en un día

// Función para solicitar las temperaturas y almacenarlas en un array
void inputTemperatures(float temperatures[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the temperature at hour %d (in ºC): ", i);
        scanf("%f", &temperatures[i]);
    }
}

// Función para calcular la temperatura máxima y mínima
void findTemperatureExtremes(float temperatures[], int size, float *maxTemp, float *minTemp) {
    *maxTemp = temperatures[0];
    *minTemp = temperatures[0];
    
    for (int i = 1; i < size; i++) {
        if (temperatures[i] > *maxTemp) {
            *maxTemp = temperatures[i];
        }
        if (temperatures[i] < *minTemp) {
            *minTemp = temperatures[i];
        }
    }
}

// Función para calcular la temperatura media
float calculateAverage(float temperatures[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += temperatures[i];
    }
    return sum / size;
}

// Función para mostrar las temperaturas registradas
void displayTemperatures(float temperatures[], int size) {
    printf("\nRecorded temperatures (hour by hour):\n");
    for (int i = 0; i < size; i++) {
        printf("Hour %d: %.2f ºC\n", i, temperatures[i]);
    }
}

int main() {
    // Declarar el array para almacenar las temperaturas
    float temperatures[HOURS];
    float maxTemp, minTemp, averageTemp;
    
    // Solicitar al usuario las temperaturas hora a hora
    inputTemperatures(temperatures, HOURS);
    
    // Mostrar las temperaturas registradas
    displayTemperatures(temperatures, HOURS);
    
    // Calcular la temperatura máxima, mínima y media
    findTemperatureExtremes(temperatures, HOURS, &maxTemp, &minTemp);
    averageTemp = calculateAverage(temperatures, HOURS);
    
    // Mostrar los resultados
    printf("\nMaximum temperature: %.2f ºC\n", maxTemp);
    printf("Minimum temperature: %.2f ºC\n", minTemp);
    printf("Average temperature: %.2f ºC\n", averageTemp);
    
    return 0;
}
