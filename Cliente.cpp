#include "Persona.cpp"
#include <iostream>


using namespace std;

class Cliente : Persona {
	
	private: string nit;
	
	public: 
	Cliente (){
		
	}
	 
	 Cliente(string nom, string ape, string dire, int tel, string n): Persona(nom, ape, dire, tel){
		nit = n; 
	 	
	 }
	 // metodos
	 
//	 set modificar get mostar

void setNit (string n){
	nit = n;
}
void setNombre (string nom){
	nombres = nom;
}
void setApellidos (string ape){
	apellidos = ape;
}
void setDireccion (string dire){
	direccion = dire;
}
void setTelefono (int tel){
	telefono = tel;
}

// mostrar get 

string getNit(){
	return nit;
}
	string getNombres(){
	return nombres;
}
string getApellidos(){
	return apellidos;
}
string getDireccion(){
	return direccion;
}
int getTelefono(){
	return telefono;
}
	 void mostrar (){
	 	
	 	cout <<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<< endl;
	 	
	 }
};
