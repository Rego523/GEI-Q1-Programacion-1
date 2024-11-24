#include <stdio.h>

#define NUM_ASIGNATURAS 6

// Función para clasificar la nota en función del rango
const char* clasificar_nota(float nota) {
    
    if (nota >= 9.0) {
        return "SOBRESALIENTE";
    } else if (nota >= 7.0) {
        return "NOTABLE";
    } else if (nota >= 5.0) {
        return "APROBADO";
    } else {
        return "SUSPENSO";
    }
}

int main() {

    float calificaciones[NUM_ASIGNATURAS];
    float suma_total = 0.0;
    float suma_presentadas = 0.0;
    int num_presentadas = 0;

    // Solicitar las calificaciones
    for (int i = 0; i < NUM_ASIGNATURAS; ++i) {
        do {
            printf("Introduzca calificación asignatura %d (formato X.X, 0 para No Presentado): ", i + 1);
            scanf("%f", &calificaciones[i]);

            if (calificaciones[i] < 0 || calificaciones[i] > 10) {
                printf("Error: La calificación debe estar entre 0 y 10.\n");
            }
        } while (calificaciones[i] < 0 || calificaciones[i] > 10);

        // Calcular suma total y suma de presentadas
        if (calificaciones[i] != 0) {
            suma_presentadas += calificaciones[i];
            ++num_presentadas;
        }
        suma_total += calificaciones[i];
    }

    // Calcular las medias
    float media_total = suma_total / NUM_ASIGNATURAS;
    float media_presentadas = (num_presentadas > 0) ? (suma_presentadas / num_presentadas) : 0;

    // Mostrar resultados
    printf("Nota media: %s (%.2f)\n", clasificar_nota(media_total), media_total);
    if (num_presentadas > 0) {
        printf("Nota media asignaturas presentadas: %s (%.2f)\n", clasificar_nota(media_presentadas), media_presentadas);
    } else {
        printf("Nota media asignaturas presentadas: No hay asignaturas presentadas\n");
    }

    return 0;
}
