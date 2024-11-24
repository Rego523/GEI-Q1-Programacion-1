#include <stdio.h>
#include <string.h>

#define SIZE 7
#define NAME_LENGTH 50 // Longitud máxima para los nombres

// Función para solicitar nombres de animales y almacenarlos en un array
void inputAnimalNames(char animals[][NAME_LENGTH], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the name of animal %d: ", i + 1);
        scanf("%s", animals[i]);
    }
}

// Función para mostrar los nombres almacenados en el array
void displayAnimalNames(char animals[][NAME_LENGTH], int size) {
    printf("The names of the animals are:\n");
    for (int i = 0; i < size; i++) {
        printf("Animal %d: %s\n", i + 1, animals[i]);
    }
}

int main() {
    // Declarar el array para almacenar los nombres de los animales
    char animals[SIZE][NAME_LENGTH];
    
    inputAnimalNames(animals, SIZE);
    
    displayAnimalNames(animals, SIZE);
    
    return 0;
}
