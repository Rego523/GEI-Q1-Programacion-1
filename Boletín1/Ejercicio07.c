#include <stdio.h>

#define IVA 0.24  // Definir el IVA como una constante del 24%.

int main() {
    // Declarar variable para el precio del producto y el importe total.
    float price_without_iva, price_with_iva;

    // Solicitar el precio del producto (sin IVA).
    printf("Product price (without IVA):");
    scanf("%f", &price_without_iva);

    // Calcular el importe total con IVA (Importe total = precio + precio * IVA).
    price_with_iva = price_without_iva + (price_without_iva * IVA);

    // Mostrar el importe total con IVA incluido.
    printf("The total amount (IVA included) is %.2f€\n", price_with_iva);

    return 0;
}
