#include "papelpicado.h"


papelpicado::papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas)
    :cotillon(marca, color, tamanio, precio, cant_prod) {

}


tipo_envase papelpicado::get_envase() {
    return null;
}


void papelpicado::set_envase(tipo_envase tipoenvas) {
    return;
}

papelpicado::~papelpicado() {

}