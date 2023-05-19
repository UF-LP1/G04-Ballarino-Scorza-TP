#include "papelpicado.h"


papelpicado::papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas)
    :cotillon(marca, color, tamanio, precio, cant_prod),tipoenvas(tipoenvas) {

}

enum class papelpicado::tipo_envase papelpicado::get_envase() {
    return tipoenvas;
}

string papelpicado::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}
papelpicado::~papelpicado() {

}