#include <iostream>
#include "tablero.h"
using namespace std;

// ¿ Que hace esta funcion ?
/*
    Al ingresar a la "opcion 2" muestra la tabla de puntos
    separadas en fijas y columnas
*/

void tablero(int tabla[4][4])
{
    // Encabezado
    cout << "    J1  J2  J3  J4" << endl;

    // Filas
    for (int i = 0; i < 4; i++)
    {
        // Nombre de la fila
        cout << "J" << i + 1 << "  ";

        // Columnas
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                cout << "-   ";
            }
            else
            {
                cout << tabla[i][j] << "   ";
            }
        }

        cout << endl; 
    }
}