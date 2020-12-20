#ifndef CLASEPARQUE_H
#define CLASEPARQUE_H
#include <string.h>
#include <iostream>
using namespace std;

using std::string;

class Parque
{
    public:
        string nombre_;
        string municipios_;
        string direccion_;
        string localidad_;
        float superficie_;
        int telefono_;
        string horario_;
        string men_prem_;
        date fech_natural_;
    
    private:
        //Constructor vacio
        Parque()
        {
            this->nombre_="";
            this->municipios_="";
            this->direccion_="";
            this->localidad_="";
            this->superficie_=0.0;
            this->telefono_=0;
            this->horario_="";
            this->men_prem_="";
            this->fech_natural_="";
        } 
    
        //Constructor parametrizado
        Parque(string nombre, string municipios, string direccion, string localidad, float superficie, int telefono, string horario, string men_prem, date fech_natural)
        {
            this->nombre_=nombre;
            this->municipios_=municipios;
            this->direccion_=direccion;
            this->localidad_=localidad;
            this->superficie_=superficie;
            this->telefono_=telefono;
            this->horario_=horario;
            this->men_prem_=mem_prem;
            this->fech_natural_=fech_natural;
        }
    
        //Observadores
    
        inline string getNombre()const
        {
            return this->nombre_;
        }
    
        inline string getMunicipios()const
        {
            return this->municipios_;
        }
            
        inline string getDireccion()const
        {
            return this->direccion_;
        }
            
        inline string getLocalidad()const
        {
            return this->localidad_;
        }
    
        inline float getSuperficie()const
        {
            return this->superficie_;
        }
    
        inline int getTelefono()const
        {
            return this->telefono_;
        }
    
        inline string getHorario()const
        {
            return this->horario_;
        }
    
        inline string getMenPrem()const
        {
            return this->men_prem_;
        }
    
        inline date getFechNatural()const
        {
            return this->fech_natural_;
        }
  
        //Funciones             
        string Consultar();
        string Introducir();
};
#endif
