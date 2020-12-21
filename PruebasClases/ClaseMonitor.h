#ifndef CLASEMONITOR_H
#define CLASEMONITOR_H
#include <string.h>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Monitor
{
	private:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;
		string rutas_;
		int num_rutas_;
		string jornadas_;
		list<Monitor>listaMonitor_;
	public:
		//Constructor vacio
	
		Monitor()
		{
			this->nombre_="";
			this->dni_="";
			this->correo_="";
			this->telefono_=0;
			this->rutas_="";
			this->num_rutas_=0;
			this->jornadas_="";
			this->listaMonitor_.clear();
		}
	
		//Constructor parametrizado
	
		Monitor(string nombre, string dni, string correo, int telefono, string rutas, int num_rutas, string jornadas)
		{
			this->nombre_=nombre;
			this->dni_=dni;
			this->correo_=correo;
			this->telefono_=telefono;
			this->rutas_=rutas;
			this->num_rutas_=num_rutas;
			this->jornadas_=jornadas;
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
	
		inline string getRutas()const
		{
			return this->rutas_;
		}
	
		inline int getNumRutas()const
		{
			return this->num_rutas_;
		}
	
		inline string getJornadas()const
		{
			return this->jornadas_;
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
	
		inline void setRutas(string rutas)
		{
			this->rutas_=rutas;
		}
	
		inline void setNumRutas(int num_rutas)
		{
			this->num_rutas_=num_rutas;
		}
	
		inline void setJornadas(string jornadas)
		{
			this->jornadas_=jornadas;	
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
                Monitor m;

                //Leo el nombre del parque que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    m.setDni(datoleido);

                    getline(fich, datoleido,';');
                    m.setCorreo(datoleido);

                    getline(fich, datoleido,';');
                    m.setTelefono(stoi(datoleido));

                    getline(fich, datoleido,';');
                    m.setRutas(datoleido);

                    getline(fich, datoleido,';');
                    m.setNumRutas(stoi(datoleido));

                    getline(fich, datoleido,'\n');
                    m.setJornadas(datoleido);

                    this->listaMonitor_.push_back(m);
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

                list<Monitor>::iterator it;

                for(it=this->listaMonitor_.begin(); it!=this->listaMonitor_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getDni() + "," + it->getCorreo() + "," + to_string(it->getTelefono()) + "," + getRutas() + "," + to_string(it->getNumRutas()) + "," + getJornadas();
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }

};
#endif