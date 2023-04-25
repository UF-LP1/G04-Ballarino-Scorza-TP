

#ifndef _VASOS_H
#define _VASOS_H

#include "Vajilla_descartables.h"

class vasos : public Vajilla_descartables {
private:
    enum class tipo_vaso { camping, shot, copa, estandar };

public:
    vasos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, tipo_vaso tip_vaso);
    tipo_vaso get_tipovas();
    void set_tipovas(tipo_vaso tipvaso);
    ~vasos();


};

#endif 