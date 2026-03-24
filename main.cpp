#include <iostream>
#include "menu.h"
#include "menu.cpp"
#include "tablero.h"
#include "tablero.cpp"
#include "cargarPuntos.h"
#include "cargarPuntos.cpp"
#include "reiniciar.h"
#include "reiniciar.cpp"

using namespace std;

// ¿ Que hace esta funcion ?
/*
    Muestra el menu y ejecuta tdo el proyecto 
*/

int main()
{

    // Tabla de puntaje
    int tabla[4][4] = {0};

    // Menu de opciones
    int opcion;

    do
    {
        // Mostrar menu y cargar opcion
        opcion = menu();

        // Estructura del menu
        switch (opcion)
        {
        case 1:
            cargarPuntos(tabla);
            break;

        case 2:
            tablero(tabla);
            break;

        case 3:
            reiniciar(tabla);
            break;

        case 0:
            cout << "Chau, gracias por participar " << endl;
            break;

        default:
            cout << "La opcion " << opcion << " es incorrecta" << endl;
            break;
        }
    } while (opcion != 0);

    return 0;
}