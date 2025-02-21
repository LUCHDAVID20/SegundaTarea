#include <iostream>

using namespace std;

class Persona {
	protected : string nombres, apellidos, direccion;
		 int telefono;
		 
		 
	protected :
	Persona (){
		
	}
	Persona (string nom, string ape, string dire, int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dire;
		telefono = tel;
		
	}	 
		 void mostrar ();
		 
};
