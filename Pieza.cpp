#include "Pieza.h"
#include <iostream>

Pieza::Pieza(int fil, int col,bool jug)
{
	fila = fil;
	columna = col;
	jugador = jug;
}

bool Pieza::validarBordes(int fil, int col){
	return (fil>=0 && fil<=8) && (col>=0 && col<=8);
}

char Pieza::getChar(){
	return caracter;
}

bool Pieza::getJugador(){
	return jugador;
}

bool Pieza::movimiento(int fil, int col, Tablero* tab)
{
	if(valid(fil, col, tab)){
		
		if(Pieza* p = tab[fil][col])
		{
			delete p;
			tab[fil][col] = NULL;
		}
		
		tab[fil][col] = tab [fila][columna];
		tab[fila][columna] = NULL;
		fila = fil;
		columna = col;
	}
}

bool Pieza::valid(int fil,int col, Tablero* tab){
	return false;
}

Pieza::~Pieza()
{
}
