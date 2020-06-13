#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"


class Tablero
{
	public:
		Tablero();
		
		void printTablero();
		Pieza*** getTab();
		
		~Tablero();
	protected:
		Pieza*** matriz; 
		int size;
};

#endif
