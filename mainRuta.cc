#include "ClaseRuta.h"
#include <iostream>
using namespace std;

int main()
{

	Ruta r;

	string nombre;
    string sendero;
    string dificultad;
    float longitud;
    int duracion;
    string manten;
    string monitor;
    string fecha;
    int plazas;
    string tipos;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca sendero"<<endl;
    cin>>sendero;
    cout<<"Introduzca dificultad"<<endl;
    cin>>dificultad;
	cout<<"Introduzca longitud"<<endl;
    cin>>longitud;
	cout<<"Introduzca duracion"<<endl;
    cin>>duracion;
	cout<<"Introduzca manten"<<endl;
    cin>>manten;
    cout<<"Introduzca monitor"<<endl;
    cin>>monitor;
	cout<<"Introduzca fecha"<<endl;
    cin>>fecha;
    cout<<"Introduzca plazas"<<endl;
    cin>>plazas;
    cout<<"Introduzca tipos"<<endl;
    cin>>tipos;

    r.setNombre(nombre);
    r.setSendero(sendero);
    r.setDificultad(dificultad);
    r.setLongitud(longitud);
    r.setDuracion(duracion);
    r.setManten(manten);
    r.setMonitor(monitor);
    r.setFecha(fecha);
    r.setPlazas(plazas);
    r.setTipos(tipos);


    ofstream salida("Ruta.txt");

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << r.getNombre() << "," << r.getSendero() << "," << r.getDificultad() << "," << r.getLongitud()<< ","<< r.getDuracion()<<","<<r.getMantem()<<","<<r.getMonitor()<<","<<r.getFecha()<<","<<r.getPlazas()<<","<<r.getTipos()<<endl;

	salida.close();

	r.introducirInfo("Ruta.txt");
	r.guardar("Ruta.txt");

    r.consultar("Ruta.txt");

	return 0;
}