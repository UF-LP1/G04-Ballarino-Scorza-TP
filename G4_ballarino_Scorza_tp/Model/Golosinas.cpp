

#include "Golosinas.h"






Golosina::Golosina(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string informe_nutricional, string sabor)
    :producto(marca, color, tamanio, precio, cant_prod) {
    this->informe_nutricional = informe_nutricional;
    this->sabor = sabor;
}


string Golosina::get_informe() {
    return this->informe_nutricional;
}


void Golosina::set_informe(string informe_nutricional) {
    this->informe_nutricional = informe_nutricional;
    return;
}



string Golosina::get_sabor() {
    return this->sabor;
}

void Golosina::set_sabor(string) {
    return;
}

Golosina::~Golosina() {

}