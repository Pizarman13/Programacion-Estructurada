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

void modificarEdadEstudiante(struct Estudiante *estudiante, int nuevaEdad) {
    estudiante->edad = nuevaEdad;
}

void imprimirEstudiantePorDireccion(Estudiante *est) {
    printf("Imprimir Estudiante por direccion: Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

int main() {

    struct Estudiante estudiante1 = {"Diego", 20, 7.5};

    printf("Información del estudiante:\n");
    imprimirEstudiante(estudiante1);

    modificarEdadEstudiante(&estudiante1, 19);
    printf("Nueva edad del estudiante: %d\n", estudiante1.edad);

    imprimirEstudiantePorDireccion(&estudiante1);

    return 0;
}