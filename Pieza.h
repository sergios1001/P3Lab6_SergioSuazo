#ifndef PIEZA_H
#define PIEZA_H
class Tablero;

class Pieza
{
	public:
		Pieza(int fil,int col,bool jug);
		bool movimiento(int, int, Tablero*);
		char getChar();
		bool getJugador();
		virtual bool valid(int, int ,Tablero*)=0;
		bool validarBordes(int ,int );
		
		
		~Pieza();
	protected:
		
		int fila;
		int columna;
		char caracter;
		bool jugador;
		
};

#endif
