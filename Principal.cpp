#include <stdio.h>
#include <iostream>
#include "ClaseAdministrativo.h"
#include "ClaseCliente.h"
#include "ClaseMonitor.h"
#include "ClaseParque.h"
#include "ClaseRuta.h"
#include "ClaseSendero.h"
using namespace std;

int main() 
{
    int opcion;
    int opc_adm=0, int opc_mon=0;
    
    cout<<"Su rol en la empresa es:"<<endl<<"1-Administrativo"<<endl<<"2-Monitor"<<endl;
    cin>>opcion;
    
    switch(opcion)
    {
        case 1:
            while(opc_adm<7)
            {
                cout<<"Elija la funcion a realizar:"<<endl<<
                "1-Consultar disponibilidad de ruta"<<endl<<
                "2-Crear calendario"<<endl<<
                "3-Consultar calendario"<<endl<<
                "4-Guardar cliente"<<endl<<
                "5-Visualizar grupo de ruta"<<endl<<
                "6-Acceder a la lista de monitores"<<endl<<
                "7-Salir del programa"<<endl;
                cin>>opc_adm;
                
                switch(opc_adm) 
                {
                    case 1: 
                        //utilizamos la funcion consultar con el fichero de disponibilidad
                        string disponibilidad = consultar(string disponibilidad.txt);
                        cout<< "la disponibilidad de la ruta es:"<< disponibilidad << endl;
                    ;break;

                    case 2:
                        bool i=crear_cal();
                        if(i==-1)
                        {
                            cout<<"el calendario no se ha podido crear"<<endl;
                        }
                        else
                        {
                            cout<<"el calendario se ha creado satisfactoriamente"<<endl;
                        }
                    ;break;

                    case 3: 
                        bool j=consultar_cal();
                        if(j==-1)
                        {
                            cout<<"el calendario no se ha podido abrir"<<endl;
                        }
                    ;break;

                    case 4:
                        introduccir(clientes.txt);
                        cout<<"Cliente guardado con exito"<<endl;
                    ;break;

                    case 5: 
                        string grup=consultar(grupo.txt);
                        if(grup=="-1")
                        {
                            cout<<"ERROR"<<endl;
                        }
                        else
                        {
                            cout<<grup<<endl;
                        }
                    ;break;

                    case 6:
                        string moni=consultar(monitores.txt);
                        if(moni=="-1")
                        {
                            cout<<"ERROR"<<endl;
                        }
                        else
                        {
                            cout<<moni<<endl;
                        }
                    ;break;

                    case 7:
                        return 0;
                    ;break
                }
            }
        ;break;

        case 2:
            while(opc_mon<4)
            {
                cout<<"Elija la funcion a realizar:"<<endl<<
                "1-Consultar calentario de rutas"<<endl<<
                "2-Introducir informacion sobre la ruta"<<endl<<
                "3-Registrar horas trabajadas"<<endl<<
                "4-Salir del programa"<<endl;
                cin>>opc_mon;

                switch(opc_mon) 
                {
                    case 1:
                        bool k=consultar_cal();
                        if(k==-1)
                        {
                            cout<<"el calendario no se ha podido abrir"<<endl;
                        }
                    ;break;
                     
                    case 2:
                        introduccir(rutas.txt);
                        cout<<"Informacion de la ruta guardada con exito"<<endl;

                    ;break;

                    case 3:
                        introduccir(monitor.txt);
                        cout<<"Registro de trabajo guardado con exito"<<endl;

                    ;break;

                     case 4:
                        return 0;
                    ;break;
                }
            }

        ;break;

        default: cout<<"ERROR";
        break;
    }
}
