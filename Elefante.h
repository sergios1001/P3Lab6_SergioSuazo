#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Pieza.h"

class Elefante : public Pieza
{
	public:
		Elefante(int fil,int col,bool jug);
		bool valid(int fil, int col, Tablero* tab);
		~Elefante();
	protected:
};

#endif
