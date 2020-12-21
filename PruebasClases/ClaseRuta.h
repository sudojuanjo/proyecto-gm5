#ifndef CLASERUTA_H
#define CLASERUTA_H
#include <string.h>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Ruta
{
	private:
		string nombre_;
		string sendero_;
		string dificultad_;
		float longitud_;
		int duracion_;
		string manten_;
		string monitor_;
		string fecha_;
		int plazas_;
		string tipos_;
		list<Ruta>listaRuta_;
	public:
		//Constructor vacio
		Ruta()
		{
			this->nombre_="";
			this->sendero_="";
			this->dificultad_="";
			this->longitud_=0.0;
			this->duracion_=0;
			this->manten_="";
			this->monitor_="";
			this->fecha_="";
			this->plazas_=0;
			this->tipos_="";
			this->listaRuta_.clear();
		}
	
		//Constructor parametrizado
	
		Ruta(string nombre, string sendero, string dificultad, float longitud, int duracion, string manten, string monitor, string fecha, int plazas, string tipos)
		{
			this->nombre_=nombre;
			this->sendero_=sendero;
			this->dificultad_=dificultad;
			this->longitud_=longitud;
			this->duracion_=duracion;
			this->manten_=manten;
			this->monitor_=monitor;
			this->fecha_=fecha;
			this->plazas_=plazas;
			this->tipos_=tipos;
		}
	
		inline string getNombre()const
		{
			return this->nombre_;
		}
	
		inline string getSendero()const
		{
			return this->sendero_;
		}
	
		inline string getDificultad()const
		{
			return this->dificultad_;
		}
	
		inline float getLongitud()const
		{
			return this->longitud_;
		}
	
		inline int getDuracion()const
		{
			return this->duracion_;
		}
	
		inline string getMantem()const
		{
			return this->manten_;
		}
	
		inline string getMonitor()const
		{
			return this->monitor_;
		}
	
		inline string getFecha()const
		{
			return this->fecha_;
		}
	
		inline int getPlazas()const
		{
			return this->plazas_;
		}
	
		inline string getTipos()const
		{
			return this->tipos_;
		}
	
		//Modificadores
		inline void setNombre(string nombre)
		{
			this->nombre_=nombre;
		}
	
		inline void setSendero(string sendero)
		{
			this->sendero_=sendero;
		}	
	
		inline void setDificultad(string dificultad)
		{
			this->dificultad_=dificultad;
		}
	
		inline void setLongitud(float longitud)
		{
			this->longitud_=longitud;
		}
	
		inline void setDuracion(int duracion)
		{
			this->duracion_=duracion;
		}
	
		inline void setManten(string manten)
		{
			this->manten_=manten;
		}
	
		inline void setMonitor(string monitor)
		{
			this->monitor_=monitor;
		}
	
		inline void setFecha(string fecha)
		{
			this->fecha_=fecha;
		}
	
		inline void setPlazas(int plazas)
		{
			this->plazas_=plazas;
		}
	
		inline void setTipos(string tipos)
		{
			this->tipos_=tipos;
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
                Ruta r;

                //Leo el nombre del parque que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    r.setSendero(datoleido);

                    getline(fich, datoleido,';');
                    r.setDificultad(datoleido);

                    getline(fich, datoleido,';');
                    r.setLongitud(stof(datoleido));

                    getline(fich, datoleido,';');
                    r.setDuracion(stoi(datoleido));

                    getline(fich, datoleido,';');
                    r.setManten(datoleido);

                    getline(fich, datoleido,';');
                    r.setMonitor(datoleido);

                    getline(fich, datoleido,'\n');
                    r.setFecha(datoleido);

                    getline(fich, datoleido,';');
                    r.setPlazas(stoi(datoleido));

                    getline(fich, datoleido,'\n');
                    r.setTipos(datoleido);

                    this->listaRuta_.push_back(r);
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

                list<Ruta>::iterator it;

                for(it=this->listaRuta_.begin(); it!=this->listaRuta_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getSendero() + "," + it->getDificultad() + "," + to_string(it->getLongitud()) + "," + to_string(it->getDuracion()) + "," + getMantem() + "," + getMonitor() + "," + getFecha() + "," + to_string(it->getPlazas()) + "," + getTipos();
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }

};
#endif