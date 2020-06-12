#include "Pieza.h"
#include <iostream>

Pieza::Pieza(int fil, int col,Pieza*** tab,bool jug)
{
	fila = fil;
	columna = col;
	tablero = tab;
	jugador = jug;
}

bool Pieza::validarBordes(int fil, int col){
	return (fil>=0 && fil<=8) && (col>=0 && col<=8);
}

char Pieza::getChar(){
	return character;
}

bool Pieza::getJugador(){
	return jugador;
}

bool Pieza::movimiento(int fil, int col)
{
	if(valid(fil, col)){
		
		if(Pieza* p = tablero[fil][col])
		{
			delete p;
			tablero[fil][col] = NULL;
		}
		
		tablero[fil][col] = tablero [fila][columna];
		tablero[fila][columna] = NULL;
		fila = fil;
		columna = col;
	}
}

bool Pieza::valid(int fil,int col){
	return false;
}


Pieza::~Pieza()
{
}
