#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro();
		bool valid(int fil, int col, Tablero* tab);
		~Ministro();
	protected:
};

#endif
