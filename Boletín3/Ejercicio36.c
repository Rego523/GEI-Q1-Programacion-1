#include <stdio.h>
#include <math.h>

// Structure to represent a complex number in rectangular form.
typedef struct {
    double real;
    double imag;
} Complex;

// Function to read a complex number in rectangular form.
Complex readComplexRectangular() {
    Complex c;
    printf("Enter real part: ");
    scanf("%lf", &c.real);
    printf("Enter imaginary part: ");
    scanf("%lf", &c.imag);
    return c;
}

// Function to read a complex number in polar form.
Complex readComplexPolar() {
    Complex c;
    double modulus, argument;
    printf("Enter modulus (r): ");
    scanf("%lf", &modulus);
    printf("Enter argument (theta in radians): ");
    scanf("%lf", &argument);
    c.real = modulus * cos(argument);
    c.imag = modulus * sin(argument);
    return c;
}

// Function to print a complex number.
void printComplex(Complex c) {
    if (c.imag >= 0) {
        printf("%.2lf + %.2lfi\n", c.real, c.imag);
    } else {
        printf("%.2lf - %.2lfi\n", c.real, -c.imag);
    }
}

// Function to add two complex numbers.
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers.
Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers.
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to display the menu and handle operations.
void displayMenu() {
    int option;
    Complex c1, c2, result;

    while (1) {
        printf("------------ COMPLEX NUMBERS MENU ------------\n");
        printf("1 - Enter two complex numbers in rectangular form\n");
        printf("2 - Enter two complex numbers in polar form\n");
        printf("3 - Add two complex numbers\n");
        printf("4 - Subtract two complex numbers\n");
        printf("5 - Multiply two complex numbers\n");
        printf("0 - Exit\n");
        printf("----------------------------------------------\n");
        printf("Select an option [0-5]: ");
        scanf("%d", &option);

        switch (option) {
            case 0:
                return;
            case 1:
                printf("Enter the first complex number:\n");
                c1 = readComplexRectangular();
                printf("Enter the second complex number:\n");
                c2 = readComplexRectangular();
                break;
            case 2:
                printf("Enter the first complex number:\n");
                c1 = readComplexPolar();
                printf("Enter the second complex number:\n");
                c2 = readComplexPolar();
                break;
            case 3:
                result = addComplex(c1, c2);
                printf("Sum: ");
                printComplex(result);
                break;
            case 4:
                result = subtractComplex(c1, c2);
                printf("Difference: ");
                printComplex(result);
                break;
            case 5:
                result = multiplyComplex(c1, c2);
                printf("Product: ");
                printComplex(result);
                break;
            default:
                printf("Invalid option. Please choose a number between 0 and 5.\n");
                break;
        }
    }
}

int main() {
    displayMenu();
    return 0;
}
