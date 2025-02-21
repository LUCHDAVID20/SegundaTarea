// comentario prueba
#include <iostream>
#include "Cliente.cpp"

using namespace std;

main(){
	
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout << "Ingresar nit: ";
	cin>> nit;
	cout << "Ingresar nombres: ";
	cin>> nombres;
	cout << "Ingresar apellidos: ";
	cin>> apellidos;
	cout << "Ingresar direccion: ";
	cin>> direccion;
	cout << "Ingresar telefono: ";
	cin>> telefono;
	
/*	Cliente cliente = Cliente(nombres, apellidos, direccion, telefono, nit);
	
	cliente.mostrar();
	
	cout << "Ingresar nit: ";
	cin>> nit;
	
	cliente.setNit(nit);
		cliente.mostrar();*/
	
	Cliente cliente = Cliente();
	cliente.setNit(nit);
	cliente.setNombre(nombres);
	cliente.setApellidos(apellidos);
	cliente.setDireccion(direccion);
	cliente.setTelefono(telefono);
	cliente.mostrar();
	// muestra solo un dato 
	cout<< cliente.getNit();
}
