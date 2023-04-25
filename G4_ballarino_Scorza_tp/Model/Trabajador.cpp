


#include "Trabajador.h"



Trabajador::Trabajador(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas)
    :persona(nombre, sexo, DNI), sueldo(sueldo), horas(horas), dias_vacas(dias_vacas) {

}

unsigned int Trabajador::get_sueldo() {
    return this->sueldo;
}


void Trabajador::set_sueldo(unsigned int) {
    return;
}


string Trabajador::get_horas() {
    return this->horas;
}


void Trabajador::set_horas(string) {
    return;
}


string Trabajador::get_diasv() {
    return this->dias_vacas;
}


void Trabajador::set_diasv(string) {
    return;
}




Trabajador::~Trabajador() {

}