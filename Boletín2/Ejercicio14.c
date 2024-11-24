#include <stdio.h>

int main() {
    
    int num1, num2;

    // Solicitar al usuario el primer número de 3 cifras
    printf("Introduzca un número entero positivo de 3 cifras: ");
    scanf("%d", &num1);

    // Verificar que el primer número tiene exactamente 3 cifras y es positivo
    if (num1 < 100 || num1 > 999) {
        printf("El primer número no tiene 3 cifras!!!\n");
        return 1;
    }

    // Solicitar al usuario el segundo número de 1 cifra
    printf("Introduzca un número entero positivo de 1 cifra: ");
    scanf("%d", &num2);

    // Verificar que el segundo número tiene exactamente 1 cifra y es positivo
    if (num2 < 1 || num2 > 9) {
        printf("El segundo número no tiene 1 cifra!!!\n");
        return 1;
    }

    // Mostrar el formato de la multiplicación
    printf("%d\n", num1);
    printf(" x %d\n", num2);
    printf("====\n");
    printf("%d\n", num1 * num2);

    return 0;
}
