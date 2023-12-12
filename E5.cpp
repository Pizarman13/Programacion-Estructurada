//
// Created by Pizarman on 12/12/2023.
//
#include <stdio.h>

struct Estudiante {
    char *nombre;
    int edad;
    float promedio;
};

// Función para imprimir los miembros de una estructura Estudiante por valor
void imprimirEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {

    struct Estudiante estudiante1 = {"Diego", 20, 7.5};

    printf("Información del estudiante:\n");
    imprimirEstudiante(estudiante1);

    return 0;
}