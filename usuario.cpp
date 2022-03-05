#include "estudiante.cpp"
#include <iostream>

using namespace std;

class Usuario : estudiantes {
	// atributos
	private : int codigo;
	int prom;
	//constructor
	public : 
	Usuario(string nom,string ape,string cur, int n1, int n2, int n3, int n4, int cod) : estudiantes(nom,ape,cur,n1,n2,n3,n4){
		codigo = cod;
	};
	
	// set (modificar)
	void setNombres(string nom){	nombres = nom;}
	void setApellidos(string ape){	apellidos = ape;}
	void setCurso(string cur){	curso = cur;}
	void setNota1(int n1){	nota1 = n1;}
	void setNota2(int n2){	nota2 = n2;}
	void setNota3(int n3){	nota3 = n3;}
	void setNota4(int n4){	nota4 = n4;}
	// get (mostrar)
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCurso(){return curso;}
	int getCodigo(){return codigo;}
	int getNota1(){return nota1;}
	int getNota2(){return nota2;}
	int getNota3(){return nota3;}
	int getNota4(){return nota4;}
	
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Codigo:"<<codigo<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Curso:"<<curso<<endl;
		cout<<"Notas"<<nota1<<" "<<nota2<<" "<<nota3<<" "<<nota4<<endl;
		cout<<"Promedio:"<<prom<<endl;
	}
	
};
	
	
