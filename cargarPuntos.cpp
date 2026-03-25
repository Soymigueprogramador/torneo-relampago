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
        puntos del jugador 1
        puntos del jugador 2
    - en caso de empate
        puntos del jugador 1
        puntos del jugador 2
        son iguales muestra un mensaje de error

    - verifica que no se ingresen dos veces el mismo jugador
    - verifica que no haya empate

    - agrega los puntos a la tabla
*/

// Implementacion de la funcion de cargar puntos
void cargarPuntos(int tabla[4][4])
{
    int jugador1, puntosDelJugador1;
    int jugador2, puntosDelJugador2;

    // Ingreso del número de jugadores
    cout << " Ingrese número del primer jugador (1-4) " << endl;
    cin >> jugador1;

    cout << " Ingrese número del segundo jugador (1-4) " << endl;
    cin >> jugador2;

    // Validación: no pueden ser el mismo jugador
    if (jugador1 == jugador2)
    {
        cout << " ERROR: Tienen que ser 2 jugadores distintos " << endl;
        return;
    }

    // Ingreso de puntos
    cout << " Ingrese los puntos del primer jugador " << endl;
    cin >> puntosDelJugador1;

    cout << " Ingrese los puntos del segundo jugador " << endl;
    cin >> puntosDelJugador2;

    // Validación: no puede haber empate
    if (puntosDelJugador1 == puntosDelJugador2)
    {
        cout << " ERROR: No pueden empatar, tienen que jugar hasta encontrar al ganador " << endl;
        return;
    }

    // Carga de datos en la tabla
    tabla[jugador1 - 1][jugador2 - 1] = puntosDelJugador1;
    tabla[jugador2 - 1][jugador1 - 1] = puntosDelJugador2;
}