//
// Created by Pizarman on 12/12/2023.
//
#include <iostream>
#include <cstring>

struct Estudiante {
    char *nombre;
    int edad;
    float promedio;
};

typedef struct Estudiante Estudiante;

int main(){

    Estudiante estudiante1;
    estudiante1.nombre = "Diego";
    estudiante1.edad = 19;
    estudiante1.promedio = 8.55;

    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}