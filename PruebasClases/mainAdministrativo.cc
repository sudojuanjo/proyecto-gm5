#include "ClaseAdministrativo.h"
#include <iostream>
using namespace std;

int main()
{
	string nombreFichero;
	cout << "Introduzca el nombre del fichero donde se encuentran los datos: "<<endl;
	cin >> nombreFichero;

	Administrativo a;

	string nombre;
    string dni;
    string correo;
    int telefono;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca dni"<<endl;
    cin>>dni;
    cout<<"Introduzca correo"<<endl;
    cin>>correo;
	cout<<"Introduzca telefono"<<endl;
    cin>>telefono;


    a.setNombre(nombre);
    a.setDni(dni);
    a.setCorreo(correo);
    a.setTelefono(telefono);


    ofstream salida(nombreFichero);

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << a.getNombre() << "," << a.getDni() << "," << a.getCorreo() << "," <<a.getTelefono()<<endl;

	salida.close();

	a.introducirInfo(nombreFichero);
	a.guardar(nombreFichero);


	return 0;
}