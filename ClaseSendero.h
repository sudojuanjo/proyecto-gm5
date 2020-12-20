#ifndef CLASESENDERO_H
#define CLASESENDERO_H
#include <string.h>
#include <iostream>
using namespace std;

class Parque
{
    public:
        string nombre_;
        string parque_;
        string dificultad_;
        float logitud_;
        string estado_;
        string descripcion_;
        
    private:
        //Constructor vacio
        Parque()
        {
            this->nombre_="";
            this->parque_="";
            this->dificultad_="";
            this->logitud_=0;
            this->estado_="";
            this->descripcion_="";
        }
    
        //Constructor parametrizado
        Parque(string nombre, string parque, string dificultad, float logitud, string estado, string descripcion)
        {
            this->nombre_=nombre;
            this->parque_=parque;
            this->dificultad_=dificultad;
            this->logitud_=longitud;
            this->estado_=estado;
            this->descripcion_=descripcion;
        }  
    
        //Observadores
    
        inline string getNombre()const
        {
            return this->nombre_;
        }
    
        inline string getParque()const 
        {
            return this->parque_;
        }
    
        inline string getDificultad()const
        {
            return this->dificultad_;
        }
    
        inline float getLongitud()const
        {
            return this->longitud_;
        }
    
        inline string getEstado()const
        {
            return this->estado_;
        }
    
        inline string getDescripcion()const
        {
            return this->descripcion_;
        }
    
        //Modificadores
        inline void setNombre(string nombre)
        {
            this->nombre_=nombre;
        }
    
        inline void setParque(string parque) 
        {
            this->parque_=parque;
        }
    
        inline void setDificultad(string dificultad)
        {
            this->dificultad_=dificultad;
        }
    
        inline void setLongitud(float longitud)
        {
            this->longitud_=longitud;
        }
    
        inline void setEstado(string estado)
        {
            this->estado_=estado;
        }
    
        inline void setDescripcion(string descripcion)
        {
            this->descripcion_=descripcion;
        }
    
      
        //Funciones       
        string Consultar();
        string Introducir();
};
#endif
