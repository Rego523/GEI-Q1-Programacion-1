#include <stdio.h>
#include <string.h>

// Estructura para almacenar la información de un alumno
typedef struct {
    char name[50];
    float grade;
} Student;

// Función para mostrar el listado de alumnos y sus notas
void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nombre: %s - Nota: %.2f\n", students[i].name, students[i].grade);
    }
}

// Función principal
int main() {
    Student students[15];  // Array de 15 alumnos
    float bestGrade = -1, worstGrade = 11;  // Inicializar las calificaciones extremas
    int bestIndex = 0, worstIndex = 0;  // Indices de los mejores y peores alumnos

    // Solicitar los datos de los alumnos
    for (int i = 0; i < 15; i++) {
        printf("Introduce el nombre del alumno %d: ", i + 1);
        fgets(students[i].name, 50, stdin);  // Usar fgets para leer el nombre
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Eliminar el salto de línea

        printf("Introduce la nota de %s: ", students[i].name);
        scanf("%f", &students[i].grade);
        getchar();  // Para capturar el salto de línea restante

        // Verificar la mejor y peor nota
        if (students[i].grade > bestGrade) {
            bestGrade = students[i].grade;
            bestIndex = i;
        }
        if (students[i].grade < worstGrade) {
            worstGrade = students[i].grade;
            worstIndex = i;
        }
    }

    // Mostrar la mejor y peor calificación
    printf("\nEl alumno con la mejor calificación es: %s - Nota: %.2f\n", students[bestIndex].name, students[bestIndex].grade);
    printf("El alumno con la peor calificación es: %s - Nota: %.2f\n\n", students[worstIndex].name, students[worstIndex].grade);

    // Mostrar el listado completo de alumnos
    printf("Listado de alumnos y sus notas:\n");
    printStudents(students, 15);

    return 0;
}
