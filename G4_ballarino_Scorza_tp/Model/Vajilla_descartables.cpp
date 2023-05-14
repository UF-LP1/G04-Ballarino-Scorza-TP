


#include "Vajilla_descartables.h"

using namespace std;

Vajilla_descartables::Vajilla_descartables(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material)
    :producto(marca, color, tamanio, precio, cant_prod) {
    this->material = material;
}
enum Vajilla_descartables::dec_vajillas Vajilla_descartables::get_deco() {
    return decoracionvajillas;
}


    
string Vajilla_descartables::get_material() {
    return this->material;
}


void Vajilla_descartables::set_material(string material) {
    this->material = material;
    return;
}

Vajilla_descartables::~Vajilla_descartables() {

}