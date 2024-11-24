#include <stdio.h>

int main() {
    
    int num1, num2, num3;
    int mayor;

    // Solicitar tres números enteros al usuario
    printf("Primer Número: ");
    scanf("%d", &num1);

    printf("Segundo Número: ");
    scanf("%d", &num2);

    printf("Tercer Número: ");
    scanf("%d", &num3);

    // Encontrar el mayor de los tres números
    mayor = num1;  // Suponemos que num1 es el mayor inicialmente

    if (num2 > mayor) {
        mayor = num2;  // Actualizar mayor si num2 es mayor
    }

    if (num3 > mayor) {
        mayor = num3;  // Actualizar mayor si num3 es mayor
    }

    // Mostrar el resultado
    printf("%d es el número mayor de los tres introducidos.\n", mayor);

    return 0;
}
