#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"

class Torre : public Pieza
{
	public:
		Torre();
		bool valid(int fil, int col, Tablero* tab);
		~Torre();
	protected:
};

#endif
