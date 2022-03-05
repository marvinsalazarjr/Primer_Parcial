#include "usuario.cpp"
#include <iostream>

using namespace std;

main(){
	int num, cod, n1, n2, n3, n4,sum;
	string nom, ape, cur;
	float prom;

		cout<<"Ingrese la cantidad de alumnos:"<<endl;
		cin>>num;
	
		cout<<"ingrese Curso: ", cin>>cur;
	
		for (int i=0; i<num; i++){
		prom = 0; sum=0;
		cout<<"-------------------------------------------"<<endl;
		cout<<"Ingrese Nombre: ", cin>>nom;
		cout<<" Ingrese Apellido: ",cin>>ape;

		cout<<"Ingrese Codigo: ", cin>>cod;
		cout<<"Ingrese Primer nota: ", cin>>n1;
		cout<<"Ingrese Segunda nota: ", cin>>n2;
		cout<<"Ingrese Tecera nota: ", cin>>n3;
		cout<<"Ingrese Cuarta nota: ", cin>>n4;
		
		sum = n1+n2+n3+n4;
		prom = sum/4;
		if(prom>=60){
		cout<<"Estudiante Aprobado Curso: "<<cur<<"  con promedio de: "<<prom<<endl;
		}
		else {
			cout<<"Estudiante Reprobado Curso: "<<cur<<"  con promedio de: "<<prom<<endl;
		}
	}; //for
	
	
	

} //main
