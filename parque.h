//Creacion de la clase Parque

#include <string.h>
#include <iostream>
#include <ctime>
#include <iomanip>
using std::string;

class Parque{
    public:
        string nombre;
        string municipios;
        string direccion;
        string localidad;
        float superficie;
        int telefono;
        string horario;
        string men_prem;
        date fech_natural;
    private:
        string Consultar();
        string Introducir();
}