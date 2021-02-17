#include "Persona.cpp"

#include <iostream>

using namespace std;

class Empleado : Persona{
	//atributos
	private : string codigo,sueldo,puesto;
	
	//constructor
	public :
	Empleado(){
		
	}
	
	Empleado (string nom, string ape, string dire, int tel, string cod, string suel, string puest) : Persona(nom,ape,dire,tel){
		codigo = cod;
		sueldo = suel;
		puesto = puest;
	}  
	
	
	void mostrarempleado (){
		cout<<"______________"<<endl;
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo<<","<<sueldo<<","<<puesto<<endl;
	}

};
