#include <stdio.h>

int main() {
    
    int n;
    int sum = 0;
    int a = 0, b = 1, c;
    
    // Solicitar al usuario el número entero positivo
    printf("Introduzca un número entero mayor que 0: ");
    scanf("%d", &n);

    // Validar la entrada
    if (n <= 0) {
        printf("El número debe ser mayor que 0.\n");
        return 1; // Salir del programa con un código de error
    }

    // Calcular la suma de los primeros n términos de la sucesión de Fibonacci
    if (n >= 1) {
        sum += a; // Sumar F(0)
    }
    if (n >= 2) {
        sum += b; // Sumar F(1)
    }

    for (int i = 2; i < n; i++) {
        c = a + b;
        sum += c;
        a = b;
        b = c;
    }

    // Mostrar el resultado
    printf("La suma de los primeros %d términos de la sucesión de Fibonacci es %d.\n", n, sum);

    return 0;
}
