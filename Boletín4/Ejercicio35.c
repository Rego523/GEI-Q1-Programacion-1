#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definimos la estructura para almacenar la información de cada capital
typedef struct {
    char capital[50];
    int population;
} City;

// Función de comparación para ordenar las capitales por nombre
int compareByName(const void* a, const void* b) {
    City* cityA = (City*)a;
    City* cityB = (City*)b;
    return strcmp(cityA->capital, cityB->capital);
}

// Función de comparación para ordenar las capitales por población
int compareByPopulation(const void* a, const void* b) {
    City* cityA = (City*)a;
    City* cityB = (City*)b;
    return cityA->population - cityB->population;
}

int main() {
    // Definimos el número de capitales que vamos a almacenar
    int n = 5;

    // Creamos un array de estructuras City para almacenar las capitales y sus poblaciones
    City cities[] = {
        {"Madrid", 6642000},
        {"Paris", 2148327},
        {"Berlin", 3769000},
        {"Rome", 2873000},
        {"London", 8908081}
    };

    // Mostrar las capitales originales
    printf("Capitales originales:\n");
    for (int i = 0; i < n; i++) {
        printf("Capital: %s, Población: %d\n", cities[i].capital, cities[i].population);
    }
    
    // Ordenar las capitales por nombre
    qsort(cities, n, sizeof(City), compareByName);
    printf("\nCapitales ordenadas por nombre:\n");
    for (int i = 0; i < n; i++) {
        printf("Capital: %s, Población: %d\n", cities[i].capital, cities[i].population);
    }

    // Ordenar las capitales por población
    qsort(cities, n, sizeof(City), compareByPopulation);
    printf("\nCapitales ordenadas por población:\n");
    for (int i = 0; i < n; i++) {
        printf("Capital: %s, Población: %d\n", cities[i].capital, cities[i].population);
    }

    return 0;
}
