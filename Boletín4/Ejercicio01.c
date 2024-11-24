#include <stdio.h>

// Función para solicitar números enteros al usuario y almacenarlos en un array
void inputNumbers(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter an integer for position %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

// Función para mostrar los números almacenados en el array
void displayNumbers(int array[], int size) {
    printf("The numbers in the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("Position %d: %d\n", i + 1, array[i]);
    }
}

int main() {
    int numbers[10];
    
    inputNumbers(numbers, 10);
    
    displayNumbers(numbers, 10);
    
    return 0;
}
