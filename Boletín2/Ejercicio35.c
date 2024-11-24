#include <stdio.h>
#include <ctype.h>

int main() {
    
    char c;
    int errores = 0;
    
    // Instrucciones al usuario
    printf("Introduzca caracteres (presione Enter para finalizar):\n");
    
    // Leer caracteres hasta que se presione Enter
    while ((c = getchar()) != '\n') {
        // Verificar si el carácter es una letra o un número
        if (!isalpha(c) && !isdigit(c)) {
            errores++;  // Incrementar contador de errores si el carácter no es ni letra ni número
        }
    }
    
    // Mostrar el número total de errores
    printf("Número total de errores: %d\n", errores);
    
    return 0;
}
