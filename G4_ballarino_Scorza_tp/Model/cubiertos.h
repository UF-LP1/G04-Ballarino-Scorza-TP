
#ifndef _CUBIERTOS_H
#define _CUBIERTOS_H

#include "Vajilla_descartables.h"


class cubiertos : public Vajilla_descartables {
private:
    enum class tipo_cub { cuchara, tenedor, cuchillo };
public:

    cubiertos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_cub tipo_cubi);

    tipo_cub get_tipocub();

    void set_tipocu(tipo_cub tipocub);

    ~cubiertos();

};

#endif 