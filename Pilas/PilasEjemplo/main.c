#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila A;
    inicpila(&A);

    apilar(&A, 3);

    for(int i = 0; i < 3; i++){
        leer(&A);
    }

    char control = 's';

    while(control == 's'){
        leer(&A);
        printf("¿Quieres cargar mas alumnos? Presione la s para seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    Pila B;
    inicpila(&B);

    while(!pilavacia(&A)){
        apilar(&B, desapilar(&A));
    }

    printf("Pila A:");
    mostrar(&A);
    printf("Pila B:");
    mostrar(&B);



    return 0;
}
