

#ifndef _PAPELPICADO_H
#define _PAPELPICADO_H

#include "cotillon.h"


class papelpicado : public cotillon {
public:
    enum class tipo_envase { bolsita, cañon };// tuvimos que poner todos los enums publics, para que corran en el main
private:
    tipo_envase tipoenvas;
public:

    papelpicado(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_envase tipoenvas);

    tipo_envase get_envase();

   

    ~papelpicado();

};

#endif 