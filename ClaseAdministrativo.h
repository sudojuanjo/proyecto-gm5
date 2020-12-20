#ifndef CLASEADMINISTRATIVO_H
#define CLASEADMINISTRATIVO_H
#include <string>
#include <iostream>
using namespace std;

class Administrativo:
{
	private:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;

	public:
		//Constructor vacio
		Administrativo()
		{
			this->nombre_="";
			this->dni_="";
			this->correo_="";
			this->telefono=0;
		}
	
		//Constructor parametrizado
		Administrativo(string nombre, string dni, string correo, int telefono)
		{
			this->nombre_=nombre;
			this->dni_=dni;
			this->correo_=correo;
			this->telefono_=telefono;
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
	
		//Funciones
	
		bool disponibilidad();
		void crear_cal();
		string consultar_cal();
		string guardar_client()
		string ver_grupo();
		string ver_monitores();
};
#endif
