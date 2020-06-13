#include "Tablero.h"
#include "Pieza.h"
#include "Infanteria.h"
#include "Torre.h"
#include "Caballo.h"
#include "Elefante.h"
#include "Ministro.h"
#include "Rey.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=8;
	matriz = new Pieza**[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Pieza*[size];
		for(int j=0;j<size;j++){
			matriz[i][j] = NULL;
		}
	}
	matriz[0][0]= new Torre(0,0,false);
	matriz[0][1]= new Caballo(0,1,false);
	matriz[0][2]= new Elefante(0,2,false);
	matriz[0][3]= new Rey(0,3,false);
	matriz[0][4]= new Ministro(0,4,false);
	matriz[0][5]= new Elefante(0,5,false);
	matriz[0][6]= new Caballo(0,6,false);
	matriz[0][7]= new Torre(0,7,false);
	
	for(int i=0;i<8;i++)
	{
		matriz[1][i]= new Infanteria(1,i,false);
	}
	
	for(int i=0;i<8;i++)
	{
		matriz[6][i]= new Infanteria(6,i,true);
	}
	
	matriz[7][0]= new Torre(7,0,true);
	matriz[7][1]= new Caballo(7,1,true);
	matriz[7][2]= new Elefante(7,2,true);
	matriz[7][3]= new Rey(7,3,true);
	matriz[7][4]= new Ministro(7,4,true);
	matriz[7][5]= new Elefante(7,5,true);
	matriz[7][6]= new Caballo(7,6,true);
	matriz[7][7]= new Torre(7,7,true);
}

Tablero::~Tablero(){
	//liberar 9 casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] matriz[i];
	}
	
	delete[] matriz;
		  
}

Pieza*** Tablero::getTab(){
	return matriz;
}		

void Tablero::printTablero(){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]->getChar()<<" ";
		}
	}
		
}
		

