#include "consultar_introducir.cpp"
#include <gtest/gtest.h>

void ifparticipantes(){


bool if_participantes(string ruta_fichero){
    ifstream file;
    file.open(ruta_fichero);
    string informacion;
    int contador;
    while (file.eof()==false) {
        file >> informacion;
        contador++;
    }
    if(contador>20){
        return false;
    }
    else{
        return true;
    }
}

//variable a comprobar
string RUTA="Grupo_clientes.txt";

//Comprobar resultado

EXPECT_EQ(true, if_participantes(RUTA));

}
