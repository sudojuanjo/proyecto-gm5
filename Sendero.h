#include <string.h>
#include <iostream>
using std::string;

class Parque{
    public:
        string nombre;
        string parque;
        string dificultad;
        float logitud;
        string estado;
        string descripcion;
        
    private:
        string Consultar();
        string Introducir();
}