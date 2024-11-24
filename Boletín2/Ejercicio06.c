#include <stdio.h>

int main() {
    
    int totalPreguntas, correctas;
    float porcentaje;

    // Solicitar datos al usuario
    printf("Cantidad total de preguntas planteadas: ");
    scanf("%d", &totalPreguntas);

    printf("Cantidad de preguntas contestadas correctamente: ");
    scanf("%d", &correctas);

    // Verificar que el total de preguntas sea mayor que cero
    if (totalPreguntas <= 0) {
        printf("El número total de preguntas debe ser mayor que cero.\n");
        return 1;
    }

    // Calcular el porcentaje de respuestas correctas
    porcentaje = ((float)correctas / totalPreguntas) * 100;

    // Determinar el nivel
    if (porcentaje >= 90) {
        printf("Nivel máximo: %.2f%%\n", porcentaje);
    } else if (porcentaje >= 75) {
        printf("Nivel medio: %.2f%%\n", porcentaje);
    } else if (porcentaje >= 50) {
        printf("Nivel regular: %.2f%%\n", porcentaje);
    } else {
        printf("Fuera de nivel: %.2f%%\n", porcentaje);
    }

    return 0;
}
