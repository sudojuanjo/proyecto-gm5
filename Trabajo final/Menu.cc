#include <iostream>
#include "ClaseParque.h"
#include "ClaseSendero.h"
#include "ClaseRuta.h"
#include "ClaseMonitor.h"
#include "ClaseCliente.h"
#include "ClaseAdministrativo.h"

using namespace std;

int main()
{
	int opcion=0;
	int opc_adm=0, opc_mon=0;
	Administrativo a;
	Cliente c;
	Monitor m;
	Parque p;
	Sendero s;
	Ruta r;

	cout<<"\t INDIQUE SU ROL EN LA EMPRESA: "<<endl;
	cout<<" 1-Administrativo"<<endl<<" 2-Monitor"<<endl;
	cout<<"\tELECCION: ";
	cin>>opcion;
		

    if(opcion==1)
    {
	    cout<<endl<<"\tELIJA LA FUNCION A REALIZAR: "<<endl;
	    cout<<"1-Consultar disponibilidad de ruta"<<endl;
	    cout<<"2-Agregar calendario"<<endl;
	    cout<<"3-Consultar calendario"<<endl;
	    cout<<"4-Guardar cliente"<<endl;
	    cout<<"5-Visualizar grupo de ruta"<<endl;
	    cout<<"6-Acceder a la lista de monitores"<<endl;
	    cout<<"7-Introducir informacion de parque"<<endl;
	    cout<<"8-Consultar informacion de parque"<<endl;
	    cout<<"9-Introducir información de sendero"<<endl;
	    cout<<"10-Consultar información de sendero"<<endl;
	    cout<<"11-Introducir informacion de ruta"<<endl;
	    cout<<"12-Consultar iformacion de ruta"<<endl;
	    cout<<"13-Salir del programa"<<endl;
	    cout<<"\tELECCION: ";
	    cin>>opc_adm;

	    switch(opc_adm)
	    {
		    case 1:
		    {
		     a.consultar("Administrativo.txt");

		    }break;

		    case 2:
		    {
    			string fecha;
    			string recordatorio;

    			cout<<"Introduzca la fecha"<<endl;
    			cin>>fecha;
    			cout<<"Introduzca recordatorio"<<endl;
    			cin>>recordatorio;

    			a.setFecha(fecha);
    			a.setRecordatorio(recordatorio);
    			ofstream salida2("Calendario.txt");

    			if(!salida2)
    			{
        			cout << "Error al abrir el fichero." << endl;
        			return 0;
    			}

    			salida2 << a.getFecha() << "\n" << a.getRecordatorio()<<endl;

    			salida2.close();

    			a.introducirInfo("Calendario.txt");
    			a.guardar("Calendario.txt");

		    }break;

		    case 3:
		    {

		     a.consultarCalendario("Calendario.txt");

		    }break;

		    case 4:
		    {
		    	string nombre;
		        string dni;
		        string correo;
		        int telefono;
		        string ruta;
		        string caract_esp;

		        cout<<"Introduzca nombre"<<endl;
		        cin>>nombre;
		        cout<<"Introduzca dni"<<endl;
		        cin>>dni;
		        cout<<"Introduzca correo"<<endl;
		        cin>>correo;
		        cout<<"Introduzca telefono"<<endl;
		        cin>>telefono;
		        cout<<"Introduzca ruta"<<endl;
		        cin>>ruta;
		        cout<<"Introduzca caract_esp"<<endl;
		        cin>>caract_esp;
		                           
		        c.setNombre(nombre);
		        c.setDni(dni);
		        c.setCorreo(correo);
		        c.setTelefono(telefono);
		        c.setRuta(ruta);
		        c.setCaract_esp(caract_esp);

		        ofstream salida("Cliente.txt");

		        if(!salida)
		        {
		            cout << "Error al abrir el fichero." << endl;
		            return 0;
		        }

		        salida << c.getNombre() << "," << c.getDni() << "," << c.getCorreo() << "," <<c.getTelefono()<<","<<c.getRuta()<<","<<c.getCaract_esp()<<endl;

		        salida.close();

		        c.introducirInfo("Cliente.txt");
		        c.guardar("Cliente.txt");
	   		}break;

	   		case 5:
	   		{

	   			c.consultar("Cliente.txt");

	   		}break;

	   		case 6:
	   		{
	   			m.consultar("Monitor.txt");

	   		}break;

	   		case 7:
	   		{
				string nombre;
                string municipios;
                string direccion;
                string localidad;
                float superficie;
                int telefono;
                string horario;
                string men_prem;
                string fech_natural;

                cout<<"Introduzca nombre"<<endl;
                cin>>nombre;
                cout<<"Introduzca municipios"<<endl;
                cin>>municipios;
                cout<<"Introduzca direccion"<<endl;
                cin>>direccion;
                cout<<"Introduzca localidad"<<endl;
                cin>>localidad;
                cout<<"Introduzca superficie"<<endl;
                cin>>superficie;
                cout<<"Introduzca telefono"<<endl;
                cin>>telefono;
                cout<<"Introduzca horario"<<endl;
                cin>>horario;
                cout<<"Introduzca men_prem"<<endl;
                cin>>men_prem;
                cout<<"Introduzca fech_natural"<<endl;
                cin>>fech_natural;

                p.setNombre(nombre);
                p.setMunicipios(municipios);
                p.setDireccion(direccion);
                p.setLocalidad(localidad);
                p.setSuperficie(superficie);
                p.setTelefono(telefono);
                p.setHorario(horario);
                p.setMen_prem(men_prem);
                p.setFech_natural(fech_natural);

                ofstream salida("Parques.txt");

                if(!salida)
                {
                    cout << "Error al abrir el fichero." << endl;
                    return 0;
                }

                salida << p.getNombre() << "," << p.getMunicipios() << "," << p.getDireccion() << "," << p.getLocalidad()<< ","<< p.getSuperficie()<<","<<p.getTelefono()<<","<<p.getHorario()<<","<<p.getMen_prem()<<","<<p.getFech_natural()<<endl;

                salida.close();

                p.introducirInfo("Parques.txt");
                p.guardar("Parques.txt");	   			
	   		}break;

	   		case 8:
	   		{
	   			p.consultar("Parques.txt");

	   		}break;

	   		case 9:
	   		{
	   			string nombre;
                string parque;
                string dificultad;
                float longitud;
                string estado;
                string descripcion;

                cout<<"Introduzca nombre"<<endl;
                cin>>nombre;
                cout<<"Introduzca parque"<<endl;
                cin>>parque;
                cout<<"Introduzca dificultad"<<endl;
                cin>>dificultad;
                cout<<"Introduzca longitud"<<endl;
                cin>>longitud;
                cout<<"Introduzca estado"<<endl;
                cin>>estado;
                cout<<"Introduzca descripcion"<<endl;
                cin>>descripcion;

                s.setNombre(nombre);
                s.setParque(parque);
                s.setDificultad(dificultad);
                s.setLongitud(longitud);
                s.setEstado(estado);
                s.setDescripcion(descripcion);


                ofstream salida("Sendero.txt");

                if(!salida)
                {
                    cout << "Error al abrir el fichero." << endl;
                    return 0;
                }

                salida << s.getNombre() << "," << s.getParque() << "," << s.getDificultad() << "," << s.getLongitud()<< ","<< s.getLongitud()<<","<<s.getEstado()<<","<<s.getDescripcion()<<endl;

                salida.close();

                s.introducirInfo("Sendero.txt");
                s.guardar("Sendero.txt");
	   		}break;

	   		case 10:
	   		{
	   			s.consultar("Sendero.txt");
	   		};

	   		case 11:
	   		{
	   			string nombre;
                string sendero;
                string dificultad;
                float longitud;
                int duracion;
                string manten;
                string monitor;
                string fecha;
                int plazas;
                string tipos;

                cout<<"Introduzca nombre"<<endl;
                cin>>nombre;
                cout<<"Introduzca sendero"<<endl;
                cin>>sendero;
                cout<<"Introduzca dificultad"<<endl;
                cin>>dificultad;
                cout<<"Introduzca longitud"<<endl;
                cin>>longitud;
                cout<<"Introduzca duracion"<<endl;
                cin>>duracion;
                cout<<"Introduzca manten"<<endl;
                cin>>manten;
                cout<<"Introduzca monitor"<<endl;
                cin>>monitor;
                cout<<"Introduzca fecha"<<endl;
                cin>>fecha;
                cout<<"Introduzca plazas"<<endl;
                cin>>plazas;
                cout<<"Introduzca tipos"<<endl;
                cin>>tipos;

                r.setNombre(nombre);
                r.setSendero(sendero);
                r.setDificultad(dificultad);
                r.setLongitud(longitud);
                r.setDuracion(duracion);
                r.setManten(manten);
                r.setMonitor(monitor);
                r.setFecha(fecha);
                r.setPlazas(plazas);
                r.setTipos(tipos);

                ofstream salida("Ruta.txt");

                if(!salida)
                {
                    cout << "Error al abrir el fichero." << endl;
                    return 0;
                }

                salida << r.getNombre() << "," << r.getSendero() << "," << r.getDificultad() << "," << r.getLongitud()<< ","<< r.getDuracion()<<","<<r.getMantem()<<","<<r.getMonitor()<<","<<r.getFecha()<<","<<r.getPlazas()<<","<<r.getTipos()<<endl;

                salida.close();

                r.introducirInfo("Ruta.txt");
                r.guardar("Ruta.txt");
	   		}break;

	   		case 12:
	   		{
	   			r.consultar("Ruta.txt");

	   		}break;

	   		case 13:
	   		{
	   			return 0;
	   		}break;
        }
    }
    else
    {
    	cout<<endl<<"\tELIJA LA FUNCION A REALIZAR:"<<endl;
        cout<<"1-Consultar calentario de rutas"<<endl;
        cout<<"2-Introducir informacion sobre la ruta"<<endl;
        cout<<"3-Registrar horas trabajadas"<<endl;
        cout<<"4-Salir del programa"<<endl;
        cout<<"\tELECCION: ";
        cin>>opc_mon;

    	switch(opc_mon)
    	{
    		case 1:
    		{
    			m.consultarCalendario("Calendario.txt");
    		}break;

    		case 2:
    		{
    			string nombre;
                string sendero;
                string dificultad;
                float longitud;
                int duracion;
                string manten;
                string monitor;
                string fecha;
                int plazas;
                string tipos;

                cout<<"Introduzca nombre"<<endl;
                cin>>nombre;
                cout<<"Introduzca sendero"<<endl;
                cin>>sendero;
                cout<<"Introduzca dificultad"<<endl;
                cin>>dificultad;
                cout<<"Introduzca longitud"<<endl;
                cin>>longitud;
                cout<<"Introduzca duracion"<<endl;
                cin>>duracion;
                cout<<"Introduzca manten"<<endl;
                cin>>manten;
                cout<<"Introduzca monitor"<<endl;
                cin>>monitor;
                cout<<"Introduzca fecha"<<endl;
                cin>>fecha;
                cout<<"Introduzca plazas"<<endl;
                cin>>plazas;
                cout<<"Introduzca tipos"<<endl;
                cin>>tipos;

                r.setNombre(nombre);
                r.setSendero(sendero);
                r.setDificultad(dificultad);
                r.setLongitud(longitud);
                r.setDuracion(duracion);
                r.setManten(manten);
                r.setMonitor(monitor);
                r.setFecha(fecha);
                r.setPlazas(plazas);
                r.setTipos(tipos);


                ofstream salida("Ruta.txt");

                if(!salida)
                {
                    cout << "Error al abrir el fichero." << endl;
                    return 0;
                }

                salida << r.getNombre() << "," << r.getSendero() << "," << r.getDificultad() << "," << r.getLongitud()<< ","<< r.getDuracion()<<","<<r.getMantem()<<","<<r.getMonitor()<<","<<r.getFecha()<<","<<r.getPlazas()<<","<<r.getTipos()<<endl;

                salida.close();

                r.introducirInfo("Ruta.txt");
                r.guardar("Ruta.txt");

    		}break;

    		case 3:
    		{
    			string jornadas;
         
                cout<<"Introduzca horas"<<endl;
                cin>>jornadas;

            	m.setJornadas(jornadas);

                ofstream salida("MonitorHoras.txt");

                if(!salida)
                {
                    cout << "Error al abrir el fichero." << endl;
                    return 0;
                }

                salida <<m.getJornadas()<<endl;

                salida.close();

                m.introducirInfo("MonitorHoras.txt");
                m.guardar("MonitorHoras.txt");
    		}break;

    		case 4:
    		{
    			return 0;
    		}break;
    	}
    }
}