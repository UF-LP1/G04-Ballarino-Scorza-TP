#include "Carteles.h"


Carteles::Carteles(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string frase)
    :cotillon(marca, color, tamanio, precio, cant_prod) {
    this->frase = frase;
}


string Carteles::get_frase() {
    return this->frase;
}


void Carteles::set_frase(string frase) {
    this->frase = frase;
    return;
}

string Carteles::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}

Carteles::~Carteles() {

}