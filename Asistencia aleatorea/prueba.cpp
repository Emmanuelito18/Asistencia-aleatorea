///////////////////////////////
//Inclusi�n de librerias
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
//indicaci�n de funci�n
using namespace std;
////////////////////////////////////

////////////////////////////////////
//Creaci�n de estructuras

////////////////////////////////////

/////////////////////////////////////
//prototipado de funciones

//int Randomizer(void);
bool verificar(int num, int numeros[]);
//void asistencia(int numeros[]);

////////////////////////////////////

/////////////////////////////////////////
//declaraci�n de variables globales

////////////////////////////////////////

//////////////////////////////
//inicio del c�digo principal del programa
int main() {
	/////////////////////////////
	//inicio del programa
	cout << "Este programa decide de forma aleatorea que alumno toma clases presenciales y que alumno virtuales" << endl;
	cout << "Los alumnos que no salgan sorteados, tendran que tomar clase virtual" << endl;
	cout << "Creado por: Mej�a Casta�eda Bryan Emmanuel" << endl;
	cout << "Recuerda que s� puedes imaginarlo, puedes programarlo." << endl << endl;

	cout << "Versi�n alpha 0.1.0" << endl;
	cout << "En futuras actualizaciones se har� una interfaz gr�fica, as� como utilizar bases de datos para almacenar a los alumnos" << endl << endl;
	/////////////////////////////

	/////////////////////////////
	//Declaraci�n de variables locales
	int num = 0, numeros[15];
	unsigned short int pos = 0;
	////////////////////////////

	////////////////////////////
	//declaraci�n de arreglos(vectores unidimencionales)

	///////////////////////////

	////////////////////////////////
	//declaraci�n de matriz o tablas(vectores bidimencionales)

	///////////////////////////////

	/////////////////////////////// 
	//declaraci�n de cadenas

	///////////////////////////////

	//////////////////////////////
	//delcaraci�n de punteros

	//////////////////////////////

	//////////////////////////////
	//Cuerpo del programa
	//C�digo de randomizer
	cout << "Un momento, se est�n generando los alumnos de forma aleatorea, por favor espere un momento" << endl << endl;
	for (int i = 0; i < 15; i++) {
		//inicia la estructura repetitiva for
		while (verificar(num, numeros)) {
			//inicia la estructura repetitiva while que llama a la funci�n verificar con dichos argumentos
#ifdef _WIN32
			Sleep(2000);
#else
			sleep(2000);
#endif
			num = 1 + rand() % 31;
			//genera un n�mero aleatoreo entre el 1 y el 31 y lo guarda en la variable de tipo entera llamada num
		}
		//termina la estrucutra repetitiva while
		numeros[i] = num;
		//asigna el valor de num a el espacio correspondiente del arreglo seg�n el valor de i
	}
	//termina la estructura repetitiva for
	num = 0;
	//Le asigna el valor 0 a la variable num


	//c�digo de asistencia
	for (int i = 0; i < 15; i++) {
		/*
		Inicia la estructura repetitiva for que se encarga de recorrer la posici�n actual del arreglo numeros
		*/
		int pos = numeros[i];
		switch (numeros[i]) {
		case 1: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 2: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 3: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 4: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 5: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 6: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 7: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 8: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 9: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 10: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 11: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 12: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 13: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 14: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 15: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 16: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 17: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 18: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 19: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 20: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 21: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 22: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 23: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 24: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 25: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 26: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 27: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 28: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 29: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 30: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		case 31: cout << "El alumno n�mero: " << pos << " tiene que asistir a clases presenciales" << endl << endl;
			break;
		default: cout << "Error alumno no v�lido" << endl;
			break;
		}
	}

	/*
	int* lista = generar_lista_desordenada(principio, fin);

	for (int i = 0; i < fin; i++) {
		std::cout << lista[i] << " ";
	}
	std::cout << std::endl;
*/
//////////////////////////////

//////////////////////////////
//parte final del c�digo	
#ifdef _WIN32
	system("pause");
#else
	getch();
#endif
	return 0;
	//////////////////////////////
}
//fin del c�digo principal del programa
//////////////////////////////

//////////////////////////////////////////
//definici�n de funciones
/*
int Randomizer(){
	//Funci�n que se encarga de generar los n�meros de lista de los alumnos de forma aleatoria
	int num=0,numeros[15];
	for(int i=0;i<15;i++){
	//inicia la estructura repetitiva for
		while(verificar(num,numeros)==false){
		//inicia la estructura repetitiva while que llama a la funci�n verificar con dichos argumentos
			num=1+rand()%31;
			//genera un n�mero aleatoreo entre el 1 y el 31 y lo guarda en la variable de tipo entera llamada num
		}
		//termina la estrucutra repetitiva while
		numeros[i]=num;
		//asigna el valor de num a el espacio correspondiente del arreglo seg�n el valor de i
	}
	//termina la estructura repetitiva for
	num=0;
	//Le asigna el valor 0 a la variable num
	//return numeros;
	asistencia(numeros);
}
*/
bool verificar(int num, int numeros[]) {
	//funci�n que se encarga de verificar si ya existe el n�mero
	for (int i = 0; i < 15; i++) {
		/*
		Inicia la estructura repetitiva for que se encarga de aumentar el valor de i, la cual se usa
		para recorrer la posici�n actual del arreglo
		*/
		if (num == numeros[i]) {
			/*
			Inicia la estructura comparativa if que compara si num es es igual a el valor que tenga el
			arreglo en la posici�n actual
			*/
			return true;
			//si el n�mero ya existe en el arreglo se retorna un booleano "True"
		}

		//Termina la estructura comparativa

	}
	return false;
	//se retornar� "false en cado que el n�mero no se encuentre en el arreglo, en ese caso es por que no se repite
}
/*
void asistencia(int numeros[]){
	/*
	Funci�n que se encarga de mostrar que alumno tiene que asistir a clases

	for(int i=0;i<15;i++){
		/*
		Inicia la estructura repetitiva for que se encarga de recorrer la posici�n actual del arreglo numeros

		int pos=numeros[i];
		switch(numeros[i]){
			case 1: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 2: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 3: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
			break;
			case 4: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 5: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 6: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 7: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 8: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 9: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 10: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 11: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 12: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 13: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 14: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 15: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 16: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 17: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 18: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 19: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 20: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 21: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
			case 22: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 23: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 24: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 25: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 26: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 27: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 28: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 29: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 30: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			case 31: cout<<"El alumno n�mero: "<<pos<<" tiene que asistir a clases presenciales"<<endl<<endl;
				break;
			default: cout<<"Error alumno no v�lido"<<endl;
				break;
		}
	}
}
*/
/////////////////////////////////////////

////////////////////////////////
/*
Si tienes alguna duda sobre la realizaci�n sobre cosas busca en
Programaci�n ATS o en cualquier video de internet, o p�ginas de documentaci�n sobre
programaci�n en C++
*/
///////////////////////////////