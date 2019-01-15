#include "constantes.h"
#include "solucion.h"
#include "logica.h"


#include <iostream>
using namespace std;

/*
* Implementar esta función.
* Dependiendo el estado del juego esta debe retornar:  

GANO_X: Si Ha ganado el jugador X
GANO_O: Si Ha ganado el jugador O
EMPATE: Si ya se llenaron todas las casillas y no hay ganador
JUEGO_EN_CURSO: Si el juego aún no se ha terminado.
*/



int GetEstado()
{
    /*
    Puedes acceder a las casillas del tablero mediante el arreglo de 
    dos dimensiones tablero.  

    Los índices empiezan en cero, de modo que puedes acceder a la segunda fila, primera columna 
    de la siguiente manera:
    tablero[1][0]
    */
    
    
    
    char** tablero = GetTablero();
    
    for(int i = 0;i < 3;i++){
        
        int g_v = 0;
        int g_h = 0;
        
        for(int x = 2;x >= 0;x++){
            
            if(tablero[i][x] == 'x'){
                g_h++;
                
                if(g_h == 3){  //intentr sacar este if por si no funciona
                   return GANO_X;
                }
            }
            
            if(tablero[x][i] == 'x'){
                g_h++;
                
                if(g_h == 3){  //intentr sacar este if por si no funciona
                   return GANO_X;
                }
            }
            
            
            
        }
    }

    return JUEGO_EN_CURSO;
}
