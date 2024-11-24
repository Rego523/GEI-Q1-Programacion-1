#include <stdio.h>

int main() {
    // Declarar variables para el nombre, edad, gastos en cañas, gastos en transporte y el total de gastos.
    char name[50];
    int age;
    float beer_expense, transport_expense, total_expenses;

    // Solicitar el nombre del usuario.
    printf("Please enter your name: ");
    scanf("%s", name);

    // Solicitar la edad del usuario.
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Solicitar el total de gastos en cañas.
    printf("Enter the total of your weekly expenses in rods (in euros): ");
    scanf("%f", &beer_expense);

    // Solicitar el total de gastos en transporte.
    printf("Enter the total of your weekly transportation expenses (in euros): ");
    scanf("%f", &transport_expense);

    // Calcular el total de los gastos.
    total_expenses = beer_expense + transport_expense;

    // Mostrar los datos y el total de los gastos.
    printf("\nName: %s\n", name);
    printf("Age: %df\n", age);
    printf("Weekly spending on rods: %.2f€\n", beer_expense);
    printf("Weekly transportation expense: %.2f€\n", transport_expense);
    printf("Total weekly expenses: %.2f€\n", total_expenses);

    return 0;
}
