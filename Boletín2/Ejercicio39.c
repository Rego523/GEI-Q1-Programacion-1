#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_QUINIELAS 10
#define PARTIDOS 15

// Función para inicializar el generador de números aleatorios
void inicializar_generador() {
    srand(time(NULL));
}

// Función para generar una quiniela aleatoria
void generar_quiniela(char quiniela[PARTIDOS]) {
    for (int i = 0; i < PARTIDOS; i++) {
        int resultado = rand() % 3; // 0 = victoria local, 1 = empate, 2 = victoria visitante
        if (resultado == 0)
            quiniela[i] = '1';
        else if (resultado == 1)
            quiniela[i] = 'X';
        else
            quiniela[i] = '2';
    }
}

// Función para mostrar una quiniela
void mostrar_quiniela(const char quiniela[PARTIDOS]) {
    printf("--------------------------------------------------\n");
    printf("|");
    for (int i = 0; i < PARTIDOS; i++) {
        printf(" %c |", quiniela[i]);
    }
    printf("\n--------------------------------------------------\n");
}

int main() {
    
    int num_quinielas = 0;
    char quinielas[MAX_QUINIELAS][PARTIDOS];
    char opcion;

    inicializar_generador();

    while (1) {
        printf("Seleccione una opción:\n");
        printf("I)ndicar número de quinielas\n");
        printf("M)ostrar quinielas\n");
        printf("S)alir\n");
        printf("Opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case 'I':
            case 'i':
                printf("Introduzca el número de quinielas (hasta %d): ", MAX_QUINIELAS);
                scanf("%d", &num_quinielas);
                if (num_quinielas < 1 || num_quinielas > MAX_QUINIELAS) {
                    printf("Número de quinielas no válido. Debe estar entre 1 y %d.\n", MAX_QUINIELAS);
                    num_quinielas = 0; // Reiniciar el número de quinielas
                } else {
                    for (int i = 0; i < num_quinielas; i++) {
                        generar_quiniela(quinielas[i]);
                    }
                    printf("Número de quinielas establecido a %d.\n", num_quinielas);
                }
                break;

            case 'M':
            case 'm':
                if (num_quinielas == 0) {
                    printf("No se ha especificado el número de quinielas. Por favor, indique primero el número de quinielas.\n");
                } else {
                    printf("Mostrando %d quinielas:\n", num_quinielas);
                    for (int i = 0; i < num_quinielas; i++) {
                        printf("Quiniela %d:\n", i + 1);
                        mostrar_quiniela(quinielas[i]);
                    }
                }
                break;

            case 'S':
            case 's':
                printf("Saliendo del programa.\n");
                return 0;

            default:
                printf("Opción no válida. Por favor, seleccione una opción válida.\n");
                break;
        }
    }
}
