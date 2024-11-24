#include <stdio.h>
#include <string.h>

#define MAX_TAREAS 20
#define DIAS_DEL_ANO 365  // O 366 para un año bisiesto

// Estructura para almacenar la hora y los minutos de la tarea
typedef struct {
    int hora;
    int minutos;
} Hora;

// Estructura para almacenar cada tarea
typedef struct {
    char descripcion[100];
    Hora tiempo;
} Tarea;

// Estructura para representar un día del año
typedef struct {
    int dia;  // Día del mes (1-31)
    int mes;  // Mes del año (1-12)
    Tarea tareas[MAX_TAREAS];  // Array de tareas para este día
    int num_tareas;  // Número de tareas en este día (máximo 20)
} Dia;

// Estructura que representa el calendario de todo el año
typedef struct {
    Dia dias[DIAS_DEL_ANO];  // Array de días del año
} Calendario;

// Función para agregar una tarea a un día específico
void agregarTarea(Calendario *calendario, int dia, int mes, const char *descripcion, int hora, int minutos) {
    // Encontrar el índice del día correspondiente
    int index = (mes - 1) * 31 + (dia - 1);  // Suponiendo un calendario simple sin considerar el número exacto de días por mes
    
    // Verificar si hay espacio para más tareas
    if (calendario->dias[index].num_tareas < MAX_TAREAS) {
        Tarea nuevaTarea;
        strncpy(nuevaTarea.descripcion, descripcion, sizeof(nuevaTarea.descripcion) - 1);
        nuevaTarea.descripcion[sizeof(nuevaTarea.descripcion) - 1] = '\0';  // Asegurarse de que la cadena está terminada
        nuevaTarea.tiempo.hora = hora;
        nuevaTarea.tiempo.minutos = minutos;
        
        // Agregar la nueva tarea
        calendario->dias[index].tareas[calendario->dias[index].num_tareas] = nuevaTarea;
        calendario->dias[index].num_tareas++;
    } else {
        printf("No se pueden agregar más tareas a este día.\n");
    }
}

// Función para mostrar las tareas de un día
void mostrarTareas(Calendario *calendario, int dia, int mes) {
    int index = (mes - 1) * 31 + (dia - 1);
    
    printf("Tareas para el %02d/%02d:\n", dia, mes);
    for (int i = 0; i < calendario->dias[index].num_tareas; i++) {
        Tarea tarea = calendario->dias[index].tareas[i];
        printf("Tarea: %s, Hora: %02d:%02d\n", tarea.descripcion, tarea.tiempo.hora, tarea.tiempo.minutos);
    }
}

// Función principal
int main() {
    Calendario calendario = {{0}};  // Inicializar el calendario vacío
    
    // Agregar algunas tareas
    agregarTarea(&calendario, 15, 3, "Reunión con el equipo", 10, 30);
    agregarTarea(&calendario, 15, 3, "Llamar al cliente", 14, 0);
    agregarTarea(&calendario, 16, 3, "Estudiar para el examen", 9, 0);
    
    // Mostrar tareas
    mostrarTareas(&calendario, 15, 3);
    mostrarTareas(&calendario, 16, 3);
    
    return 0;
}
