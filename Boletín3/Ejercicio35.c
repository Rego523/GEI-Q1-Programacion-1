#include <stdio.h>
#include <math.h>

// Function to count unaccented vowels in a text.
int countUnaccentedVowels() {
    char ch;
    int count = 0;
    
    printf("Enter text (end with '*'): ");
    while ((ch = getchar()) != '*') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to calculate power of a number without using exponentiation operators.
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate the factorial of the smaller of two positive integers.
int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to display squares and cubes of numbers in an interval.
void displaySquaresAndCubes(int start, int end) {
    printf("Number\tSquare\tCube\n");
    for (int i = start; i <= end; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
}

// Function to draw a centered square.
void drawSquare(int side, char ch) {
    int i, j;
    int spaces = (side - 1) / 2;
    
    for (i = 0; i < side; i++) {
        for (j = 0; j < side; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

// Function to calculate area and perimeter of the smallest rectangle.
void calculateRectangle(int length1, int width1, int length2, int width2) {
    int area1 = length1 * width1;
    int area2 = length2 * width2;
    int perimeter1 = 2 * (length1 + width1);
    int perimeter2 = 2 * (length2 + width2);

    if (area1 < area2) {
        printf("Smallest rectangle: Area = %d, Perimeter = %d\n", area1, perimeter1);
    } else {
        printf("Smallest rectangle: Area = %d, Perimeter = %d\n", area2, perimeter2);
    }
}

// Function to display numbers, their squares and square roots.
void displayNumbersAndRoots(int start, int end) {
    printf("Number\tSquare\tSquare Root\n");
    for (int i = start; i <= end; i++) {
        printf("%d\t%d\t%.2f\n", i, i * i, sqrt(i));
    }
}

// Function to calculate max, min, and average of a series of integers.
void calculateStats() {
    int num, count = 0, sum = 0, max = -2147483648, min = 2147483647;
    
    printf("Enter numbers (end with a multiple of 10):\n");
    while (1) {
        scanf("%d", &num);
        if (num % 10 == 0 && num != 0) break;
        if (num > max) max = num;
        if (num < min) min = num;
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("Max: %d\n", max);
        printf("Min: %d\n", min);
        printf("Average: %.2f\n", (float)sum / count);
    } else {
        printf("No numbers entered.\n");
    }
}

// Function to display divisors of an integer.
void displayDivisors(int num) {
    printf("Divisors of %d:\n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to draw a centered equilateral triangle.
void drawTriangle(int side, char ch) {
    int i, j;
    int spaces = side - 1;
    
    for (i = 1; i <= side; i++) {
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
        }
        printf("\n");
        spaces--;
    }
}

// Function to display the menu and handle operations.
void displayMenu() {
    int option, num1, num2, start, end, side;
    char ch;

    while (1) {
        printf("---------------------------MENU---------------------------\n");
        printf("0 – Exit\n");
        printf("1 – Count unaccented vowels in a text\n");
        printf("2 – Calculate the power of a number\n");
        printf("3 – Show the factorial of the smaller of two positive integers\n");
        printf("4 – Display squares and cubes of numbers in an interval\n");
        printf("5 – Draw a centered square\n");
        printf("6 – Show area and perimeter of the smallest rectangle\n");
        printf("7 – Display numbers, their squares, and square roots in an interval\n");
        printf("8 – Calculate max, min, and average of a series of integers\n");
        printf("9 – Display divisors of an integer\n");
        printf("10 – Draw a centered equilateral triangle\n");
        printf("------------------------------------------------------------\n");
        printf("Select an option [0-10]: ");
        scanf("%d", &option);
        getchar(); // To consume the newline character after the integer input.

        switch (option) {
            case 0:
                return;
            case 1:
                printf("Number of unaccented vowels: %d\n", countUnaccentedVowels());
                break;
            case 2:
                printf("Enter base: ");
                scanf("%d", &num1);
                printf("Enter exponent: ");
                scanf("%d", &num2);
                printf("%d ^ %d = %d\n", num1, num2, power(num1, num2));
                break;
            case 3:
                printf("Enter first positive integer: ");
                scanf("%d", &num1);
                printf("Enter second positive integer: ");
                scanf("%d", &num2);
                if (num1 < num2) {
                    printf("Factorial of %d is %d\n", num1, factorial(num1));
                } else {
                    printf("Factorial of %d is %d\n", num2, factorial(num2));
                }
                break;
            case 4:
                printf("Enter start of interval: ");
                scanf("%d", &start);
                printf("Enter end of interval: ");
                scanf("%d", &end);
                displaySquaresAndCubes(start, end);
                break;
            case 5:
                printf("Enter side length of square: ");
                scanf("%d", &side);
                printf("Enter character to draw square: ");
                scanf(" %c", &ch); // Space before %c to consume any leftover whitespace.
                drawSquare(side, ch);
                break;
            case 6:
                printf("Enter length and width of first rectangle: ");
                scanf("%d %d", &num1, &num2);
                printf("Enter length and width of second rectangle: ");
                scanf("%d %d", &num1, &num2);
                calculateRectangle(num1, num2, num1, num2);
                break;
            case 7:
                printf("Enter start of interval: ");
                scanf("%d", &start);
                printf("Enter end of interval: ");
                scanf("%d", &end);
                displayNumbersAndRoots(start, end);
                break;
            case 8:
                calculateStats();
                break;
            case 9:
                printf("Enter an integer: ");
                scanf("%d", &num1);
                displayDivisors(num1);
                break;
            case 10:
                printf("Enter side length of triangle: ");
                scanf("%d", &side);
                printf("Enter character to draw triangle: ");
                scanf(" %c", &ch); // Space before %c to consume any leftover whitespace.
                drawTriangle(side, ch);
                break;
            default:
                printf("Invalid option. Please choose a number between 0 and 10.\n");
                break;
        }
    }
}

int main() {
    displayMenu();
    return 0;
}
