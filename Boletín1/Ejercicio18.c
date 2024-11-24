#include <stdio.h>

int main() {
    // Declarar variables.
    char first_name[50], last_name[50];
    float monthly_salary, daily_leisure_expense, daily_food_expense, daily_transport_expense;
    float weekly_leisure_expense, weekly_food_expense, weekly_transport_expense, weekly_total_expense;
    float leisure_percentage, food_percentage, transport_percentage, other_percentage;

    // Solicitar datos al usuario.
    printf("Enter your first name: ");
    scanf("%49[^\n]", first_name);
    getchar();  // Consumir el salto de línea después del nombre.
    printf("Enter your last name: ");
    scanf("%49[^\n]", last_name);
    getchar();  // Consumir el salto de línea después de los apellidos.
    printf("Enter your monthly salary (in euros): ");
    scanf("%f", &monthly_salary);
    printf("Enter your daily leisure expenses (in euros): ");
    scanf("%f", &daily_leisure_expense);
    printf("Enter your daily food expenses (in euros): ");
    scanf("%f", &daily_food_expense);
    printf("Enter your daily transport expenses (in euros): ");
    scanf("%f", &daily_transport_expense);

    // Calcular el gasto semanal.
    weekly_leisure_expense = daily_leisure_expense * 7;
    weekly_food_expense = daily_food_expense * 7;
    weekly_transport_expense = daily_transport_expense * 7;
    weekly_total_expense = weekly_leisure_expense + weekly_food_expense + weekly_transport_expense;

    // Calcular el porcentaje de gasto en ocio, comida y transporte.
    leisure_percentage = (weekly_leisure_expense / monthly_salary) * 100;
    food_percentage = (weekly_food_expense / monthly_salary) * 100;
    transport_percentage = (weekly_transport_expense / monthly_salary) * 100;
    other_percentage = 100 - (leisure_percentage + food_percentage + transport_percentage);

    // Mostrar la tabla con los datos.
    printf("\n************************************************************************\n");
    printf("******* %s %s: %.2f€ *******\n", first_name, last_name, monthly_salary);
    printf("%%Leisure %%Food %%Transport %%Other\n");
    printf("%.2f%% %.2f%% %.2f%% %.2f%%\n", leisure_percentage, food_percentage, transport_percentage, other_percentage);
    printf("******* *******\n");
    printf("Weekly Expenses\n");
    printf("%.2f€\n", weekly_total_expense);
    printf("************************************************************************\n");

    return 0;
}
