


#include "disfraces.h"


disfraces::disfraces(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string nombre, string estado, string preciosemanal)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    
    this->nombre = nombre;
    this->estado = estado;
    this->preciosemanal = preciosemanal;
}



void disfraces::set_nombre(string nombre) {
    this->nombre = nombre;
    return;
}


string disfraces::get_nombre() {
    return this->nombre;
}


string disfraces::get_estado() {
    return this->estado;
}


void disfraces::set_estado(string estado) {
    this->estado = estado;
    return;
}

void disfraces::set_preciosemanal(string preciosemanal) {
    this->preciosemanal = preciosemanal;
    return;
}
string disfraces::get_preciosemanal() {
    return this->preciosemanal;
}

disfraces::~disfraces() {

}