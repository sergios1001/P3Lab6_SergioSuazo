#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Pieza.h"

class Elefante : public Pieza
{
	public:
		Elefante();
		bool valid(int fil, int col, Tablero* tab);
		~Elefante();
	protected:
};

#endif
