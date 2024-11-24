#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LONGITUD_CODIGO 4
#define MAX_INTENTOS 10

void generarCodigoSecreto(int codigoSecreto[]) {
    for (int i = 0; i < LONGITUD_CODIGO; i++) {
        codigoSecreto[i] = rand() % 6 + 1; // Genera un número entre 1 y 6
    }
}

void obtenerEntradaUsuario(int intento[]) {
    printf("Ingrese su intento (4 números del 1 al 6): ");
    for (int i = 0; i < LONGITUD_CODIGO; i++) {
        scanf("%d", &intento[i]);
    }
}

void darPista(int codigoSecreto[], int intento[], int *aciertosPosicion, int *aciertosValor) {
    *aciertosPosicion = 0;
    *aciertosValor = 0;
    int usadoSecreto[LONGITUD_CODIGO] = {0};
    int usadoIntento[LONGITUD_CODIGO] = {0};

    // Contar aciertos en la posición correcta
    for (int i = 0; i < LONGITUD_CODIGO; i++) {
        if (intento[i] == codigoSecreto[i]) {
            (*aciertosPosicion)++;
            usadoSecreto[i] = 1;
            usadoIntento[i] = 1;
        }
    }

    // Contar aciertos pero en la posición incorrecta
    for (int i = 0; i < LONGITUD_CODIGO; i++) {
        if (usadoIntento[i]) continue;
        for (int j = 0; j < LONGITUD_CODIGO; j++) {
            if (!usadoSecreto[j] && intento[i] == codigoSecreto[j]) {
                (*aciertosValor)++;
                usadoSecreto[j] = 1;
                break;
            }
        }
    }
}

int main() {
    
    int codigoSecreto[LONGITUD_CODIGO];
    int intento[LONGITUD_CODIGO];
    int aciertosPosicion, aciertosValor;
    int intentoActual = 0;

    srand(time(NULL)); // Inicializa el generador de números aleatorios
    generarCodigoSecreto(codigoSecreto);

    do {
        printf("Intento #%d\n", intentoActual + 1);
        obtenerEntradaUsuario(intento);
        darPista(codigoSecreto, intento, &aciertosPosicion, &aciertosValor);

        printf("Aciertos en la posición correcta: %d\n", aciertosPosicion);
        printf("Aciertos pero en la posición incorrecta: %d\n", aciertosValor);

        if (aciertosPosicion == LONGITUD_CODIGO) {
            printf("¡Felicidades! Has adivinado el código secreto.\n");
            break;
        }

        intentoActual++;
    } while (intentoActual < MAX_INTENTOS);

    if (aciertosPosicion != LONGITUD_CODIGO) {
        printf("Lo siento, no has adivinado el código. El código secreto era: ");
        for (int i = 0; i < LONGITUD_CODIGO; i++) {
            printf("%d ", codigoSecreto[i]);
        }
        printf("\n");
    }

    return 0;
}
