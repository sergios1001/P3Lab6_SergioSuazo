#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Pieza.h"

class Infanteria : public Pieza
{
	public:
		Infanteria(int fil,int col,bool jug);
		
		bool valid(int fil, int col, Tablero* tab);
		
		~Infanteria();
	protected:
};

#endif
