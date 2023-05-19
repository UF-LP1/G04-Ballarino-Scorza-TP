
//ver

#include "decoracion.h"





decoracion::decoracion(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_dec tipodec)
    :Articulos_de_resposteria(marca, color, tamanio, precio, cant_prod),tipdec(tipodec) {

}

enum class decoracion::tipo_dec decoracion::get_dec() {
    return tipdec;
}

string decoracion::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}

decoracion::~decoracion() {

}