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
    char letras[2] = {'X', 'O'};
    int status = JUEGO_EN_CURSO;
    
    for(int k = 0; k < 2;k++){
    
    for(int i = 0;i < 3;i++){
        
        int g_v = 0;
        int g_h = 0;
        int g_d_d = 0;
        int g_d_i = 0;
        
        for(int x = 0;x < 3;x++){
          
            if(tablero[i][x] == letras[k]){
                g_h++;
 
            }
            
            if(tablero[x][i] == letras[k]){
                g_v++;
            }
            
            if(tablero[i][2 - x] == letras[k]){
                g_d_d++;
                
            }
            
            if(tablero[x][x] == letras[k]){
                g_d_i++;
                
            }
            
            
             if(g_h == 3 || g_v == 3 || g_d_i == 3 || g_d_d == 3){
                 if(k == 0){
                     return GANO_X;
                 }else{
                     return GANO_O;
                 }
            }
  
        }
        
    }
        
        
    }
    return status;
    

}
