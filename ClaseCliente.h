#ifndef CLASECLIENTE_H
#define CLASECLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente:
{
	private:
		string nombre_;
		string dni_;
		string correo_;
		int telefono_;
		string ruta_;
		string caract_esp_;

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
	
		//Funciones

		string guardar_client();
		
#endif
