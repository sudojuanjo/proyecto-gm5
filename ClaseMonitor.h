#ifndef CLASEMONITOR_H
#define CLASEMONITOR_H
#include <string.h>
#include <iostream>
using namespace std;

class Monitor
{
	public:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;
		string rutas_;
		int num_rutas_;
		string jornadas_;
	private:
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
	
		//Funciones
	
		string consultar_cal()
		string introducir()
		float registr_horas()
};
#endif
