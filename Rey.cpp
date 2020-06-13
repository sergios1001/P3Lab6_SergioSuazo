#include "Rey.h"


Rey::Rey(int fil, int col, bool jug):Pieza(fil,col,jug)
{
	if(jug){
		caracter='W';
	}
	else
	{
		caracter='R';
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
	else if(fila==fil && columna+1==col)
	{
		return true;
	}
	else if(fila==fil && columna-1==col)
	{
		return true;
	}
	else if(fila+1==fil && columna==col)
	{
		return true;
	}
	else if(fila-1==fil && columna==col)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Rey::~Rey()
{
}
