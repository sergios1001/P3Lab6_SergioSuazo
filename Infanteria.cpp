#include "Infanteria.h"
#include "Tablero.h"

Infanteria::Infanteria(int fil, int col, bool jug):Pieza(fil,col,jug)
{
	if(jug){
		caracter='L';
	}
	else
	{
		caracter='I';
	}
}


bool Pieza::valid(int fil,int col, Tablero* tab){
	if(fila+1 == fil  && columna+1 == col)
	{
		return true;
	}
	else if(Pieza* p = tab->getTab()[fil][col])
	{
		return true;
	}
	else
	{
		return false;
	}
}

Infanteria::~Infanteria()
{
}
