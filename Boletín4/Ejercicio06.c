#include <stdio.h>

#define DAYS 7      // Número de días en una semana
#define HOURS 24    // Número de horas en un día

// Función para solicitar las temperaturas y almacenarlas en una matriz
void inputTemperatures(float temperatures[DAYS][HOURS]) {
    for (int day = 0; day < DAYS; day++) {
        printf("\nEntering temperatures for day %d:\n", day + 1);
        for (int hour = 0; hour < HOURS; hour++) {
            printf("  Hour %d: ", hour);
            scanf("%f", &temperatures[day][hour]);
        }
    }
}

// Función para calcular la temperatura media diaria
void calculateDailyAverages(float temperatures[DAYS][HOURS], float dailyAverages[DAYS]) {
    for (int day = 0; day < DAYS; day++) {
        float sum = 0.0;
        for (int hour = 0; hour < HOURS; hour++) {
            sum += temperatures[day][hour];
        }
        dailyAverages[day] = sum / HOURS;
    }
}

// Función para calcular la temperatura media de cada hora
void calculateHourlyAverages(float temperatures[DAYS][HOURS], float hourlyAverages[HOURS]) {
    for (int hour = 0; hour < HOURS; hour++) {
        float sum = 0.0;
        for (int day = 0; day < DAYS; day++) {
            sum += temperatures[day][hour];
        }
        hourlyAverages[hour] = sum / DAYS;
    }
}

// Función para calcular la temperatura media semanal
float calculateWeeklyAverage(float temperatures[DAYS][HOURS]) {
    float sum = 0.0;
    for (int day = 0; day < DAYS; day++) {
        for (int hour = 0; hour < HOURS; hour++) {
            sum += temperatures[day][hour];
        }
    }
    return sum / (DAYS * HOURS);
}

int main() {
    float temperatures[DAYS][HOURS];
    float dailyAverages[DAYS];
    float hourlyAverages[HOURS];
    float weeklyAverage;

    // Solicitar al usuario las temperaturas hora a hora por día
    inputTemperatures(temperatures);

    // Calcular las medias diarias, por hora y semanal
    calculateDailyAverages(temperatures, dailyAverages);
    calculateHourlyAverages(temperatures, hourlyAverages);
    weeklyAverage = calculateWeeklyAverage(temperatures);

    // Mostrar las temperaturas medias diarias
    printf("\nDaily average temperatures:\n");
    for (int day = 0; day < DAYS; day++) {
        printf("  Day %d: %.2f ºC\n", day + 1, dailyAverages[day]);
    }

    // Mostrar las temperaturas medias por hora
    printf("\nHourly average temperatures:\n");
    for (int hour = 0; hour < HOURS; hour++) {
        printf("  Hour %d: %.2f ºC\n", hour, hourlyAverages[hour]);
    }

    // Mostrar la temperatura media semanal
    printf("\nWeekly average temperature: %.2f ºC\n", weeklyAverage);

    return 0;
}
