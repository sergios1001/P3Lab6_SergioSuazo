#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"


class Tablero
{
	public:
		Tablero();
		
		void printTablero();
		
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		Pieza*** matriz; 
		int size;
};

#endif
