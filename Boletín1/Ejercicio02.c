#include <stdio.h>

#define RETIREMENT_AGE 67  // Constante para la edad de jubilación.

int main() {
    // Definir variables para almacenar el apellido y la edad.
    char surnames[50];
    int age, years_to_retire;

    // Solicitar los apellidos del usuario.
    printf("Please enter your first last name: ");
    scanf("%s", surnames);

    // Solicitar la edad del usuario.
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Calcular los años que faltan para jubilarse.
    years_to_retire = RETIREMENT_AGE - age;

    // Mostrar el mensaje con los datos ingresados.
    printf("Mr/Mrs. %s, you are still %d years away from retiring.\n", surnames, years_to_retire);

    return 0;
}
