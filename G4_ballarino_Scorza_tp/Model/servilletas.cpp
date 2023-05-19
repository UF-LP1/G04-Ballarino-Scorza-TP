


#include "servilletas.h"


servilletas::servilletas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, string grosor)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {
    this->grosor = grosor;
}


string servilletas::get_gro() {
    return this->grosor;
}

void servilletas::set_gro(string grosor) {
    this->grosor = grosor;
    return;
}

string servilletas::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}

servilletas::~servilletas() {

}