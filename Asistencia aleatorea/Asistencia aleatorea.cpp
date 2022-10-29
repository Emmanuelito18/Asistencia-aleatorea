///////////////////////////////
//Inclusión de librerias
#ifdef _WIN32
#include <Windows.h>
#include <conio.h>
#endif

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctime>
///////////////////////////////

//////////////////////////////////
//indicación de función
using namespace std;
////////////////////////////////////

////////////////////////////////////
//Creación de estructuras

////////////////////////////////////

/////////////////////////////////////
//prototipado de funciones
int* Randomizer();
bool verificar(int num, int numeros[]);
void asistencia(int numeros[]);
////////////////////////////////////

/////////////////////////////////////////
//declaración de variables globales
int num = 0, numeros[15];
unsigned short int pos = 0;
////////////////////////////////////////

//////////////////////////////
//inicio del código principal del programa
int main() {
	/////////////////////////////
	//inicio del programa
	cout << "Este programa decide de forma aleatorea que alumno toma clases presenciales y que alumno virtuales" << endl;
	cout << "Los alumnos que no salgan sorteados, tendran que tomar clase virtual" << endl;
	cout << "Creado por: Mej¡a Casta¤eda Bryan Emmanuel" << endl;
	cout << "Recuerda que s¡ puedes imaginarlo, puedes programarlo." << endl << endl;

	cout << "Versi¢n alpha 0.1.0" << endl;
	cout << "En futuras actualizaciones se har  una interfaz gr fica, as¡ como utilizar bases de datos para almacenar a los alumnos" << endl << endl;
	/////////////////////////////

	/////////////////////////////
	//Declaración de variables locales

	////////////////////////////

	////////////////////////////
	//declaración de arreglos(vectores unidimencionales)

	///////////////////////////

	////////////////////////////////
	//declaración de matriz o tablas(vectores bidimencionales)

	///////////////////////////////

	/////////////////////////////// 
	//declaración de cadenas

	///////////////////////////////

	//////////////////////////////
	//delcaración de punteros

	//////////////////////////////

	//////////////////////////////
	//Cuerpo del programa
	int inicio = 17, final = 32;
	int* Randomizer();
	//No se ejecuta el resto del código

	/*
	int* lista = generar_lista_desordenada(principio, fin);

	for (int i = 0; i < fin; i++) {
		std::cout << lista[i] << " ";
	}
	std::cout << std::endl;
*/
//////////////////////////////

//////////////////////////////
//parte final del código	
#ifdef _WIN32
	system("pause");
#else
	getch();
#endif
	return 0;
	//////////////////////////////
}
//fin del código principal del programa
//////////////////////////////

//////////////////////////////////////////
//definición de funciones

int* Randomizer() {

	//Función que se encarga de generar los números de lista de los alumnos de forma aleatoria
	for (int i = 0; i < 15; i++) {
		//inicia la estructura repetitiva for
		while (verificar(num, numeros)) {
			//inicia la estructura repetitiva while que llama a la función verificar con dichos argumentos
			num = 1 + rand() % 31;
			//genera un número aleatoreo entre el 1 y el 31 y lo guarda en la variable de tipo entera llamada num
		}
		//termina la estrucutra repetitiva while
		numeros[i] = num;
		//asigna el valor de num a el espacio correspondiente del arreglo según el valor de i
	}
	//termina la estructura repetitiva for
	num = 0;
	//Le asigna el valor 0 a la variable num
	//return numeros;
	asistencia(numeros);
}

bool verificar(int num, int numeros[]) {
	//función que se encarga de verificar si ya existe el número
	for (int i = 0; i < 15; i++) {
		/*
		Inicia la estructura repetitiva for que se encarga de aumentar el valor de i, la cual se usa
		para recorrer la posición actual del arreglo
		*/
		if (num == numeros[i]) {
			/*
			Inicia la estructura comparativa if que compara si num es es igual a el valor que tenga el
			arreglo en la posición actual
			*/
			return true;
			//si el número ya existe en el arreglo se retorna un booleano "True"
		}
		/*
		Termina la estructura comparativa
		*/
	}
	return false;
	//se retornará "false en cado que el número no se encuentre en el arreglo, en ese caso es por que no se repite
}

void asistencia(int numeros[]) {
	/*
	Función que se encarga de mostrar que alumno tiene que asistir a clases
	*/
	for (int i = 0; i < 15; i++) {
		/*
		Inicia la estructura repetitiva for que se encarga de recorrer la posición actual del arreglo numeros
		*/
		int pos = numeros[i];
		switch (numeros[i]) {
		case 1: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 2: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 3: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 4: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 5: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 6: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 7: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 8: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 9: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 10: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 11: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 12: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 13: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 14: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 15: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 16: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 17: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 18: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 19: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 20: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 21: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 22: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 23: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 24: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 25: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 26: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 27: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 28: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 29: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 30: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 31: cout << "El alumno n£mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		default: cout << "Error alumno no v lido" << endl;
			break;
		}
	}
}
/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realización sobre cosas busca en
Programación ATS o en cualquier video de internet, o páginas de documentación sobre
programación en C++
*/
///////////////////////////////
#define prueba _prueba