#pragma once
#include "Persona.h"
#include <iostream>

using namespace std;

class Alumno :public Persona {
private://Atributos
	string grupo;
	int numeroLista;
public://M�todos
	Alumno(string, string, string, string, int);//Constructor
	~Alumno();//Destructor
	//void mostrarInfo();

};