


#include "producto.h"




producto::producto(string marca, string color, string tamanio, string precio, unsigned int cant_prod) {
    this->marca = marca;
    this->color = color;
    this->tamanio = tamanio;
    this->precio = precio;
    this->cant_prod = cant_prod;
}


string producto::get_marca() {
    return this->marca;
}


string producto::get_color() {
    return this->color;
}


string producto::get_tamanio() {
    return this->tamanio;
}


string producto::get_precio() {
    return this->precio;
}


unsigned int producto::get_cantprod() {
    return this->cant_prod;
}


void producto::set_marca(string marca) {
    this->marca = marca;
    return;
}


void producto::set_color(string color) {
    this->color = color;
    return;
}


void producto::set_tama(string tamanio) {
    this->tamanio = tamanio;
    return;
}


void producto::set_precio(string precio) {
    this->precio = precio;
    return;
}

void producto::set_cantprod(unsigned int cant_prod) {
    this->cant_prod = cant_prod;
    return;
}


producto::~producto() {

}


float operator*(const producto& prod, unsigned int cantidad) {
    float precio = std::stof(prod.precio) * cantidad;
    return precio;