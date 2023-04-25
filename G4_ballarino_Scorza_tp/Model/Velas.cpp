


#include "Velas.h"





Velas::Velas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string Material)
    :producto(marca, color, tamanio, precio, cant_prod) {
    this->Material = Material;

}


void Velas::set_material(string) {
    return;
}


string Velas::get_material() {
    return this->Material;
}

Velas::~Velas() {

}