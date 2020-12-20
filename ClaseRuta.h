#ifndef CLASERUTA_H
#define CLASERUTA_H
#include <string.h>
#include <iostream>
using namespace std;

class Ruta
{
	public:
		string nombre_;
		string sendero_;
		string dificultad_;
		float longitud_;
		int duracion_;
		string manten_;
		string monitor_;
		date fecha_;
		int plazas_;
		string tipos_;
	private:
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
		}
	
		//Constructor parametrizado
	
		Ruta(string nombre, string sendero, string dificultad, float longitud, int duracion, string manten, string monitor, date fecha, int plazas, string tipos)
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
	
		inline date getFecha()const
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
		inline void setNombre()const
		{
			this->nombre_=nombre;
		}
	
		inline void setSendero()const
		{
			this->sendero_=sendero;
		}	
	
		inline void setDificultad()const
		{
			this->dificultad_=dificultad;
		}
	
		inline void setLongitud()const
		{
			this->longitud_=longitud;
		}
	
		inline void setDuracion()const
		{
			this->duracion_=duracion;
		}
	
		inline void setManten()const
		{
			this->manten_=manten;
		}
	
		inline void setMonitor()const
		{
			this->monitor_=monitor;
		}
	
		inline void setFecha()const
		{
			this->fecha_=fecha;
		}
	
		inline void setPlazas()const
		{
			this->plazas_=plazas;
		}
	
		inline void setTipos()const
		{
			this->tipos_=tipos;
		}
	
		//Funciones
		string consultar()
		string introducir()

};
#endif
