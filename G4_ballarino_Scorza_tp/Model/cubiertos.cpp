


#include "cubiertos.h"





cubiertos::cubiertos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_cub tipo_cub)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material) {

}

enum class cubiertos::tipo_cub cubiertos::get_tipocub() {
    return tipocub;
}




cubiertos::~cubiertos() {

}