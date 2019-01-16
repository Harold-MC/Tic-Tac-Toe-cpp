#include <iostream>
/*
Implemente la función GetEstado en contenido en el archivo solucion.cpp
*/
#include "constantes.h"
#include "solucion.h"
#include "logica.h"
#include "constantes.h"

using namespace std;

int main()
{
    IniciarTablero();
    do
    {
        DesplegarTablero();
        CapturarJugada();
        
    }while (GetEstado() == JUEGO_EN_CURSO);
    
    switch(GetEstado()){
        case GANO_X : cout << "Gano la X";
                 break;
        case GANO_O : cout << "Gano la O";
                    break;
        default : cout << "Empate";
                   break;
    }
}
