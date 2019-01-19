#include <iostream>
/*
Implemente la función GetEstado en contenido en el archivo solucion.cpp
*/
#include "constantes.h"
#include "solucion.h"
#include "logica.h"

using namespace std;

int main()
{
    IniciarTablero();
    do
    {
        DesplegarTablero();
        CapturarJugada();
        
    }while (GetEstado() == JUEGO_EN_CURSO);
}
