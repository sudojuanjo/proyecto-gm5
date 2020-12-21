#include "ClaseParque.h"
#include <iostream>
using namespace std;

int main()
{
	string nombreFichero;
	cout << "Introduzca el nombre del fichero donde se encuentran los datos: "<<endl;
	cin >> nombreFichero;

	Parque p;

	string nombre;
    string municipios;
    string direccion;
    string localidad;
    float superficie;
    int telefono;
    string horario;
    string men_prem;
    string fech_natural;

    cout<<"Introduzca nombre"<<endl;
    cin>>nombre;
    cout<<"Introduzca municipios"<<endl;
    cin>>municipios;
    cout<<"Introduzca direccion"<<endl;
    cin>>direccion;
	cout<<"Introduzca localidad"<<endl;
    cin>>localidad;
	cout<<"Introduzca superficie"<<endl;
    cin>>superficie;
	cout<<"Introduzca telefono"<<endl;
    cin>>telefono;
    cout<<"Introduzca horario"<<endl;
    cin>>horario;
	cout<<"Introduzca men_prem"<<endl;
    cin>>men_prem;
    cout<<"Introduzca fech_natural"<<endl;
    cin>>fech_natural;

    p.setNombre(nombre);
    p.setMunicipios(municipios);
    p.setDireccion(direccion);
    p.setLocalidad(localidad);
    p.setSuperficie(superficie);
    p.setTelefono(telefono);
    p.setHorario(horario);
    p.setMen_prem(men_prem);
    p.setFech_natural(fech_natural);

    ofstream salida(nombreFichero);

	if(!salida)
	{
		cout << "Error al abrir el fichero." << endl;
		return 0;
	}

	salida << p.getNombre() << "," << p.getMunicipios() << "," << p.getDireccion() << "," << p.getLocalidad()<< ","<< p.getSuperficie()<<","<<p.getTelefono()<<","<<p.getHorario()<<","<<p.getMen_prem()<<","<<p.getFech_natural()<<endl;

	salida.close();

	p.introducirInfo(nombreFichero);
	p.guardar(nombreFichero);


	consultar(nombreFichero);


	return 0;
}