


#include "cubiertos.h"





cubiertos::cubiertos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_cub tipo_cub)
    :Vajilla_descartables(marca, color, tamanio, precio, cant_prod, decoracionvajillas, material), tipocub(tipo_cub) {

}

enum class cubiertos::tipo_cub cubiertos::get_tipocub() {/*Ponemos el prototipo de esta manera ya que en este caso al ser un enum, 
 la función devuelve un valor del tipo   enum class cubiertos::tipo_cub,por eso los prototipos de los metodos en enums son diferentes.*/
    return tipocub;
}




cubiertos::~cubiertos() {

}