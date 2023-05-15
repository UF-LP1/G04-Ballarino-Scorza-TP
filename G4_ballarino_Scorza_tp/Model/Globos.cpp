


#include "Globos.h"






globos::globos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, bool inflado)
    :producto(marca, color, tamanio, precio, cant_prod) {
    this->inflado = inflado;

}


void globos::set_inflado(bool inflado) {
    this->inflado = inflado;
    return;
}

bool globos::get_inflado() {
    return this->inflado;
}

globos::~globos() {

}