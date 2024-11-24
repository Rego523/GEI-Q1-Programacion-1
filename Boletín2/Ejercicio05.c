#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int temp;

    // Solicitar tres números enteros al usuario
    printf("Primer Número: ");
    scanf("%d", &num1);

    printf("Segundo Número: ");
    scanf("%d", &num2);

    printf("Tercer Número: ");
    scanf("%d", &num3);

    // Ordenar los números de menor a mayor usando el método de intercambio (Bubble Sort)
    if (num1 > num2) {
        // Intercambiar num1 y num2
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) {
        // Intercambiar num1 y num3
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        // Intercambiar num2 y num3
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Mostrar los números ordenados
    printf("%d <= %d <= %d\n", num1, num2, num3);

    return 0;
}
