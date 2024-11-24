#include <stdio.h>

int main() {
    
    char nombre[100];
    float peso, altura_cm, altura_m, imc;

    // Solicitar el nombre del usuario
    printf("Introduzca usted su nombre: ");
    fgets(nombre, sizeof(nombre), stdin); // Usar fgets para permitir espacios en el nombre

    // Solicitar la altura en centímetros
    printf("Introduzca altura en centímetros: ");
    scanf("%f", &altura_cm);

    // Solicitar el peso en kilos
    printf("Introduzca peso en kilos: ");
    scanf("%f", &peso);

    // Convertir altura a metros
    altura_m = altura_cm / 100.0;

    // Calcular el índice de masa corporal (IMC)
    imc = peso / (altura_m * altura_m);

    // Mostrar el IMC y la clasificación
    printf("%s, según el índice de masa corporal (IMC=%.2f), tiene usted un ", nombre, imc);

    if (imc < 18.5) {
        printf("PESO BAJO para su estatura\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("PESO NORMAL para su estatura\n");
    } else if (imc >= 25 && imc < 27) {
        printf("SOBREPESO DE GRADO I para su estatura\n");
    } else if (imc >= 27 && imc < 30) {
        printf("SOBREPESO DE GRADO II para su estatura\n");
    } else {
        printf("OBESIDAD para su estatura\n");
    }

    return 0;
}
