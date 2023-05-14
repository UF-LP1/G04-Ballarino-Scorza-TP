

#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(string nombre, char sexo, string DNI, bool capricho_vajilla, unsigned int cant_capricho_vaj, unsigned int numerodeturno, string marca, unsigned int cantidad, bool pararegalar)
    :persona(nombre, sexo, DNI) {
    this->cant_caprichos_vaj = cant_caprichos_vaj;
    this->capricho_vajilla = capricho_vajilla;
    this->numerodeturno = numerodeturno;
    this->pararegalar = pararegalar;
    this->cantidad = cantidad;
    this->marca = marca;
}







bool Cliente::get_capricho() {
    return this->capricho_vajilla;
}


void Cliente::set_capricho(bool) {
    return;
}


unsigned int Cliente::get_cantcapricho() {
    return this->cant_caprichos_vaj;
}


void Cliente::set_cantcapricho(unsigned int  cant_caprcho_vaj) {
    return;
}


unsigned int Cliente::get_numdeturno() {
    return this->numerodeturno;
}

void Cliente::set_numdeturno(unsigned int) {
    return;
}


void Cliente::set_regalo(bool) {
    return;
}

bool Cliente::get_regalo() {
    return this->pararegalar;
}

Cliente::~Cliente() {

}