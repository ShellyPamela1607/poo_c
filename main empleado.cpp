#include "Empleado.cpp"
#include <iostream>

using namespace std;
main(){
	string nombres,apellidos,direccion,codigo,sueldo,puesto;
	int telefono;
	
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	
	// instanciar un objeto
	Empleado e1 = Empleado(nombres,apellidos,direccion,telefono,codigo,sueldo,puesto);
	e1.mostrarempleado();
}
