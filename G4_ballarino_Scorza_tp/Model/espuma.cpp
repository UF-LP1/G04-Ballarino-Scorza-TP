


#include "espuma.h"


espuma::espuma(string marca, string color, string tamanio, string precio, unsigned int  cant_prod, string fragancia)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    this->fragancia = fragancia;
}


string espuma::get_frag() {
    return this->fragancia;
}


void espuma::set_frag(string fragancia) {
    return;
}

espuma::~espuma() {

}