#ifndef REY_H
#define REY_H

#include "Pieza.h"

class Rey : public Pieza
{
	public:
		Rey();
		bool valid(int fil, int col, Tablero* tab);
		~Rey();
	protected:
};

#endif
