#include "consultar_introducir.cpp"
#include <gtest/gtest.h>

void ifintroducir(){


bool if_introducir(string ruta_fichero){
    ifstream file;
    file.open(ruta_fichero);
    string informacion;
    while (file.eof()==false) {
        file >> informacion;
    }
    if(informacion==" "){
        return false;
    }
    else{
        return true;
    }
}

//variable a comprobar
string ruta_fichero;

//Comprobar resultado

EXPECT_EQ(true, if_introducir());

}