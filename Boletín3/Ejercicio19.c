#include <stdio.h>

// Función para convertir una letra minúscula a mayúscula.
char convertToUppercase(char c) {
    // Verificar si el carácter está en el rango de minúsculas.
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    // Si no es una letra minúscula, se devuelve el carácter sin cambios.
    return c;
}

int main() {
    char letterMin = 'b';
    char letterMay = convertToUppercase(letterMin);
    
    printf("La letra minúscula %c en mayúscula es %c\n", letterMin, letterMay);
    return 0;
}
