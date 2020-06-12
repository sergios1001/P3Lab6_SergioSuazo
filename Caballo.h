#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo();
		bool valid(int fil, int col, Tablero* tab);
		~Caballo();
	protected:
};

#endif
