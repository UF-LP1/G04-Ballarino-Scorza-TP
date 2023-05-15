


#include "platos.h"





platos::platos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, string forma)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {
    this->forma = forma;
}


string platos::get_forma() {
    return this->forma;
}


void platos::set_forma(string forma) {
    this->forma = forma;
    return;
}

platos::~platos() {

}