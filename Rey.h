#ifndef REY_H
#define REY_H

#include "Pieza.h"

class Rey : public Pieza
{
	public:
		Rey(int fil, int col, bool jug);
		bool valid(int fil, int col, Tablero* tab);
		~Rey();
	protected:
};

#endif
