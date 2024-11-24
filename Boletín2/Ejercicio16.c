#include <stdio.h>

int main() {
    
    char nombre[100];
    int edad;

    // Solicitar el nombre del usuario
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);  // Usar fgets para permitir espacios en el nombre

    // Solicitar la edad del usuario
    printf("Edad: ");
    scanf("%d", &edad);

    // Clasificar según la edad y mostrar el mensaje correspondiente
    if (edad < 32) {
        printf("%s es JOVEN (<32)\n", nombre);
    } else if (edad >= 32 && edad < 75) {
        printf("%s es ADULTA (32-74)\n", nombre);
    } else {
        printf("%s es ANCIANA (>=75)\n", nombre);
    }

    return 0;
}
