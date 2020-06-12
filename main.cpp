#include <iostream>
#include <string>
#include "Chaturanga.h"


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string resp;
	Chaturanga* juego = new Chaturanga();
	do{
		cout<< endl<< endl<< "Desea jugar al Charamusca (no Topogigio)? (1 = si)"<< endl<< ": ";
		
		getline(cin,resp);
		if(resp == "1"){
			juego->jugar();
		}
		else{
			cout<<"Saliendo del programa..."<< endl;
		}
	}while(resp=="1");
	
	delete juego;
	return 0;
}
