
#ifndef _CUBIERTOS_H
#define _CUBIERTOS_H

#include "Vajilla_descartables.h"


class cubiertos : public Vajilla_descartables {
public:
    enum class tipo_cub { cuchara, tenedor, cuchillo };// tuvimos que poner todos los enums publics, para que corran en el main
private:
    tipo_cub tipocub;
public:

    cubiertos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_cub tipo_cub);

    tipo_cub get_tipocub();

    string descripcion(string descripcion);

    ~cubiertos();

};

#endif 