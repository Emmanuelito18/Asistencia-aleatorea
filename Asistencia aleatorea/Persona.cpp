#include "Persona.h"

/*Constructor*/
Persona::Persona(string aPaterno,string aMaterno, string _nombre) {
	apellidoPaterno = aPaterno;
	apellidoMaterno = aMaterno;
	nombre = _nombre;
}

/*Destructor*/
Persona::~Persona() {

}

virtual void Persona::mostrarInfo() {

}