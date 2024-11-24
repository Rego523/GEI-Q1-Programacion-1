#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int mayor, menor, cociente, resto;

    // Solicitar los tres números enteros positivos
    printf("Introduzca primer número: ");
    scanf("%d", &num1);
    printf("Introduzca segundo número: ");
    scanf("%d", &num2);
    printf("Introduzca tercer número: ");
    scanf("%d", &num3);

    // Determinar el mayor y el menor número
    mayor = num1;
    menor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num2 < menor) {
        menor = num2;
    }
    
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num3 < menor) {
        menor = num3;
    }

    // Comprobar si el menor es cero para evitar la división por cero
    if (menor == 0) {
        printf("Error: No se puede dividir por cero.\n");
        return 1;
    }

    // Calcular el cociente y el resto
    cociente = mayor / menor;
    resto = mayor % menor;

    // Mostrar el resultado en el formato solicitado
    printf("%d dividido entre %d\n", mayor, menor);
    printf("------------\n");
    printf("R: %d\n", resto);
    printf("C: %d\n", cociente);

    return 0;
}
