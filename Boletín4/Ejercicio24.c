#include <stdio.h>
#include <string.h>

// Definimos el tipo de puesto
typedef enum {
    OFICINISTA,
    CONDUCTOR,
    TECNICO
} TipoPuesto;

// Definimos una unión para almacenar datos específicos del puesto
union DatosEspecificos {
    char telefono[20];  // Para oficinistas
    char matricula[20]; // Para conductores
    char codigoBarras[20]; // Para técnicos
};

// Estructura para almacenar la información de cada empleado
struct Empleado {
    char nombre[50];
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;
    TipoPuesto puesto;
    char nivelEstudios[50];
    union DatosEspecificos datosPuesto;
};

// Función para mostrar la información de un empleado
void mostrarEmpleado(struct Empleado emp) {
    printf("Nombre: %s\n", emp.nombre);
    printf("Fecha de nacimiento: %02d/%02d/%d\n", emp.diaNacimiento, emp.mesNacimiento, emp.anioNacimiento);
    printf("Puesto: ");
    switch (emp.puesto) {
        case OFICINISTA:
            printf("Oficinista\n");
            printf("Teléfono: %s\n", emp.datosPuesto.telefono);
            break;
        case CONDUCTOR:
            printf("Conductor\n");
            printf("Matrícula: %s\n", emp.datosPuesto.matricula);
            break;
        case TECNICO:
            printf("Técnico\n");
            printf("Código de barras del ordenador: %s\n", emp.datosPuesto.codigoBarras);
            break;
    }
    printf("Nivel de estudios: %s\n\n", emp.nivelEstudios);
}

int main() {
    // Creamos una lista de empleados
    struct Empleado empleados[20];

    // Introducimos los datos de los empleados (solo ejemplo para algunos)
    strcpy(empleados[0].nombre, "Juan Pérez");
    empleados[0].diaNacimiento = 15;
    empleados[0].mesNacimiento = 3;
    empleados[0].anioNacimiento = 1985;
    empleados[0].puesto = OFICINISTA;
    strcpy(empleados[0].nivelEstudios, "Licenciatura");
    strcpy(empleados[0].datosPuesto.telefono, "123-456-789");

    strcpy(empleados[1].nombre, "Ana Gómez");
    empleados[1].diaNacimiento = 22;
    empleados[1].mesNacimiento = 7;
    empleados[1].anioNacimiento = 1990;
    empleados[1].puesto = CONDUCTOR;
    strcpy(empleados[1].nivelEstudios, "Secundaria");
    strcpy(empleados[1].datosPuesto.matricula, "XYZ-123");

    strcpy(empleados[2].nombre, "Carlos López");
    empleados[2].diaNacimiento = 5;
    empleados[2].mesNacimiento = 11;
    empleados[2].anioNacimiento = 1982;
    empleados[2].puesto = TECNICO;
    strcpy(empleados[2].nivelEstudios, "Grado");
    strcpy(empleados[2].datosPuesto.codigoBarras, "ABC-1234");

    // Mostramos los datos de los empleados
    for (int i = 0; i < 3; i++) {
        mostrarEmpleado(empleados[i]);
    }

    return 0;
}
