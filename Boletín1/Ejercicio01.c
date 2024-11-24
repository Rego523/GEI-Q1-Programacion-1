#include <stdio.h>

int main() {
    char name[50];  // Asumimos que el nombre tendrá menos de 50 caracteres.
    int age;

    // Solicitar el nombre del usuario.
    printf("Please enter your name: ");
    scanf("%s", name);

    // Solicitar la edad del usuario.
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Mostrar el saludo personalizado.
    printf("Good morning %s, you are %d years old!\n", name, age);

    return 0;
}
