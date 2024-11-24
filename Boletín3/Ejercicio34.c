#include <stdio.h>
#include <math.h>

// Función para calcular el número de cifras de un entero.
int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Función para sumar las cifras de un entero.
int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Función para obtener la cifra i-ésima menos significativa.
int getIthDigit(int n, int i) {
    int digit;
    int j;
    for (j = 0; j < i; j++) {
        n /= 10;
    }
    digit = n % 10;
    return digit;
}

// Función para calcular la imagen especular de un entero.
int mirrorImage(int n) {
    int result = 0;
    while (n != 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}

// Función para comprobar si un número es primo.
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

// Función para calcular el máximo común divisor (MCD) usando el algoritmo de Euclides.
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Función para mostrar la tabla de sumar, restar, multiplicar y dividir de un número.
void showTables(int n) {
    printf("Addition table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", n, i, n + i);
    }

    printf("Subtraction table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d - %d = %d\n", n, i, n - i);
    }

    printf("Multiplication table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("Division table for %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        if (i != 0) {
            printf("%d / %d = %.2f\n", n, i, (float)n / i);
        }
    }
}

// Función para mostrar el menú y gestionar las operaciones.
void displayMenu() {
    int option, number, number2, i;
    
    while (1) {
        printf("---------------------------OPERATIONS ON INTEGERS---------------------------\n");
        printf("0 – Exit\n");
        printf("1 - Count the number of digits of an integer\n");
        printf("2 - Sum the digits of an integer\n");
        printf("3 - Get the i-th least significant digit of an integer\n");
        printf("4 - Calculate the mirror image of an integer\n");
        printf("5 - Check if an integer is prime\n");
        printf("6 – Show the GCD of two numbers\n");
        printf("7 – Display the addition, subtraction, multiplication, and division tables for n.\n");
        printf("--------------------------------------------------------------------------------------------------------\n");
        printf("Select an option [0-7]: ");
        scanf("%d", &option);

        switch (option) {
            case 0:
                return;
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &number);
                printf("The number of digits in %d is %d\n", number, countDigits(number));
                break;
            case 2:
                printf("Enter an integer: ");
                scanf("%d", &number);
                printf("The sum of the digits of %d is %d\n", number, sumDigits(number));
                break;
            case 3:
                printf("Enter an integer: ");
                scanf("%d", &number);
                printf("Enter the position of the least significant digit: ");
                scanf("%d", &i);
                printf("The %d-th least significant digit of %d is %d\n", i, number, getIthDigit(number, i));
                break;
            case 4:
                printf("Enter an integer: ");
                scanf("%d", &number);
                printf("The mirror image of %d is %d\n", number, mirrorImage(number));
                break;
            case 5:
                printf("Enter an integer: ");
                scanf("%d", &number);
                if (isPrime(number)) {
                    printf("The number %d is prime\n", number);
                } else {
                    printf("The number %d is not prime\n", number);
                }
                break;
            case 6:
                printf("Enter the first integer: ");
                scanf("%d", &number);
                printf("Enter the second integer: ");
                scanf("%d", &number2);
                printf("The GCD of %d and %d is %d\n", number, number2, gcd(number, number2));
                break;
            case 7:
                printf("Enter an integer: ");
                scanf("%d", &number);
                showTables(number);
                break;
            default:
                printf("Invalid option. Please choose an option between 0 and 7.\n");
                break;
        }
    }
}

int main() {
    displayMenu();
    return 0;
}