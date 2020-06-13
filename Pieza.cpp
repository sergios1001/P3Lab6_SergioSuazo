#include "Pieza.h"
#include "Tablero.h"
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
		
		if(Pieza* p = tab->getTab()[fil][col])
		{
			delete p;
			tab->getTab()[fil][col] = NULL;
		}
		
		tab->getTab()[fil][col] = tab->getTab()[fila][columna];
		tab->getTab()[fila][columna] = NULL;
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
