#include "Caballo.h"



Caballo::Caballo(int fil, int col, bool jug):Pieza(fil,col,jug)
{
	if(jug){
		caracter='O';
	}
	else
	{
		caracter='C';
	}
}

bool Pieza::valid(int fil,int col, Tablero* tab){
	if(columna-1==col && fila-2==fil)
	{
		return true;
	}
	else if(columna-2==col && fila-1==fil)
	{
		return true;
	}
	else if(columna-2==col && fila+1==fil)
	{
		return true;
	}
	else if(columna-1==col && fila+2==fil)
	{
		return true;
	}
	else if(columna+1==col && fila+2==fil)
	{
		return true;
	}
	else if(columna+2==col && fila+1==fil)
	{
		return true;
	}
	else if(columna+2==col && fila-1==fil)
	{
		return true;
	}
	else if(columna+1==col && fila-2==fil)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Caballo::~Caballo()
{
}
