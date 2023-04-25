


#include "Vajilla_descartables.h"


Vajilla_descartables::Vajilla_descartables(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material)
    :producto(marca, color, tamanio, precio, cant_prod) {

}


decoracionvajillas Vajilla_descartables::get_deco() {//enum
    return null;
}

/
void Vajilla_descartables::set_deco(decoracionvajillas) {
    return;
}


string Vajilla_descartables::get_material() {
    return "";
}


void Vajilla_descartables::set_material(void string) {
    return;
}

Vajilla_descartables::~vajilla_descartable() {

}