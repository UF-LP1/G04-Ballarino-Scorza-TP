

#ifndef _PAPELPICADO_H
#define _PAPELPICADO_H

#include "cotillon.h"


class papelpicado : public cotillon {
private:
    enum class tipo_envase { bolsita, cañon };
public:

    papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas);

    tipo_envase get_envase();

    void set_envase(tipo_envase tipenvase);

    ~papelpicado();

};

#endif 