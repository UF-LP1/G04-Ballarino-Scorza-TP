


#include "Empleado.h"


Empleado::Empleado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string especialidad)
    :Trabajador(nombre, sexo, DNI, sueldo, horas, dias_vacas), especialidad(especialidad) {

}


void Empleado::llamarnum(list<Cliente> listac) {
    cout << "";

    return;
}


void Empleado::set_especia(string especialidad) {
    this->especialidad = especialidad;
    return;
}


string Empleado::get_especia() {
    return this->especialidad;
}

Empleado::~Empleado() {

}