#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_MATRICULA 10

// Función que verifica si la matrícula cumple con las condiciones
bool checkMatricula(char matricula[], int edad, char nombre[], char apellido[]) {
    int sumaNumeros = 0;
    char inicialNombre, inicialApellido;
    
    // Obtener las iniciales del nombre y apellido
    inicialNombre = toupper(nombre[0]);
    inicialApellido = toupper(apellido[0]);

    // Sumar los números de la matrícula
    for (int i = 0; matricula[i] != '\0'; i++) {
        if (isdigit(matricula[i])) {
            sumaNumeros += matricula[i] - '0';  // Convertir el carácter numérico a su valor entero
        }
    }

    // Verificar si la suma de los números de la matrícula es igual a la edad
    if (sumaNumeros != edad) {
        return false;
    }

    // Verificar si las letras de la matrícula coinciden con las iniciales del nombre y apellido
    if (toupper(matricula[0]) != inicialNombre || toupper(matricula[1]) != inicialApellido) {
        return false;
    }

    return true;
}

int main() {
    char matricula[MAX_MATRICULA];
    int edad;
    char nombre[50], apellido[50];

    // Leer la matrícula, edad, nombre y apellido del conductor
    printf("Enter the vehicle license plate (max 10 characters): ");
    fgets(matricula, sizeof(matricula), stdin);

    // Eliminar el salto de línea al final de la matrícula, si existe
    if (matricula[strlen(matricula) - 1] == '\n') {
        matricula[strlen(matricula) - 1] = '\0';
    }

    printf("Enter the driver's age: ");
    scanf("%d", &edad);
    getchar();  // Limpiar el buffer después de leer la edad

    printf("Enter the driver's first name: ");
    fgets(nombre, sizeof(nombre), stdin);

    // Eliminar salto de línea al final del nombre
    if (nombre[strlen(nombre) - 1] == '\n') {
        nombre[strlen(nombre) - 1] = '\0';
    }

    printf("Enter the driver's last name: ");
    fgets(apellido, sizeof(apellido), stdin);

    // Eliminar salto de línea al final del apellido
    if (apellido[strlen(apellido) - 1] == '\n') {
        apellido[strlen(apellido) - 1] = '\0';
    }

    // Verificar las condiciones de la matrícula
    if (checkMatricula(matricula, edad, nombre, apellido)) {
        printf("The license plate meets the conditions.\n");
    } else {
        printf("The license plate does not meet the conditions.\n");
    }

    return 0;
}
