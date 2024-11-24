#include <stdio.h>

int main() {
    
    int sum = 0;

    // Usando bucle for
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("Suma usando bucle for: %d\n", sum);
    
    return 0;
}
