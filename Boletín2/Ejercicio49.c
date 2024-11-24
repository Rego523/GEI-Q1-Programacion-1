#include <stdio.h>
#include <math.h>

void visualizarTabla(int inicio, int fin) {
    printf("Número\tCuadrado\tRaíz Cuadrada\n");
    for (int i = inicio; i <= fin; i++) {
        printf("%d\t%d\t\t%.2f\n", i, i * i, sqrt(i));
    }
}

void mostrarDivisores(int numero) {
    printf("Divisores de %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    
    int opcion;
    int inicio, fin, numero;

    do {
        // Mostrar el menú
        printf("Menú:\n");
        printf("1. Visualizar una tabla de números, cuadrados y raíces cuadradas\n");
        printf("2. Mostrar los divisores de un número\n");
        printf("3. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // Opción 1: Visualizar tabla
                printf("Ingrese el inicio del intervalo: ");
                scanf("%d", &inicio);
                printf("Ingrese el fin del intervalo: ");
                scanf("%d", &fin);
                visualizarTabla(inicio, fin);
                break;

            case 2:
                // Opción 2: Mostrar divisores
                printf("Ingrese el número para encontrar sus divisores: ");
                scanf("%d", &numero);
                mostrarDivisores(numero);
                break;

            case 3:
                // Opción 3: Salir
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 3);  // Continuar hasta que el usuario elija salir

    return 0;
}
