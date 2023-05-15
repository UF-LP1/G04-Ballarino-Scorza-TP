


#include "manteles.h"



manteles::manteles(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, bool impermeable)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {
    this->impermeable = impermeable;
}


void manteles::set_impermeable(bool impermeable) {
    this->impermeable = impermeable;
    return;
}

bool manteles::get_impermeable() {
    return this->impermeable;
}

manteles::~manteles() {

}