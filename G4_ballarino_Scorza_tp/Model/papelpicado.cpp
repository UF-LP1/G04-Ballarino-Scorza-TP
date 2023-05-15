#include "papelpicado.h"


papelpicado::papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas)
    :cotillon(marca, color, tamanio, precio, cant_prod) {

}

enum class papelpicado::tipo_envase papelpicado::get_envase() {
    return tipoenvas;
}


papelpicado::~papelpicado() {

}