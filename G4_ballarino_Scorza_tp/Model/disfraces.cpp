


#include "disfraces.h"


disfraces::disfraces(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_d_venta  tipvent, string nombre, string estado)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    this->tipvent = tipvent;
    this->nombre = nombre;
    this->estado = estado;
}

enum class disfraces::tipo_d_venta disfraces::get_tipoventa() {
    return tipvent;
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




disfraces::~disfraces() {

}