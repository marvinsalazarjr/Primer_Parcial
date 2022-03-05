#include <iostream>
using namespace std;

//Marvin Gerardo Salazar Pirir  5990-21-15538

class estudiantes{
	// atributos 
	protected : 
	string nombres,apellidos,curso;
	int codigo, nota1,nota2, nota3, nota4;
				
	protected : 
	// constructor
	estudiantes(string nom,string ape,string cur, int n1, int n2, int n3, int n4){
		nombres = nom;
		apellidos = ape;
		curso = cur;
		nota1 = n1;
		nota2 = n2;
		nota3 = n3;
		nota4 = n4;			
};

	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
	};
