#include <stdio.h>
#include <math.h>

// Función para calcular la reactancia inductiva XL = 2 * pi * f * L.
double calculateInductiveReactance(double frequency, double inductance) {
    return 2 * M_PI * frequency * inductance;
}

// Función para calcular la reactancia capacitiva XC = 1 / (2 * pi * f * C).
double calculateCapacitiveReactance(double frequency, double capacitance) {
    return 1 / (2 * M_PI * frequency * capacitance);
}

// Función para calcular la impedancia Z = XL - XC.
double calculateRealImpedance(double frequency, double inductance, double capacitance) {
    double XL = calculateInductiveReactance(frequency, inductance);
    double XC = calculateCapacitiveReactance(frequency, capacitance);
    return XL - XC;
}

// Función de prueba
void calculateImpedance() {
    double capacitance, inductance, frequency;

    // Solicitar al usuario los valores.
    printf("Enter the capacitance value in farads (C): ");
    scanf("%lf", &capacitance);

    printf("Enter the value of the inductance in henries (L): ");
    scanf("%lf", &inductance);

    printf("Enter the frequency value in hertz (f): ");
    scanf("%lf", &frequency);

    // Calcular la impedancia.
    double impedance = calculateRealImpedance(frequency, inductance, capacitance);

    // Mostrar el resultado.
    printf("The impedance of the circuit is: %.2lf ohms\n", impedance);
}

int main() {
    calculateImpedance();
    return 0;
}
