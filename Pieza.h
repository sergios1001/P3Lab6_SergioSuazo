#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	public:
		Pieza(int fil,int col,bool jug);
		bool movimiento(int fil, int col, Tablero* tab);
		char getChar();
		bool getJugador();
		
		~Pieza();
	protected:
		
		int fila;
		int columna;
		char caracter;
		bool jugador;
		
		bool validarBordes(int fil,int col);
		virtual bool valid(int fil, int col,Tablero* tab)=0;
};

#endif
