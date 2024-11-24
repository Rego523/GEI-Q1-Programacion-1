#include <stdio.h>

#define DAYS 7            // Número de días en una semana
#define CONCEPTS 3        // Número de conceptos: transporte, alimentación, ocio

// Función para solicitar el presupuesto semanal
void inputWeeklyBudget(float *budget) {
    printf("Enter your weekly budget (in euros): ");
    scanf("%f", budget);
}

// Función para solicitar los gastos diarios en distintos conceptos
void inputDailyExpenses(float expenses[DAYS][CONCEPTS]) {
    const char *conceptNames[CONCEPTS] = {"Transportation", "Food", "Leisure"};

    for (int day = 0; day < DAYS; day++) {
        printf("\nEntering expenses for day %d:\n", day + 1);
        for (int concept = 0; concept < CONCEPTS; concept++) {
            printf("  %s: ", conceptNames[concept]);
            scanf("%f", &expenses[day][concept]);
        }
    }
}

// Función para calcular el gasto total por conceptos y diario
void calculateTotalExpenses(float expenses[DAYS][CONCEPTS], float totalConcepts[CONCEPTS], float dailyTotals[DAYS]) {
    for (int day = 0; day < DAYS; day++) {
        dailyTotals[day] = 0;
        for (int concept = 0; concept < CONCEPTS; concept++) {
            totalConcepts[concept] += expenses[day][concept];
            dailyTotals[day] += expenses[day][concept];
        }
    }
}

// Función para calcular el gasto medio diario por concepto
void calculateAverageExpenses(float totalConcepts[CONCEPTS], float averages[CONCEPTS]) {
    for (int concept = 0; concept < CONCEPTS; concept++) {
        averages[concept] = totalConcepts[concept] / DAYS;
    }
}

// Función para calcular el porcentaje del presupuesto gastado por día
void calculateDailyBudgetPercentage(float dailyTotals[DAYS], float budget, float percentages[DAYS]) {
    for (int day = 0; day < DAYS; day++) {
        percentages[day] = (dailyTotals[day] / budget) * 100;
    }
}

int main() {
    float weeklyBudget;
    float expenses[DAYS][CONCEPTS] = {0};
    float totalConcepts[CONCEPTS] = {0};
    float dailyTotals[DAYS] = {0};
    float averageConcepts[CONCEPTS] = {0};
    float dailyPercentages[DAYS] = {0};
    const char *conceptNames[CONCEPTS] = {"Transportation", "Food", "Leisure"};

    // Solicitar el presupuesto semanal
    inputWeeklyBudget(&weeklyBudget);

    // Solicitar los gastos diarios
    inputDailyExpenses(expenses);

    // Calcular los gastos totales por conceptos y diarios
    calculateTotalExpenses(expenses, totalConcepts, dailyTotals);

    // Calcular el promedio diario por concepto
    calculateAverageExpenses(totalConcepts, averageConcepts);

    // Calcular el porcentaje del presupuesto gastado por día
    calculateDailyBudgetPercentage(dailyTotals, weeklyBudget, dailyPercentages);

    // Mostrar los resultados
    printf("\nSummary of weekly expenses:\n");
    printf("Total weekly expenses by concept:\n");
    for (int concept = 0; concept < CONCEPTS; concept++) {
        printf("  %s: %.2f euros\n", conceptNames[concept], totalConcepts[concept]);
    }

    printf("\nAverage daily expenses by concept:\n");
    for (int concept = 0; concept < CONCEPTS; concept++) {
        printf("  %s: %.2f euros/day\n", conceptNames[concept], averageConcepts[concept]);
    }

    printf("\nDaily totals and percentage of weekly budget spent:\n");
    for (int day = 0; day < DAYS; day++) {
        printf("  Day %d: %.2f euros (%.2f%% of weekly budget)\n", day + 1, dailyTotals[day], dailyPercentages[day]);
    }

    return 0;
}
