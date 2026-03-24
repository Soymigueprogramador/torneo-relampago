#include <iostream>
#include "cargarPuntos.h"

using namespace std;

// ¿ Que hace esta funcion ?
/*
    Al ingresar a la "opcion 2" nos pedira que ingresemos:
    - numero de los jugadores
        jugador 1
        jugador 2
    - puntos de los jugadores
        puntos del jugador 1 = 3
        puntos del jugador 2 = 0

    - verifica que no se ingresen dos veces el mismo jugador

    - agrega los puntos a la tabla
*/

// Implementacion de la funcion de cargar puntos
void cargarPuntos(int tabla[4][4])
{
    int jugador1, puntosDelJugador1;
    int jugador2, puntosDelJugador2;

    cout << " Ingrese número del primer jugador (1-4) " << endl;
    cin >> jugador1;

    cout << " Ingrese número del segundo jugador (1-4) " << endl;
    cin >> jugador2;

    if (jugador1 == jugador2)
    {
        cout << " ERROR: Tienen que ser 2 jugadores distintos " << endl;
        return;
    }

    cout << " Ingrese los puntos del primer jugador " << endl;
    cin >> puntosDelJugador1;

    cout << " Ingrese los puntos del segundo jugador " << endl;
    cin >> puntosDelJugador2;

    tabla[jugador1 - 1][jugador2 - 1] = puntosDelJugador1;
    tabla[jugador2 - 1][jugador1 - 1] = puntosDelJugador2;
}