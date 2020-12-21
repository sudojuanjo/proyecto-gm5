#ifndef CLASESENDERO_H
#define CLASESENDERO_H
#include <string.h>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Sendero
{
    private:
        string nombre_;
        string parque_;
        string dificultad_;
        float longitud_;
        string estado_;
        string descripcion_;
        list <Sendero>listaSendero_;
        
    public:
        //Constructor vacio
        Sendero()
        {
            this->nombre_="";
            this->parque_="";
            this->dificultad_="";
            this->longitud_=0.0;
            this->estado_="";
            this->descripcion_="";
            this->listaSendero_.clear();
        }
    
        //Constructor parametrizado
        Sendero(string nombre, string parque, string dificultad, float longitud, string estado, string descripcion)
        {
            this->nombre_=nombre;
            this->parque_=parque;
            this->dificultad_=dificultad;
            this->longitud_=longitud;
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
                Sendero s;

                //Leo el nombre del sendero que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    s.setParque(datoleido);

                    getline(fich, datoleido,';');
                    s.setDificultad(datoleido);

                    getline(fich, datoleido,';');
                    s.setLongitud(stof(datoleido));

                    getline(fich, datoleido,';');
                    s.setEstado(datoleido);

                    getline(fich, datoleido,'\n');
                    s.setDescripcion(datoleido);

                    this->listaSendero_.push_back(s);
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

                list<Sendero>::iterator it;

                for(it=this->listaSendero_.begin(); it!=this->listaSendero_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getDificultad() + "," + to_string(it->getLongitud()) +  "," + it->getEstado() + "," + it->getEstado() + "," + it->getDescripcion();
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }
 
};
#endif