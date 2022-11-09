#include "Alumno.h"

/*Constructor*/
Alumno::Alumno(string aPaterno,string aMaterno,string _nombre,string _grupo,int lista):Persona(aPaterno,aMaterno,_nombre) {
	grupo = _grupo;
	numeroLista = lista;
}

/*Destructor*/
Alumno::~Alumno() {

}

Alumno::mostrarInfo() {
	Persona::mostrarInfo();
}