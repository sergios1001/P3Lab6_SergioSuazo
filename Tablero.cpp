#include "Tablero.h"

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

void Tablero::printTablero(){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]->getChar()<<" ";
		}
	}
		
}
		

