
//ver

#include "moldes.h"


moldes::moldes(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_molde tipmolde)
    :Articulos_de_resposteria(marca, color, tamanio, precio, cant_prod),tipmolde(tipmolde) {

}

enum class  moldes::tipo_molde moldes::get_molde() {
    return tipmolde;
}

string moldes::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}
moldes::~moldes() {

}