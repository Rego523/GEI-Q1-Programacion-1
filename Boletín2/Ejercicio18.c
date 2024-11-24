#include <stdio.h>

int main() {
    
    int paridad, resto;
    int numero = -1;  // Inicializar con un valor que no sea válido

    // Solicitar la paridad del número
    printf("Piense un número del 1 al 10.....\n");
    printf("¿El número que ha pensado es impar (1) o par (2)? ");
    scanf("%d", &paridad);

    // Solicitar el resto de dividir el número entre 5
    printf("¿Cuál es el resto de dividir el número que ha pensado entre 5? ");
    scanf("%d", &resto);

    // Determinar el número basándonos en la paridad y el resto
    for (int i = 1; i <= 10; i++) {
        if ((i % 2 == paridad) && (i % 5 == resto)) {
            numero = i;
            break;
        }
    }

    // Mostrar el número adivinado
    if (numero != -1) {
        printf("El número que ha pensado es el %d\n", numero);
    } else {
        printf("No se encontró un número que coincida con las condiciones dadas.\n");
    }

    return 0;
}
