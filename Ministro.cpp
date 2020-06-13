#include "Ministro.h"


Ministro::Ministro(int fil, int col, bool jug):Pieza(fil,col,jug)
{
	if(jug){
		caracter='P';
	}
	else
	{
		caracter='M';
	}
}

bool Pieza::valid(int fil,int col, Tablero* tab){
	if(fila-1==fil && columna-1==col)
	{
		return true;
	}
	else if(fila-1==fil && columna+1==col)
	{
		return true;
	}
	else if(fila+1==fil && columna-1==col)
	{
		return true;
	}
	else if(fila+1==fil && columna+1==col)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Ministro::~Ministro()
{
}
