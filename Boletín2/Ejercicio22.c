#include <stdio.h>

#define NUM_MAX 100

int main() {
    
    int suma_pares = 0;
    int suma_impares = 0;

    // Sumar los primeros 100 números enteros pares
    for (int i = 1; i <= NUM_MAX; ++i) {
        if (i % 2 == 0) {
            suma_pares += i;
        } else {
            suma_impares += i;
        }
    }

    // Mostrar los resultados
    printf("Suma de los primeros 100 números enteros pares: %d\n", suma_pares);
    printf("Suma de los primeros 100 números enteros impares: %d\n", suma_impares);

    return 0;
}
