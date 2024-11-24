#include <stdio.h>
#include <math.h>

int main() {
    
    int count = 0;
    int limit = 1000;
    
    // Buscar triples (x, y, z) que cumplan x^2 + y^2 = z^2
    for (int x = 1; x <= 100; x++) {
        for (int y = x; y <= 100; y++) { // y empieza desde x para evitar repeticiones
            for (int z = y; z <= 100; z++) { // z empieza desde y para evitar repeticiones
                if (x * x + y * y == z * z) {
                    printf("(%d, %d, %d)\n", x, y, z);
                    count++;
                    if (count >= limit) {
                        return 0; // Terminar el programa después de encontrar los primeros 1000 triples
                    }
                }
            }
        }
    }

    return 0;
}
