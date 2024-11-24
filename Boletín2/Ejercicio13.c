#include <stdio.h>

int main() {
    
    // Declaración de variables para los lados del triángulo
    int lado1, lado2, lado3;

    // Solicitar al usuario las longitudes de los tres lados
    printf("Introduzca la longitud del primer lado del triángulo (cm): ");
    scanf("%d", &lado1);
    printf("Introduzca la longitud del segundo lado del triángulo (cm): ");
    scanf("%d", &lado2);
    printf("Introduzca la longitud del tercer lado del triángulo (cm): ");
    scanf("%d", &lado3);

    // Clasificar el triángulo según los lados
    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triángulo es EQUILÁTERO (lado1=lado2=lado3=%d cm)\n", lado1);
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        printf("El triángulo es ISÓSCELES (lado1=%d cm, lado2=%d cm, lado3=%d cm)\n", lado1, lado2, lado3);
    } else {
        printf("El triángulo es ESCALENO (lado1=%d cm, lado2=%d cm, lado3=%d cm)\n", lado1, lado2, lado3);
    }

    return 0;
}
