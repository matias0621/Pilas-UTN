#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pila.h"

int main()
{
    ///Ejercicio 1
    /*
    char control = 's';
    int suma = 0;
    Pila DADA;
    inicpila(&DADA);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(!pilavacia(&DADA)){
        suma = suma + desapilar(&DADA);
    }
    printf("El total de la suma de los numeros es de: %d", suma);
    */
    ///Ejercicio 2
    /*
    char control = 's';
    int contador = 0;
    Pila DADA;
    inicpila(&DADA);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    while(!pilavacia(&DADA)){
        contador++;
        desapilar(&DADA);
    }
    printf("El total de numeros en la pila es de: %d", contador);
    */
    ///Ejercicio 3
    /*
    char control = 's';
    int suma = 0;
    int promedio = 0;
    int dividiendo = 0;
    Pila DADA;
    inicpila(&DADA);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
        dividiendo++;
    }
    while(!pilavacia(&DADA)){
        suma = suma + desapilar(&DADA);
    }
    promedio = suma / dividiendo;
    printf("El promedio de la pila es de: %d", promedio);
    */
    ///Ejercicio 4
    /*
    int dato_buscar = 0;
    bool dato_encontrado = false;
    Pila DADA;
    Pila AUX1;
    inicpila(&DADA);
    inicpila(&AUX1);

    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);


    printf("Que numero quieres buscar en la pila DADA?\n");
    fflush(stdin);
    scanf("%d", &dato_buscar);

    while(!pilavacia(&DADA) && dato_encontrado == false){
        if (tope(&DADA) == dato_buscar){
            printf("Se encontro el dato que estabas buscando %d, esta en el tope de la pila", dato_buscar);
            dato_encontrado = true;
        }
        else{
            apilar(&AUX1, desapilar(&DADA));
        }
    }
    */
    ///Ejercicio 5
    /*
    int dato_buscar = 0;
    bool dato_eliminado = false;
    Pila DADA;
    Pila AUX1;
    inicpila(&DADA);
    inicpila(&AUX1);

    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);
    mostrar(&DADA);

    printf("Que numero quieres eliminar en la pila DADA?\n");
    fflush(stdin);
    scanf("%d", &dato_buscar);

    while(!pilavacia(&DADA) && dato_eliminado == false){
        if (tope(&DADA) == dato_buscar){
            printf("Se elimino el dato");
            desapilar(&DADA);
            dato_eliminado = true;
        }
        else{
            apilar(&AUX1, desapilar(&DADA));
        }
    }
    while(!pilavacia(&DADA)){
        apilar(&AUX1, desapilar(&DADA));
    }
    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }
    mostrar(&DADA);
    if (dato_eliminado == false){
        printf("Ese dato no se encontro en la pila");
    }
    */
    ///Ejercicio 6
    /*
    char control = 's';
    int es_capicua = 1;
    Pila DADA;
    Pila DADA_INVERTIDA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&DADA_INVERTIDA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    while(control == 's'){
        leer(&DADA);
        printf("¿Quieres seguir cargando datos en la pila DADA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    mostrar(&DADA);
    printf("Vamos a ver si es capicua \n");

    while(!pilavacia(&DADA)){
        apilar(&DADA_INVERTIDA, tope(&DADA));
        apilar(&AUX1, desapilar(&DADA));
    }

    while(!pilavacia(&AUX1)){
        apilar(&DADA, desapilar(&AUX1));
    }

    mostrar(&DADA_INVERTIDA);

    while(!pilavacia(&DADA) && es_capicua == 1){
        if (tope(&DADA) == tope(&DADA_INVERTIDA)){
            es_capicua = 1;
        }
        else{
            es_capicua = 0;
        }
        apilar(&AUX1, desapilar(&DADA));
        apilar(&AUX2, desapilar(&DADA));
    }
    if (es_capicua == 1){
        printf("Si es capicua");
    }
    else{
        printf("No es capicua");
    }
    */
    ///Ejercicio 7
    /*
    char control = 's';
    int tamanio_pila_b = 0;
    int contador = 0;
    Pila pilaA;
    Pila pilaB;
    Pila pilaC;
    Pila AUX1;
    Pila AUX2;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&pilaC);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("Cargue los datos del conjunto de la pilaA: \n");
    while(control == 's'){
        leer(&pilaA);
        printf("¿Quieres seguir cargando datos en la pilaA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }

    control = 's';

    printf("Cargue los datos del conjunto de la pilaB: \n");
    while(control == 's'){
        leer(&pilaB);
        printf("¿Quieres seguir cargando datos en la pilaB? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
        tamanio_pila_b++;
    }
    printf("%d", tamanio_pila_b);
    while(!pilavacia(&pilaA) && !pilavacia(&pilaB)){
        if (tope(&pilaA) == tope(&pilaB)){
            desapilar(&pilaB);
            tamanio_pila_b--;
        }
        else{
            apilar(&AUX1, desapilar(&pilaB));
        }
        contador++;
        if (contador >= tamanio_pila_b){
            apilar(&AUX2, desapilar(&pilaA));

            while(!pilavacia(&AUX1)){
                apilar(&pilaB, desapilar(&AUX1));
            }
            contador = 0;
        }
    }

    while(!pilavacia(&AUX1)){
        apilar(&pilaB, desapilar(&AUX1));
    }

    while(!pilavacia(&AUX2)){
        apilar(&pilaA, desapilar(&AUX2));
    }

    while(!pilavacia(&pilaA)){
        apilar(&pilaC, desapilar(&pilaA));
    }
    while(!pilavacia(&pilaB)){
        apilar(&pilaC, desapilar(&pilaB));
    }
    printf("PilaC:");
    mostrar(&pilaC);
    */
    ///Ejercicio 8
    /*
    char control = 's';
    Pila ORDENADA1;
    Pila ORDENADA2;
    Pila AUX1;
    Pila AUX2;
    Pila AUX3;
    Pila AUX4;
    Pila ORDENADAFINAL;
    inicpila(&ORDENADA1);
    inicpila(&ORDENADA2);
    inicpila(&ORDENADAFINAL);
    inicpila(&AUX1);
    inicpila(&AUX2);
    inicpila(&AUX3);
    inicpila(&AUX4);


    int pasar_tope = 0;

    printf("Cargue los datos de la pila ORDENADA1: \n");
    while(control == 's'){
        leer(&ORDENADA1);
        printf("¿Quieres seguir cargando datos en la pilaA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }
    control = 's';
    printf("Cargue los datos de la pila ORDENADA2: \n");
    while(control == 's'){
        leer(&ORDENADA2);
        printf("¿Quieres seguir cargando datos en la pilaA? Presione s si quiere seguir \n");
        fflush(stdin);
        scanf("%c", &control);
    }



    while(!pilavacia(&ORDENADA1)){
        if (pasar_tope == 0){
            apilar(&AUX1, desapilar(&ORDENADA1));
        }

        if (tope(&ORDENADA1) <= tope(&AUX1)) {
            apilar(&AUX2, desapilar(&ORDENADA1));
        }
        else{
            apilar(&AUX2, desapilar(&AUX1));
        }
        pasar_tope++;
    }

    pasar_tope = 0;

    while(!pilavacia(&ORDENADA2)){
        if (pasar_tope == 0){
            apilar(&AUX3, desapilar(&ORDENADA2));
        }

        if (tope(&ORDENADA2) <= tope(&AUX3)) {
            apilar(&AUX4, desapilar(&ORDENADA2));
        }
        else{
            apilar(&AUX4, desapilar(&AUX3));
        }
        pasar_tope++;
    }


    while(!pilavacia(&AUX2) || !pilavacia(&AUX4)){
        if (tope(&AUX2) <= tope(&AUX4)) {
            apilar(&ORDENADAFINAL, desapilar(&AUX2));
        }
        else{
            apilar(&ORDENADAFINAL, desapilar(&AUX4));
        }
    }
    mostrar(&ORDENADAFINAL);
    */

    ///Ejercicio 9
    int suma = 0;
    int acumulador = 0;
    int turno = true;
    Pila MAZO;
    Pila JUGADOR1;
    Pila JUGADOR2;
    Pila PUNTOSJUGADOR1;
    Pila PUNTOSJUGADOR2;
    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);
    inicpila(&PUNTOSJUGADOR1);
    inicpila(&PUNTOSJUGADOR2);

    printf("ponga los valores de 4 cartas \n");
    while(suma < 4){
        leer(&MAZO);
        suma++;
    }

    while(!pilavacia(&MAZO)){
        if (turno == true){
            apilar(&JUGADOR1, desapilar(&MAZO));
        }
        else{
            apilar(&JUGADOR2, desapilar(&MAZO));
        }
        turno = !turno;
    }

    while(!pilavacia(&JUGADOR1)){
        acumulador += desapilar(&JUGADOR1);
    }

    apilar(&PUNTOSJUGADOR1, acumulador);
    acumulador = 0;

    while(!pilavacia(&JUGADOR2)){
        acumulador += desapilar(&JUGADOR2);
    }
    apilar(&PUNTOSJUGADOR2, acumulador);

    if (tope(&PUNTOSJUGADOR1) > tope(&PUNTOSJUGADOR2)){
        printf("El ganador es el jugador 1 con %d", tope(&PUNTOSJUGADOR1));
    }
    else if (tope(&PUNTOSJUGADOR1) < tope(&PUNTOSJUGADOR2)){
        printf("El ganador es el jugador 2 con %d", tope(&PUNTOSJUGADOR2));
    }
    else{
        printf("El ganador es el jugador 1");
    }




    return 0;
}
