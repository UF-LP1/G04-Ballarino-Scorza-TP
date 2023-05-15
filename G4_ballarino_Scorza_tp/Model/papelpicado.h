

#ifndef _PAPELPICADO_H
#define _PAPELPICADO_H

#include "cotillon.h"


class papelpicado : public cotillon {
private:
    enum class tipo_envase { bolsita, cañon };
    tipo_envase tipoenvas;
public:

    papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas);

    tipo_envase get_envase();

   

    ~papelpicado();

};

#endif 