#include "ClaseSendero.h"
#include <iostream>
using namespace std;

int main()
{

	Sendero s;
    
	string nombre;
    string parque;
    string dificultad;
    float longitud;
    string estado;
    string descripcion;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca parque"<<endl;
    cin>>parque;
    cout<<"Introduzca dificultad"<<endl;
    cin>>dificultad;
	cout<<"Introduzca longitud"<<endl;
    cin>>longitud;
	cout<<"Introduzca estado"<<endl;
    cin>>estado;
	cout<<"Introduzca descripcion"<<endl;
    cin>>descripcion;

    s.setNombre(nombre);
    s.setParque(parque);
    s.setDificultad(dificultad);
    s.setLongitud(longitud);
    s.setEstado(estado);
    s.setDescripcion(descripcion);


    ofstream salida("Sendero.txt");

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << s.getNombre() << "," << s.getParque() << "," << s.getDificultad() << "," << s.getLongitud()<< ","<< s.getLongitud()<<","<<s.getEstado()<<","<<s.getDescripcion()<<endl;

	salida.close();

	s.introducirInfo("Sendero.txt");
	s.guardar("Sendero.txt");


    s.consultar("Sendero.txt");

	return 0;
}
