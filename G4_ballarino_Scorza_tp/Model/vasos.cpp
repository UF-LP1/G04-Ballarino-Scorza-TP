

#include "vasos.h"





vasos::vasos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_vaso tip_vaso)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {

}


tipo_vaso vasos::get_tipovas() {
    return;
}


void vasos::set_tipovas(tipo_vaso tip_vaso) {
    return;
}

vasos::~vasos() {

}