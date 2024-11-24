#include <stdio.h>

int main() {
    
    float salarioAnual, impuestoAnual, reduccionHijos, totalPagar;
    int numHijos;
    const float TASA_IRPF = 0.15; // Tasa del IRPF constante (15%)
    const float REDUCCION_POR_HIJO = 0.10; // Reducción del 10% por hijo

    // Solicitar el salario anual bruto
    printf("Introduzca su salario anual bruto (en euros): ");
    scanf("%f", &salarioAnual);

    // Solicitar el número de hijos menores de 18 años
    printf("Introduzca el número de hijos menores de 18 años a su cargo: ");
    scanf("%d", &numHijos);

    // Calcular el impuesto inicial (IRPF)
    impuestoAnual = salarioAnual * TASA_IRPF;

    // Calcular la reducción total basada en el número de hijos
    // La reducción máxima es del 50% (5 hijos)
    if (numHijos > 5) {
        numHijos = 5; // Limitar el número de hijos a 5
    }
    reduccionHijos = impuestoAnual * (numHijos * REDUCCION_POR_HIJO);

    // Calcular el total a pagar después de la reducción
    totalPagar = impuestoAnual - reduccionHijos;

    // Mostrar los resultados
    printf("IRPF (15%%): %.2f€\n", impuestoAnual);
    printf("Reducción debida a hijos a cargo: %.2f€\n", reduccionHijos);
    printf("Total anual a pagar: %.2f€\n", totalPagar);

    return 0;
}
