#include <stdio.h>

int main() {
    // Declarar variables
    char firstName[50], lastName[50];
    int age;
    int credits_m1, credits_m2, credits_m3;
    float price_per_credit_m1 = 15.45;
    float price_per_credit_m2, price_per_credit_m3;
    float cost_m1, cost_m2, cost_m3, total_cost;

    // Calcular precios de los créditos en segunda y tercera matrícula
    price_per_credit_m2 = price_per_credit_m1 * 1.25; // Incremento del 25%
    price_per_credit_m3 = price_per_credit_m1 * 1.50; // Incremento del 50%

    // Solicitar datos al usuario
    printf("First name: ");
    scanf("%49[^\n]", firstName);
    getchar(); // Consumir el salto de línea después del nombre
    printf("Last name: ");
    scanf("%49[^\n]", lastName);
    getchar(); // Consumir el salto de línea después del apellido
    printf("Age: ");
    scanf("%d", &age);
    printf("Number of credits in first enrollment: ");
    scanf("%d", &credits_m1);
    printf("Number of credits in second enrollment: ");
    scanf("%d", &credits_m2);
    printf("Number of credits in third enrollment: ");
    scanf("%d", &credits_m3);

    // Calcular el coste de cada matrícula
    cost_m1 = credits_m1 * price_per_credit_m1;
    cost_m2 = credits_m2 * price_per_credit_m2;
    cost_m3 = credits_m3 * price_per_credit_m3;
    total_cost = cost_m1 + cost_m2 + cost_m3;

    // Mostrar tabla
    printf("\n************************************************************************\n");
    printf("******* %s %s: %d years old *******\n", firstName, lastName, age);
    printf("Credits M1 Cost M1 Credits M2 Cost M2 Credits M3 Cost M3\n");
    printf("%d %.2f€ %d %.2f€ %d %.2f€\n", credits_m1, cost_m1, credits_m2, cost_m2, credits_m3, cost_m3);
    printf("******* *******\n");
    printf(" Total Enrollment Cost\n");
    printf(" %.2f€\n", total_cost);
    printf("************************************************************************\n");

    return 0;
}
