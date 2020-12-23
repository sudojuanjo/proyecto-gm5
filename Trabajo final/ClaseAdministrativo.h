#ifndef CLASEADMINITRATIVO_H
#define CLASEADMINITRATIVO_H
#include <string>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Administrativo
{
	private:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;
		list<Administrativo>listaAdministrativo_;

	public:
		//Constructor vacio
		Administrativo()
		{
			this->nombre_="";
			this->dni_="";
			this->correo_="";
			this->telefono_=0;
		}
	
		//Constructor parametrizado
		Administrativo(string nombre, string dni, string correo, int telefono)
		{
			this->nombre_=nombre;
			this->dni_=dni;
			this->correo_=correo;
			this->telefono_=telefono;
			this->listaAdministrativo_.clear();
		}
	
		//Observadores
	
		inline string getNombre()const
		{
			return this->nombre_;
		}
	
		inline string getDni()const
		{
			return this->dni_;
		}
	
		inline string getCorreo()const
		{
			return this->correo_;
		}
	
		inline int getTelefono()const
		{
			return this->telefono_;
		}
	
		//Modificadores
	
		inline void setNombre(string nombre)
		{
			this->nombre_=nombre;
		}
	
		inline void setDni(string dni)
		{
			this->dni_=dni;
		}
	
		inline void setCorreo(string correo)
		{
			this->correo_=correo;
		}
	
		inline void setTelefono(int telefono)
		{
			this->telefono_=telefono;
		}

		void introducirInfo(string nombreFichero)
        {
            ifstream fich(nombreFichero);
            if(!fich)
            {
                cout<<"ErrOR al abrir el fichero "<<nombreFichero<<endl;
            }
            else
            {
                string datoleido;
                Administrativo a;

                //Leo el nombre del parque que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    a.setDni(datoleido);

                    getline(fich, datoleido,';');
                    a.setCorreo(datoleido);

                    getline(fich, datoleido,';');
                    a.setTelefono(stoi(datoleido));

                    this->listaAdministrativo_.push_back(a);
                }
                fich.close();
            }
        }

        void guardar(string nombreFichero)
        {
            ofstream fich(nombreFichero);

            if(!fich)
            {
                cout<<"ERROR al abrir el fichero "<<nombreFichero<<endl;
            }
            else
            {
                fich<<this->nombre_<<endl;
                string linea;

                list<Administrativo>::iterator it;

                for(it=this->listaAdministrativo_.begin(); it!=this->listaAdministrativo_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getDni() + "," + it->getCorreo() + "," + to_string(it->getTelefono());
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }

        void consultar(string nombreFichero)
        {

            ifstream entrada(nombreFichero);

            if(!entrada)
            {
                cout << "Error al abrir el fichero." << endl;
            }

            //recorro mi fichero leyendo
            string nombre;
            string dni;
            string correo;
            string telefono_cadena;

            int telefono;

            while( getline(entrada,nombre,',') ) //leo el nombre
            {
                getline(entrada, dni,',');
                getline(entrada, correo, ',');
                getline(entrada, telefono_cadena, '\n');
                telefono=stoi(telefono_cadena);
            

                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Dni: "<<dni<<endl;
                cout<<"Correo: " <<correo<<endl;
                cout<<"Telefono: " <<telefono<<endl;

            }

            entrada.close();
        }

	
};
#endif
