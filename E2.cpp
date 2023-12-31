//
// Created by Pizarman on 12/12/2023.
//


#include <cstdio>
#include <cstring>

union Dato {
    int i;
    float f;
    char str[20];
};

int main() {

    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);

    dato.i = 11;
    printf("dato.i: %d\n", dato.i);

    dato.f = 11.3;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "Java programming");
    printf("dato2.str: %s\n", dato.str);

    return 0;
}