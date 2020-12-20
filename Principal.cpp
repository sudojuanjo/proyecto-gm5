#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
int opcion;
int opc_adm;
cout<<"Su rol en la empresa es:"<<endl<<"1-Administrativo"<<endl<<"2-Monitor"<<endl;
cin>>opcion;
switch(opcion) {
case 1:
    while(opc_adm!=7){
    switch(opc_adm) {
        case 1: 
        //utilizamos la funcion consultar con el fichero de disponibilidad
        string disponibilidad = consultar(string disponibilidad.txt);
        cout<< "la disponibilidad de la ruta es:"<< disponibilidad << endl;
        ;break;

        case 2:
        bool i=crear_cal();
        if(i==-1){
            cout<<"el calendario no se ha podido crear"<<endl;
        }
        else{
            cout<<"el calendario se ha creado satisfactoriamente"<<endl;
        }
        ;break;

        case 3: 
        bool j=consultar_cal();
        if(j==-1){
            cout<<"el calendario no se ha podido abrir"<<endl;
        }
        ;break;

        case 4:
            introduccir(clientes.txt);
            cout<<"Cliente guardado con exito"<<endl;

        ;break;

        case 5: 
            string grup=consultar(grupo.txt);
            if(grup=="-1"){cout<<"ERROR"<<endl;}
            else{cout<<grup<<endl;}

        ;break;

        case 6:
            string moni=consultar(monitores.txt);
            if(moni=="-1"){cout<<"ERROR"<<endl;}
            else{cout<<moni<<endl;}

        ;break;

        case 7:
            return 0;
        ;break
    }



;break;

case 2:


;break;

default: cout<<"ERROR";
break;
}}
