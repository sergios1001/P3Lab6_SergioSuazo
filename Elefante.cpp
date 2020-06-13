#include "Elefante.h"


Elefante::Elefante(int fil, int col, bool jug):Pieza(fil,col,jug)
{
;
	
	if(jug){
		caracter='3';
	}
	else
	{
		caracter='E';
	}
}

bool Pieza::valid(int fil,int col, Tablero* tab){
	if(fila-2==fil && columna-2==col){
		return true;
	}
	else if(fila-2==fil && columna+2==col){
		return true;
	}
	else if(fila+2==fil && columna-2==col){
		return true;
	}
	else if(fila+2==fil && columna+2==col){
		return true;
	}
	else
	{
		return false;
	}
}

Elefante::~Elefante()
{
}
