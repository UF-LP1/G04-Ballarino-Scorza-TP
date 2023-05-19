

#include "vasos.h"





vasos::vasos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_vaso tip_vaso)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material),tip_vaso(tip_vaso) {

}

enum class vasos::tipo_vaso vasos::get_tipovas() {
    return tip_vaso;
}

string vasos::descripcion(string descripcion) {
    return "funcion virtual para que corrar el dynamic";
}


vasos::~vasos() {

}