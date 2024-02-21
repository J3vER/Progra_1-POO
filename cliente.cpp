#include "persona.cpp"
#include <iostream>
using namespace std;

class cliente : Persona {
	// atributos
	private : string nit;
	
	// constructor
	public : 
	cliente (){
	}
	
	cliente(string nom,string ape,string dir,int tel, string n) : Persona(nom,ape,dir,tel){
		nit = n;
		
	}
	// metodos
	// set (modificar)
	void setnit(string n){nit = n;}
	void setnombres(string nom){nombres = nom;}
	void setapellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void settelefono(int tel){telefono = tel;}
	// get (mostrar)
	 string getnit(){return nit;}
	 string getnombres(){return nombres;}
	 string getapellidos(){return apellidos;}
	 string getdireccion(){return direccion;}
	 int gettelefono(){return telefono;}
	// metodos
	void mostrar(){
		cout<<"______________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
