#include <stdio.h>

// Función que calcula la suma de 1 + 2 + 3 + ... + N.
int addToN(int N) {
    int add = 0;
    for (int i = 1; i <= N; i++) {
        add += i;
    }
    return add;
}

int main() {
    int N;

    // Solicitar el valor de N.
    printf("Enter an integer N:");
    scanf("%d", &N);

    // Llamar a la función y mostrar el resultado.
    int result = addToN(N);
    printf("The sum of 1 to %d is: %d\n", N, result);

    return 0;
}
