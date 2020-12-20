#include <string>
#include <iostream>
using namespace std;

class Administrativo:
{
	private:
		string nombre;
		string dni;
		string correo;
		int telefono;

	public:
		bool disponibilidad();
		void crear_cal();
		string consultar_cal();
		string guardar_client()
		string ver_grupo();
		string ver_monitores();
};