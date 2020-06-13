#include "Torre.h"

Torre::Torre(int fil, int col, bool jug):Pieza(fil,col,jug)
{
	if(jug){
		caracter='Y';
	}
	else
	{
		caracter='T';
	}
}

bool Pieza::valid(int fil,int col, Tablero* tab){
	if((fila==fil && (col<columna || col>columna)) || (columna==col && (fil<fila || fil>fila)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Torre::~Torre()
{
}
