#include <stdio.h>

// Función para calcular la suma de los divisores propios de un número
int suma_divisores_propios(int num) {
    int suma = 0;
    // Buscar divisores propios desde 1 hasta num/2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) { // Si i es un divisor propio
            suma += i;
        }
    }
    return suma;
}

int main() {
    
    int num1, num2;
    
    // Solicitar al usuario los dos números enteros positivos
    printf("Introduzca el primer número entero positivo: ");
    scanf("%d", &num1);
    printf("Introduzca el segundo número entero positivo: ");
    scanf("%d", &num2);

    // Comprobar que los números introducidos sean positivos y que num1 <= num2
    if (num1 <= 0 || num2 <= 0 || num1 > num2) {
        printf("Los números introducidos no son válidos.\n");
        return 1;
    }

    // Iterar sobre cada número en el intervalo [num1, num2]
    for (int i = num1; i <= num2; i++) {
        int suma = suma_divisores_propios(i);

        // Clasificar y mostrar el resultado
        if (suma == i) {
            printf("%d es un número PERFECTO.\n", i);
        } else if (suma > i) {
            printf("%d es un número ABUNDANTE.\n", i);
        } else {
            printf("%d es un número DEFICIENTE.\n", i);
        }
    }

    return 0;
}
