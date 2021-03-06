#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "ClaseParque.h"
#include "ClaseRuta.h"
#include "ClaseSendero.h"
#include "ClaseAdministrativo.h"
#include "ClaseMonitor.h"
#include "ClaseCliente.h"
using namespace std;


string consultar(string ruta_fichero) {
    ifstream file;
    file.open(ruta_fichero);
    if(file.is_open()==false) {
        cout<<"El fichero no se pudo abrir"<<endl;
        return -1;
    }
    string informacion;
    while (file.eof()==false) {
        file >> informacion;
    }
    return informacion;
}

bool introducir(string ruta_fichero) {
    ofstream file;
    file.open(ruta_fichero);
    if(file.is_open()==false) {
        cout<<"El fichero no se pudo abrir"<<endl;
        return false;
    }
    string informacion;
    cout<<"Introduzca la informacion que quiere guardar"<<endl;
    cin<<informacion;
         file << informacion;
    return true;
}
