#include <stdio.h>

// Función recursiva para resolver el problema de las Torres de Hanoi.
void towersHanoi(int n, char origin, char destination, char assistant) {
    if (n == 1) {
        // Caso base: mover un solo disco directamente del origen al destino.
        printf("Mover disco 1 de %c a %c\n", origin, destination);
    } else {
        // Mover n-1 discos del origen al auxiliar usando el destino como poste auxiliar.
        torresDeHanoi(n - 1, origin, assistant, destination);
        // Mover el disco restante del origen al destino.
        printf("Mover disco %d de %c a %c\n", n, origin, destination);
        // Mover los n-1 discos del auxiliar al destino usando el origen como poste auxiliar.
        torresDeHanoi(n - 1, assistant, destination, origin);
    }
}

int main() {
    int numDisks;

    // Solicitar el número de discos al usuario.
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    // Llamar a la función para resolver el problema de las Torres de Hanoi.
    printf("Solution for %d disks:\n", numDisks);
    towersHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}
