#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(int fil,int col,bool jug);
		bool valid(int fil, int col, Tablero* tab);
		~Caballo();
	protected:
};

#endif
