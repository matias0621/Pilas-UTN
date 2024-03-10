#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pila.h"

int main()
{
    ///Ejercicio 1
    /*
    Pila DADA;
    Pila AUX1;
    Pila AUX2;

    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    for(int i = 0; i < 5; i++){
        leer(&DADA);
    }
    printf("Pila DADA cuando se cargan los datos");
    mostrar(&DADA);

    for (int i = 0; i < 3; i++){
        apilar(&AUX1, desapilar(&DADA));
    }
    printf("Pila DADA despues de pasarle los 3 primeros datos a AUX1");
    mostrar(&DADA);
    printf("Pila AUX1 despues de haberle pasado los 3 primeros datos de DADA");
    mostrar(&AUX1);

    for(int i = 0; i < 2; i++){
        apilar(&AUX2, desapilar(&DADA));
    }
    printf("Pila DADA despues de pasarle los 2 datos que le quedaban");
    mostrar(&DADA);
    printf("Pila AUX1 despues de haberle pasado los 3 primeros datos de DADA");
    mostrar(&AUX1);
    printf("Pila AUX2 despues de haberle pasado los 2 datos que le quedaban a DADA");
    mostrar(&AUX2);
    */

    ///Ejercicio 2
    /*
    char control = 's';
    Pila ORIGEN;
    Pila DESTINO;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);

    while(control == 's'){
        leer(&ORIGEN);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    printf("Pila origen despues de cargarle todos los datos");
    mostrar(&ORIGEN);

    while(!pilavacia(&ORIGEN)){
        apilar(&DESTINO, desapilar(&ORIGEN));
    }
    printf("Pila ORIGDEN vacia:");
    mostrar(&ORIGEN);
    printf("Pila DESTINO con los datos de la pila ORIGEN");
    mostrar(&DESTINO);
    */
    /// Ejercicio 3
    /*
    char control = 's';
    Pila DADA;
    Pila DISTINTOS;
    Pila AUX;
    inicpila(&DADA);
    inicpila(&DISTINTOS);
    inicpila(&AUX);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    while(!pilavacia(&DADA)){
        if (tope(&DADA) != 8){
            apilar(&DISTINTOS, desapilar(&DADA));
        }
        else{
            apilar(&AUX, desapilar(&DADA));
        }
    }

    while(!pilavacia(&AUX)){
        apilar(&DADA, desapilar(&AUX));
    }

    printf("Pila DADA:");
    mostrar(&DADA);
    printf("Pila DISTINTOS");
    mostrar(&DISTINTOS);
    */

    ///Ejercicio 4
    /*
    char control = 's';
    Pila ORIGEN;
    Pila AUX;
    Pila DESTINO;
    inicpila(&ORIGEN);
    inicpila(&AUX);
    inicpila(&DESTINO);

    while(control == 's'){
        leer(&ORIGEN);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    printf("Pila ORIGEN:");
    mostrar(&ORIGEN);

    while(!pilavacia(&ORIGEN)){
        apilar(&AUX, desapilar(&ORIGEN));
    }

    while(!pilavacia(&AUX)){
        apilar(&DESTINO, desapilar(&AUX));
    }

    printf("Pila DESTINO:");
    mostrar(&DESTINO);
    */
    /// Ejercicio 5
    /*
    char control = 's';
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    printf("Pila DADA en orden original:");
    mostrar(&DADA);

    while(!pilavacia(&DADA)){
        apilar(&AUX1, desapilar(&DADA));
    }

    while(!pilavacia(&AUX1)){
        apilar(&AUX2, desapilar(&AUX1));
    }
    while(!pilavacia(&AUX2)){
        apilar(&DADA, desapilar(&AUX2));
    }

    printf("Pila DADA en orden inverso:");
    mostrar(&DADA);
    */

    ///Ejercicio 6
    /*
    char control = 's';
    int tope_dada;
    Pila DADA;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX2);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    printf("Pila normal:");
    mostrar(&DADA);
    tope_dada = desapilar(&DADA);

    while(!pilavacia(&DADA)){
        apilar(&AUX2, desapilar(&DADA));
    }
    apilar(&DADA, tope_dada);

    while(!pilavacia(&AUX2)){
        apilar(&DADA, desapilar(&AUX2));
    }
    printf("Pila con el tope en la base");
    mostrar(&DADA);
    */
    ///Ejercicio 7
    /*
    char control = 's';
    int base_pila;
    Pila DADA;
    Pila AUX1;
    inicpila(&DADA);
    inicpila(&AUX1);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    printf("Pila normal:");
    mostrar(&DADA);

    while(!pilavacia(&DADA)){
        apilar(&AUX1, desapilar(&DADA));
    }
    base_pila = desapilar(&AUX1);

    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }
    apilar(&DADA, base_pila);
    printf("Pila con la base en el tope");
    mostrar(&DADA);
    */
    ///Ejercicio 8
    /*
    char control = 's';
    bool control_jugador;
    Pila MAZO;
    Pila JUGADOR1;
    Pila JUGADOR2;
    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);

    while(control == 's'){
        leer(&MAZO);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    printf("Mazo a repartir: ");
    mostrar(&MAZO);

    while(!pilavacia(&MAZO)){
        if(control_jugador == true){
            apilar(&JUGADOR1, desapilar(&MAZO));
        }
        else{
            apilar(&JUGADOR2, desapilar(&MAZO));
        }
        control_jugador = !control_jugador;
    }
    printf("Jugador1:");
    mostrar(&JUGADOR1);
    printf("Jugador2:");
    mostrar(&JUGADOR2);
    */
    //Ejercicio 9
    /*
    char control = 's';
    Pila pilaA;
    Pila pilaB;
    inicpila(&pilaA);
    inicpila(&pilaB);

    printf("Ingreso de valores para la pilaA\n");
    while(control == 's'){
        leer(&pilaA);
        printf("¿Quieres seguir cargando datos en la pilaA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    control = 's';
    printf("Ingreso de valores para la pilaB\n");
    while(control == 's'){
        leer(&pilaB);
        printf("¿Quieres seguir cargando datos en la pilaB? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    while(!pilavacia(&pilaA) && !pilavacia(&pilaB)){
        desapilar(&pilaA);
        desapilar(&pilaB);
    }

    if (!pilavacia(&pilaB)){
        printf("La pila B es mas grande que la pila A");
    }
    else{
        printf("La pila A es mas grande que la pila B");
    }
    */
    ///Ejercicio 10

    char control = 's';
    bool todo_igual = true;
    Pila pilaA;
    Pila pilaB;
    Pila AUX1;
    Pila AUX2;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("Ingreso de valores para la pilaA\n");
    while(control == 's'){
        leer(&pilaA);
        printf("¿Quieres seguir cargando datos en la pilaA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    control = 's';
    printf("Ingreso de valores para la pilaB\n");
    while(control == 's'){
        leer(&pilaB);
        printf("¿Quieres seguir cargando datos en la pilaB? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    while(!pilavacia(&pilaA) && !pilavacia(&pilaB) && todo_igual == true){
        apilar(&AUX1, desapilar(&pilaA));
        apilar(&AUX2, desapilar(&pilaB));

        if (tope(&AUX1) == tope(&AUX2)){
            todo_igual = true;
        }
        else{
            todo_igual = false;
        }
    }

    if (pilavacia(&pilaA) && pilavacia(&pilaB)) todo_igual = true;
    else todo_igual = false;

    if (todo_igual == true) printf("Ambas pilas son exactamente iguales");
    else printf("No son exactamente iguales");
    */
    ///Ejercicio 11
    /*
    char control = 's';
    Pila MODELO;
    Pila DADA;
    Pila AUX1;
    inicpila(&MODELO);
    inicpila(&DADA);
    inicpila(&AUX1);

    apilar(&MODELO, 1);
    apilar(&MODELO, 2);
    apilar(&MODELO, 3);
    apilar(&MODELO, 4);
    printf("Pila MODELO");
    mostrar(&MODELO);

    printf("Ingreso de valores para la DADA\n");
    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la DADA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(!pilavacia(&DADA)){
        if (tope(&MODELO) == tope(&DADA)){
            desapilar(&DADA);
        }
        else{
            apilar(&AUX1, desapilar(&DADA));
        }
    }
    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }
    printf("Pila DADA con todos los numero distintos al tope de MODELO eliminados\n");
    mostrar(&DADA);
    */
    ///Ejercicio 12
    /*
    char control = 's';
    Pila MODELO;
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&MODELO);
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    apilar(&MODELO, 1);
    apilar(&MODELO, 2);
    apilar(&MODELO, 3);
    apilar(&MODELO, 4);
    printf("Pila MODELO");
    mostrar(&MODELO);

    printf("Ingreso de valores para la DADA\n");
    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la DADA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(!pilavacia(&DADA)){
        if (tope(&MODELO) == tope(&DADA)){
            desapilar(&DADA);
            apilar(&AUX2, desapilar(&MODELO));
        }
        else{
            apilar(&AUX1, desapilar(&DADA));
        }
    }
    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }
    printf("Pila DADA con todos los numero distintos al tope de MODELO eliminados\n");
    mostrar(&DADA);
    */
    ///Ejercicio 13
    /*
    char control = 's';
    Pila LIMITE;
    Pila DADA;
    Pila MAYORES;
    Pila MENORES;
    inicpila(&LIMITE);
    inicpila(&DADA);
    inicpila(&MAYORES);
    inicpila(&MENORES);

    apilar(&LIMITE, 5);
    printf("Pila LIMITE");
    mostrar(&LIMITE);

    printf("Ingreso de valores para la DADA\n");
    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la DADA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(!pilavacia(&DADA)){
        if (tope(&DADA) >= tope(&LIMITE)){
            apilar(&MAYORES, desapilar(&DADA));
        }
        else{
            apilar(&MENORES, desapilar(&DADA));
        }
    }
    printf("Pila MAYORES");
    mostrar(&MAYORES);
    printf("Pila MENORES");
    mostrar(&MENORES);
    */
    ///Ejercicio 14
    /*
    char control = 's';
    bool par = true;
    Pila DADA;
    Pila PAR;
    Pila IMPAR;
    Pila AUX1;
    inicpila(&PAR);
    inicpila(&DADA);
    inicpila(&IMPAR);
    inicpila(&AUX1);

    printf("Ingreso de valores para la DADA\n");
    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la DADA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    while(!pilavacia(&DADA)){
        apilar(&AUX1, desapilar(&DADA));
        par = !par;
    }
    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }

    if (par == true){
        apilar(&PAR, desapilar(&DADA));
        printf("La pila DADA es par:");
        mostrar(&PAR);
    }
    else{
        apilar(&IMPAR, desapilar(&DADA));
        printf("La pila DADA es impar:");
        mostrar(&IMPAR);
    }
    */


    return 0;
}
