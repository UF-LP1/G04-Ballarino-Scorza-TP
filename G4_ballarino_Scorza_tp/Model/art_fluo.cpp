#include "art_fluo.h"




art_fluo::art_fluo(string marca, string color, string tamanio, string precio, unsigned int cant_prod, bool pilas)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    this->pilas = pilas;
}


bool art_fluo::get_pilas() {
    return this->pilas;
}


void art_fluo::set_pilas(bool pilas) {
    this->pilas = pilas;
    return;
}

art_fluo::~art_fluo() {

}