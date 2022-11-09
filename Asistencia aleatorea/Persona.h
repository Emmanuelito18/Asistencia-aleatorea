#pragma once
#include <iostream>

using namespace std;

class Persona{
	protected://Atributos
		string apellidoPaterno;
		string apellidoMaterno;
		string nombre;
	public://Métodos
		Persona(string,string,string);//Constructor
		~Persona();//Destructor
		virtual void mostrarInfo();
};

