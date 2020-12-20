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

bool crear_cal() {
    ofstream file;
    file.open(calendario.txt);
    if(file.is_open()==false) {
        cout<<"El fichero no se pudo abrir"<<endl;
        return -1;
    }
    string evento;
    cout<<"Introduzca un dia y sus eventos"<<endl;
    cin<<evento;
    file << evento;
    return 1;
}

string consultar_cal() {
    ifstream file;
    file.open(calendario.txt);
    if(file.is_open()==false) {
        cout<<"El fichero no se pudo abrir"<<endl;
        return -1;
    }
    string calendario;
    while (file.eof()==false) {
        file >> calendario;
        cout << calendario << endl;
    }
    return calendario;
}
