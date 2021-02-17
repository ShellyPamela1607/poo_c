//Persona= nomb,app,direc,telf,fechanac,nit,dpi,etc...
//Cliente = nit, etc...

#include <iostream>
using namespace std;
class Persona{
//def. atributos
//metodos de acceso (protected, private,public)
protected : string nombres, apellidos, direccion;
            int telefono;
//constructor (puede tener varios constructores)
public :
Persona(){
}
Persona(string nom, string dire, string ape,int tel){
	nombres = nom;
	apellidos = ape;
	direccion = dire;

			telefono = tel;
}

//metodos
void mostrar();
void mostrarempleado();
};

