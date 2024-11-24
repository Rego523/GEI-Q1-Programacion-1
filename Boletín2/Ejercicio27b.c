#include <stdio.h>

int main() {
    
    int sum = 0;
    int i = 1;

    // Usando bucle while
    while (i <= 100) {
        sum += i;
        i++;
    }

    printf("Suma usando bucle while: %d\n", sum);
    
    return 0;
}
