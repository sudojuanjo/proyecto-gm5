#include "ClaseCliente.h"
#include <iostream>
using namespace std;

int main()
{
	string nombreFichero;
	cout << "Introduzca el nombre del fichero donde se encuentran los datos: "<<endl;
	cin >> nombreFichero;

	Cliente c;

	string nombre;
    string dni;
    string correo;
    int telefono;
    string ruta;
    string caract_esp;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca dni"<<endl;
    cin>>dni;
    cout<<"Introduzca correo"<<endl;
    cin>>correo;
	cout<<"Introduzca telefono"<<endl;
    cin>>telefono;
	cout<<"Introduzca ruta"<<endl;
    cin>>ruta;
	cout<<"Introduzca caract_esp"<<endl;
    cin>>caract_esp;
   
    c.setNombre(nombre);
    c.setDni(dni);
    c.setCorreo(correo);
    c.setTelefono(telefono);
    c.setRuta(ruta);
    c.setCaract_esp(caract_esp);

    ofstream salida(nombreFichero);

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << c.getNombre() << "," << c.getDni() << "," << c.getCorreo() << "," <<c.getTelefono()<<","<<c.getRuta()<<","<<c.getCaract_esp()<<endl;

	salida.close();

	c.introducirInfo(nombreFichero);
	c.guardar(nombreFichero);


	return 0;
}