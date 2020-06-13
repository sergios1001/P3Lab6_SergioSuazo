#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro(int fil, int col, bool jug);
		bool valid(int fil, int col, Tablero* tab);
		~Ministro();
	protected:
};

#endif
