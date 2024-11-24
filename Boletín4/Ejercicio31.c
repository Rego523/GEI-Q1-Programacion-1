#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 9

// Función booleana VAL que verifica si una cadena puede convertirse a un número real
bool VAL(char cadena[]) {
    int i = 0;
    bool hasDecimalPoint = false;

    // Verificar que la cadena tiene exactamente 9 caracteres
    if (cadena[9] != '\0') {
        return false;
    }

    // Verificar que cada carácter es un dígito o un punto decimal
    while (cadena[i] != '\0') {
        if (cadena[i] == '.') {
            // Si ya encontramos un punto decimal, no podemos tener otro
            if (hasDecimalPoint) {
                return false;
            }
            hasDecimalPoint = true;
        } else if (!isdigit(cadena[i])) {
            // Si el carácter no es un dígito ni un punto decimal, la cadena no es válida
            return false;
        }
        i++;
    }

    // Si la cadena tiene un punto decimal al principio o al final, es inválida
    if (cadena[0] == '.' || cadena[i - 1] == '.') {
        return false;
    }

    // Si pasamos todas las comprobaciones, la cadena es un número real válido
    return true;
}

int main() {
    char cadena[LENGTH + 1];  // Almacenamos la cadena de 9 caracteres más el terminador '\0'

    // Pedir al usuario que ingrese una cadena de 9 caracteres
    printf("Introduce una cadena de 9 caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Asegurarse de que la cadena tenga exactamente 9 caracteres
    if (cadena[9] != '\0' && cadena[9] != '\n') {
        printf("La cadena debe tener exactamente 9 caracteres.\n");
        return 1;
    }

    // Llamar a la función VAL para verificar si la cadena puede ser convertida a un número real
    if (VAL(cadena)) {
        printf("La cadena puede convertirse a un número real.\n");
    } else {
        printf("La cadena NO puede convertirse a un número real.\n");
    }

    return 0;
}
