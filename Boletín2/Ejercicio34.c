#include <stdio.h>

// Función para calcular el N-ésimo término de la sucesión de Fibonacci
unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;  // Para N <= 0, el término es 0
    if (n == 1) return 1;  // Para N = 1, el término es 1
    
    unsigned long long a = 0;  // Primer término (Fibonacci(0))
    unsigned long long b = 1;  // Segundo término (Fibonacci(1))
    unsigned long long c;
    
    for (int i = 2; i <= n; i++) {
        c = a + b;  // Calcular el siguiente término
        a = b;      // Actualizar el primer término
        b = c;      // Actualizar el segundo término
    }
    
    return b;  // Retorna el N-ésimo término
}

int main() {
    
    int numero;
    
    // Solicitar al usuario el valor de N
    printf("Introduzca un valor entero positivo para N: ");
    scanf("%d", &numero);
    
    // Comprobar que el número es positivo
    if (numero <= 0) {
        printf("El valor debe ser un entero positivo mayor que 0.\n");
    } else {
        // Calcular el término N-ésimo de la sucesión de Fibonacci
        unsigned long long resultado = fibonacci(numero);
        
        // Mostrar el resultado
        printf("El término %d de la sucesión de Fibonacci es %llu\n", numero, resultado);
    }
    
    return 0;
}
