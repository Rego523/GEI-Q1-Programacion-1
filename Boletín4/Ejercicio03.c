#include <stdio.h>

#define MAX_SIZE 30 // Tamaño máximo del array

// Función para solicitar números reales al usuario y almacenarlos en un array
void inputRealNumbers(float array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter a real number for position %d: ", i + 1);
        scanf("%f", &array[i]);
    }
}

// Función para calcular la suma de los elementos de un array
float calculateSum(float array[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    // Declarar el array para almacenar los números
    float numbers[MAX_SIZE];
    int numElements;
    
    // Solicitar al usuario la cantidad de elementos a procesar
    printf("How many numbers will you input (max %d)? ", MAX_SIZE);
    scanf("%d", &numElements);
    
    // Validar que la cantidad de elementos no supere el límite
    if (numElements <= 0 || numElements > MAX_SIZE) {
        printf("Invalid number of elements. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    
    inputRealNumbers(numbers, numElements);
    
    float sum = calculateSum(numbers, numElements);
    
    printf("The sum of the elements is: %.2f\n", sum);
    
    return 0;
}
