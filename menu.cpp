#include <iostream>
#include "menu.h"

using namespace std;

// ¿ Que hace esta funcion ?
/*
    Al ejecutar el programa se muestra este menu e opciones,
    el mismo ejecuta la iocion ingresada y muestra la funcionalidad asociada al dicha opcion.
    EJEMPLO:
    Opcion 1: Permite cargar el numero de jugadores y la cantidad de puntos de ambos.
*/

// Implementacion de la funcion del menu
int menu() {
    cout << " -------------------------------------- " << endl;
    cout << " ---------- TORNEO RELAMPAGO ---------- " << endl;
    cout << " -------------------------------------- " << endl;
    cout << " 1) Cargar puntos    " << endl;
    cout << " 2) Mostrar tabla    " << endl;
    cout << " 3) Reiniciar torneo " << endl;
    cout << " 0) Salir            " << endl;
    cout << " -------------------------------------- " << endl;

    int opcion;
    cin >> opcion;
    return opcion;
}