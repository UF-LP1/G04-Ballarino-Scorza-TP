
#include "mascara.h"

mascara::mascara(string marca, string color, string tamanio, string precio, unsigned int  cant_prod, bool completa)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    this->completa = completa;
}


bool mascara::get_comp() {
    return this->completa;
}


void mascara::set_comp(bool completa) {
    this->completa = completa;
    return;
}

string mascara::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}
mascara::~mascara() {

}