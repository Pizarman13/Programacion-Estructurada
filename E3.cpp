//
// Created by Pizarman on 12/12/2023.
//

// Usamos el ejercicio 1 y le añadimos la funcion
#include <iostream>
#include <cstring>

// a
struct Estudiante {
    char *nombre;
    int edad;
    float promedio;
};

// creamos la clase copiarEstudiante
struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}

int main() {

    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    struct Estudiante *estudiante2 = (struct Estudiante *) malloc(sizeof(struct Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    struct Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    // mostramos la estructura copiada
    struct Estudiante est = copiarEstudiante(estudiante1);

    std::cout << "nombre de la copia: " << est.nombre << std::endl;
    std::cout << "edad de la copia: " << est.edad << std::endl;
    std::cout << "promedio de la copia: " << est.promedio << std::endl;

    return 0;
}
