


#include "cubiertos.h"





cubiertos::cubiertos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_cub tipo_cubi)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {

}


tipo_cub cubiertos::get_tipocub() {
    return null;
}


void cubiertos::set_tipocu(tipo_cub tipo_cubi) {
    return;
}

cubiertos::~cubiertos() {

}