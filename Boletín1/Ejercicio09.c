#include <stdio.h>

int main() {
    // Declarar variables para el nombre, edad, número de hijos, sueldo anual y sueldo mensual.
    char name[50];
    int age, number_children;
    float annual_salary, monthly_salary;

    // Solicitar el nombre del usuario.
    printf("Please enter your name: ");
    scanf("%s", name);

    // Solicitar la edad del usuario.
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Solicitar el número de hijos del usuario.
    printf("Enter your number of children: ");
    scanf("%d", &number_children);

    // Solicitar el sueldo anual del usuario.
    printf("Enter your annual salary (in euros): ");
    scanf("%f", &annual_salary);

    // Calcular el sueldo mensual (Sueldo mensual = sueldo anual / 12).
    monthly_salary = annual_salary / 12;

    // Mostrar los datos y el sueldo mensual.
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Number of children: %d\n", number_children);
    printf("Monthly salary: %.2f€\n", monthly_salary);

    return 0;
}
