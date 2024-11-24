#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILAS 20 
#define COLUMNAS 20

// Función para imprimir la cuadrícula
void imprimirMundo(int mundo[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (mundo[i][j] == 1)
                printf("O");  // Celda viva
            else
                printf(" ");  // Celda muerta
        }
        printf("\n");
    }
}

// Función para contar los vecinos vivos de una celda
int contarVecinos(int mundo[FILAS][COLUMNAS], int fila, int columna) {
    int vecinos = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue; // Saltar la celda central
            int filaVecino = fila + i;
            int columnaVecino = columna + j;
            // Comprobar si el vecino está dentro de los límites
            if (filaVecino >= 0 && filaVecino < FILAS && columnaVecino >= 0 && columnaVecino < COLUMNAS) {
                vecinos += mundo[filaVecino][columnaVecino];
            }
        }
    }
    return vecinos;
}

// Función para actualizar el mundo a la siguiente generación
void actualizarMundo(int mundo[FILAS][COLUMNAS]) {
    int nuevoMundo[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            int vecinos = contarVecinos(mundo, i, j);
            // Regla 1: Celdas vivas
            if (mundo[i][j] == 1) {
                if (vecinos < 2 || vecinos > 3) {
                    nuevoMundo[i][j] = 0;  // Muere por subpoblación o sobrepoblación
                } else {
                    nuevoMundo[i][j] = 1;  // Sobrevive
                }
            }
            // Regla 2: Celdas muertas
            else {
                if (vecinos == 3) {
                    nuevoMundo[i][j] = 1;  // Revive por reproducción
                } else {
                    nuevoMundo[i][j] = 0;  // Permanece muerta
                }
            }
        }
    }

    // Copiar el nuevo mundo al mundo original
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            mundo[i][j] = nuevoMundo[i][j];
        }
    }
}

int main() {
    int mundo[FILAS][COLUMNAS] = {0};  // Cuadrícula inicial (todas las celdas muertas)

    // Inicializar algunas celdas vivas (por ejemplo, un patrón conocido)
    // Patente Glider (un patrón conocido que se mueve)
    mundo[5][5] = 1;
    mundo[5][6] = 1;
    mundo[5][7] = 1;
    mundo[4][7] = 1;
    mundo[3][6] = 1;

    int generaciones = 0;
    char continuar;

    do {
        printf("\nGeneración %d:\n", generaciones++);
        imprimirMundo(mundo);
        actualizarMundo(mundo);

        // Esperar un segundo antes de mostrar la siguiente generación
        usleep(500000);  // Pausar por 0.5 segundos

        // Preguntar al usuario si desea continuar
        printf("Presione 'y' para continuar a la siguiente generación, cualquier otra tecla para salir: ");
        continuar = getchar();
        getchar();  // Limpiar el buffer del salto de línea

    } while (continuar == 'y' || continuar == 'Y');

    printf("Juego terminado.\n");

    return 0;
}
