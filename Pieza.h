#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	public:
		Pieza(int fil,int col,Pieza*** tab,bool jug);
		bool movimiento(int fil, int col);
		char getChar();
		bool getJugador();
		~Pieza();
	protected:
		
		Pieza*** tablero;
		int fila;
		int columna;
		char caracter;
		bool jugador;
		
		bool validarBordes(int fil,int col);
		virtual bool valid(int fil, int col)=0;
};

#endif
