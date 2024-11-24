#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 10    // Número máximo de cartas
#define MAX_NOMBRE 100   // Longitud máxima del nombre del destinatario
#define MAX_CONTENIDO 200 // Longitud máxima del contenido de la carta

// Estructura para representar una carta
typedef struct {
    char destinatario[MAX_NOMBRE];
    char contenido[MAX_CONTENIDO];
} Carta;

// Función para mostrar las cartas
void mostrarCartas(Carta cartas[], int numCartas) {
    for (int i = 0; i < numCartas; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Destinatario: %s\n", cartas[i].destinatario);
        printf("Contenido: %s\n\n", cartas[i].contenido);
    }
}

// Función para modificar el destinatario de una carta
void modificarDestinatario(Carta cartas[], int numCartas) {
    int numCarta;
    char nuevoDestinatario[MAX_NOMBRE];

    // Mostrar las cartas
    mostrarCartas(cartas, numCartas);

    // Pedir al usuario que seleccione la carta a modificar
    printf("Ingrese el número de la carta a modificar (1-%d): ", numCartas);
    scanf("%d", &numCarta);

    // Verificar que el número de carta sea válido
    if (numCarta < 1 || numCarta > numCartas) {
        printf("Número de carta no válido.\n");
        return;
    }

    // Pedir el nuevo nombre del destinatario
    printf("Ingrese el nuevo nombre del destinatario: ");
    getchar();  // Para consumir el salto de línea pendiente
    fgets(nuevoDestinatario, sizeof(nuevoDestinatario), stdin);

    // Eliminar el salto de línea que se agrega con fgets
    nuevoDestinatario[strcspn(nuevoDestinatario, "\n")] = '\0';

    // Actualizar el nombre del destinatario
    strcpy(cartas[numCarta - 1].destinatario, nuevoDestinatario);
    printf("El destinatario de la carta %d ha sido actualizado a: %s\n", numCarta, nuevoDestinatario);
}

int main() {
    Carta cartas[MAX_CARTAS];
    int numCartas = 0;
    int opcion;

    // Ingreso de cartas
    while (numCartas < MAX_CARTAS) {
        printf("Ingrese el nombre del destinatario de la carta %d: ", numCartas + 1);
        fgets(cartas[numCartas].destinatario, sizeof(cartas[numCartas].destinatario), stdin);
        cartas[numCartas].destinatario[strcspn(cartas[numCartas].destinatario, "\n")] = '\0'; // Eliminar salto de línea

        printf("Ingrese el contenido de la carta %d: ", numCartas + 1);
        fgets(cartas[numCartas].contenido, sizeof(cartas[numCartas].contenido), stdin);
        cartas[numCartas].contenido[strcspn(cartas[numCartas].contenido, "\n")] = '\0'; // Eliminar salto de línea

        numCartas++;

        // Preguntar si desea agregar otra carta
        printf("¿Desea agregar otra carta? (1 = Sí, 0 = No): ");
        scanf("%d", &opcion);
        getchar(); // Para consumir el salto de línea restante
        if (opcion == 0) {
            break;
        }
    }

    // Menú de opciones
    do {
        printf("\n1. Mostrar cartas\n");
        printf("2. Modificar destinatario\n");
        printf("3. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);
        getchar(); // Para consumir el salto de línea restante

        switch (opcion) {
            case 1:
                mostrarCartas(cartas, numCartas);
                break;
            case 2:
                modificarDestinatario(cartas, numCartas);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}
