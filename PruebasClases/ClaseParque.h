#ifndef CLASEPARQUE_H
#define CLASEPARQUE_H
#include <string.h>
#include <iostream>
#include <list>
#include <fstream>
#include <stdlib.h>
using namespace std;

class Parque
{
    private:
        string nombre_;
        string municipios_;
        string direccion_;
        string localidad_;
        float superficie_;
        int telefono_;
        string horario_;
        string men_prem_;
        string fech_natural_;
        list<Parque>listaParque_;
    public:
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
            this->listaParque_.clear();
        }

        //Constructor parametrizado

        Parque(string nombre, string municipios, string direccion, string localidad, float superficie, int telefono, string horario, string men_prem, string fech_natural)
        {
            this->nombre_=nombre;
            this->municipios_=municipios;
            this->direccion_=direccion;
            this->localidad_=localidad;
            this->superficie_=superficie;
            this->telefono_=telefono;
            this->horario_=horario;
            this->men_prem_=men_prem;
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

        inline string getMen_prem()const
        {
            return this->men_prem_;
        }

        inline string getFech_natural()const
        {
            return this->fech_natural_;
        }

        //Modificadores

        inline void setNombre(string nombre)
        {
            this->nombre_=nombre;
        }
    
        inline void setMunicipios(string municipios)
        {
            this->municipios_=municipios;
        }
    
        inline void setDireccion(string direccion)
        {
            this->direccion_=direccion;
        }
    
        inline void setLocalidad(string localidad)
        {
            this->localidad_=localidad;
        }
    
        inline void setSuperficie(float superficie)
        {
            this->superficie_=superficie;
        }
    
        inline void setTelefono(int telefono)
        {
            this->telefono_=telefono;
        }
    
        inline void setHorario(string horario)
        {
            this->horario_=horario;
        }

        inline void setMen_prem(string men_prem)
        {
            this->men_prem_=men_prem;
        }

        inline void setFech_natural(string fech_natural)
        {
            this->fech_natural_=fech_natural;
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
                Parque p;

                //Leo el nombre del parque que se encuentra en la primera linea del fichero
                getline(fich,datoleido,'\n');
                this->nombre_=datoleido;

                //Leo tantos datos como haya en el fichero
                while(getline(fich, datoleido,';'))
                {
                    p.setMunicipios(datoleido);

                    getline(fich, datoleido,';');
                    p.setDireccion(datoleido);

                    getline(fich, datoleido,';');
                    p.setLocalidad(datoleido);

                    getline(fich, datoleido,';');
                    p.setSuperficie(stof(datoleido));

                    getline(fich, datoleido,';');
                    p.setTelefono(stoi(datoleido));

                    getline(fich, datoleido,';');
                    p.setHorario(datoleido);

                    getline(fich, datoleido,';');
                    p.setMen_prem(datoleido);

                    getline(fich, datoleido,'\n');
                    p.setFech_natural(datoleido);

                    this->listaParque_.push_back(p);
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

                list<Parque>::iterator it;

                for(it=this->listaParque_.begin(); it!=this->listaParque_.end();it++)
                {
                    linea=it->getNombre() + "," + it->getMunicipios() + "," + it->getDireccion() + "," + it->getLocalidad() + "," + to_string(it->getSuperficie()) + "," + to_string(it->getTelefono()) + "," + getHorario() + "," + getMen_prem() + "," + getFech_natural();
                    fich<<linea<<endl;

                }

                fich.close();
            }
        }


        void consultar(string nombreFichero)
        {

            ifstream entrada(nombreFichero);

            if(!entrada)
            {
                cout << "Error al abrir el fichero." << endl;
            }

            //recorro mi fichero leyendo
            string nombre;
            string municipios;
            string direccion;
            string localidad;
            string superficie_cadena;
            string telefono_cadena;
            string horario;
            string men_prem;
            string fech_natural;

            float superficie;
            int telefono;

            while( getline(entrada,nombre,'\n') ) //leo el nombre
            {
                getline(entrada, municipios,',');
                getline(entrada, direccion, ',');
                getline(entrada, localidad,',');
                getline(entrada, superficie_cadena, ',');
                superficie=atof(superficie_cadena.c_str());
                getline(entrada, municipios,',');
                telefono=atoi(entrada, telefono_cadena.c_str());
                getline(entrada, horario, ',');
                getline(entrada, men_prem,',');
                getline(entrada, fech_natural, ',');
            

                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Municipios: "<<municipios<<endl;
                cout<<"Direccion: " <<direccion<<endl;
                cout<<"Localidad: " <<localidad<<endl;
                cout<<"Superficie: " <<superficie<<endl;
                cout<<"Telefono: " <<telefono<<endl;
                cout<<"Horario: " <<horario<<endl;
                cout<<"Men_Prem: " <<men_prem<<endl;
                cout<<"Fech_natural: " <<fech_natural<<endl;
            }

            entrada.close();
        }

};
#endif