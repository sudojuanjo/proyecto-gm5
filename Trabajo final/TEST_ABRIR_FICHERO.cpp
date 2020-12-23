#include "consultar_introducir.cpp"
#include <gtest/gtest.h>

void ifconsultar(){


bool if_consultar(string ruta_fichero){
    ifstream file;
    file.open(ruta_fichero);
    if(file.is_open()==false) {
            cout<<"El fichero no se pudo abrir"<<endl;
            return false;
        }
    else{return true;}
}

//variable a comprobar
string ruta_fichero;

//Comprobar resultado

EXPECT_EQ(true, if_consultar());
system("pause");
}