
//ver

#include "decoracion.h"





decoracion::decoracion(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_dec tipo_decc)
    :Articulos_de_resposteria(marca, color, tamanio, precio, cant_prod) {

}


tipo_dec decoracion::get_dec() {
    return this->tipo_decc;
}



void decoracion::set_dec(tipo_dec tipo_decc) {
    return;
}

decoracion::~decoracion() {

}