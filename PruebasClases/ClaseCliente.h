#ifndef CLASECLIENTE_H
#define CLASECLIENTE_H
#include <string>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Cliente
{
	private:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;
		string ruta_;
		string caract_esp_;
		list<Cliente>listaCliente_;

	public:
		//Constructor vacio
		Cliente()
		{
			this->nombre_="";
			this->dni_="";
			this->correo_="";
			this->telefono_=0;
			this->ruta_="";
			this->caract_esp_="";
			this->listaCliente_.clear();
		}
	
		//Constructor parametrizado
		Cliente(string nombre, string dni, string correo, int telefono, string ruta, string caract_esp_)
		{
			this->nombre_=nombre;
			this->dni_=dni;
			this->correo_=correo;
			this->telefono_=telefono;
			this->ruta_=ruta;
			this->caract_esp_=caract_esp_;
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

		inline string getRuta()const
		{
			return this->ruta_;
		}

		inline string getCaract_esp()const
		{
			return this->caract_esp_;
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
		inline void setRuta(string ruta)
		{
			this->ruta_=ruta;
		}
		inline void setCaract_esp(string caract_esp)
		{
			this->caract_esp_=caract_esp;
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
                Cliente c;

                //Leo el nombre del parque que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    c.setDni(datoleido);

                    getline(fich, datoleido,';');
                    c.setCorreo(datoleido);

                    getline(fich, datoleido,';');
                    c.setTelefono(stoi(datoleido));

                    getline(fich, datoleido,';');
                    c.setRuta(datoleido);

                    getline(fich, datoleido,'\n');
                    c.setCaract_esp(datoleido);

                    this->listaCliente_.push_back(c);
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

                list<Cliente>::iterator it;

                for(it=this->listaCliente_.begin(); it!=this->listaCliente_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getDni() + "," + it->getCorreo() + "," + to_string(it->getTelefono()) + "," + getRuta() + "," + getCaract_esp();
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }


};		
#endif