#include <iostream>
#include "reiniciar.h"

using namespace std;

// ¿ Que hace esta funcion ?
/*
    Al ingresar a la "opcion 3" se borran todos los puntajes que se agregaron antes,
    nasicamente el torneo inicia de nuevo
*/


int reiniciar(int tabla[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tabla[i][j] = 0;
        }
    }

    cout << "Nuevo torneo." << endl;
}