#include <stdio.h>

int main() {
    
    int sum = 0;
    int i = 1;

    // Usando bucle do-while
    do {
        sum += i;
        i++;
    } while (i <= 100);

    printf("Suma usando bucle do-while: %d\n", sum);
    
    return 0;
}
