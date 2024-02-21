#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar nit: ";
	cin>>nit;
	cout<<"Ingresar nombres: ";
	cin>>nombres;
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar direccion: ";
	cin>>direccion;
	cout<<"Ingresar telefono: ";
	cin>>telefono;
	// instancia de un objeto
	cliente obj = cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar nit:";
	cin>>nit;
	obj.setnit(nit);
	obj.mostrar();	
}