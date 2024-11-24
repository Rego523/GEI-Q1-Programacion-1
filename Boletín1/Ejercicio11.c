#include <stdio.h>

int main() {
    // Declarar variables para almacenar el tiempo en segundos y las conversiones.
    int total_seconds, hours, minutes, seconds;

    // Solicitar el tiempo en segundos.
    printf("Time in seconds: ");
    scanf("%d", &total_seconds);

    // Calcular horas, minutos y segundos.
    hours = total_seconds / 3600;           // 1 hora = 3600 segundos.
    minutes = (total_seconds % 3600) / 60;  // El resto dividido entre 60 para obtener los minutos.
    seconds = total_seconds % 60;         // El resto son los segundos.

    // Mostrar el tiempo convertido en formato horas: minutos: segundos.
    printf("%d seconds are %dh : %dm : %ds\n", total_seconds, hours, minutes, seconds);

    return 0;
}
