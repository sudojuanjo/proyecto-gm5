#include "ClaseMonitor.h"
#include <iostream>
using namespace std;

int main()
{   

	Monitor m;

	string nombre;
    string dni;
    string correo;
    int telefono;
    string rutas;
    int num_rutas;
    string jornadas;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca dni"<<endl;
    cin>>dni;
    cout<<"Introduzca correo"<<endl;
    cin>>correo;
	cout<<"Introduzca telefono"<<endl;
    cin>>telefono;
	cout<<"Introduzca rutas"<<endl;
    cin>>rutas;
	cout<<"Introduzca num_rutas"<<endl;
    cin>>num_rutas;
    cout<<"Introduzca jornadas"<<endl;
    cin>>jornadas;


    m.setNombre(nombre);
    m.setDni(dni);
    m.setCorreo(correo);
    m.setTelefono(telefono);
    m.setRutas(rutas);
    m.setNumRutas(num_rutas);
    m.setJornadas(jornadas);



    ofstream salida("Monitor.txt");

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << m.getNombre() << "," << m.getDni() << "," << m.getCorreo() << "," <<m.getTelefono()<<","<<m.getRutas()<<","<<m.getNumRutas()<<","<<m.getJornadas()<<endl;

	salida.close();

	m.introducirInfo("Monitor.txt");
	m.guardar("Monitor.txt");

    m.consultar("Monitor.txt");

	return 0;
}