


#include "Velas.h"





Velas::Velas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string material)
    :producto(marca, color, tamanio, precio, cant_prod) {
    this->material = material;

}


void Velas::set_material(string material) {
    this->material = material;
    return;
}


string Velas::get_material() {
    return this->material;
}

Velas::~Velas() {

}