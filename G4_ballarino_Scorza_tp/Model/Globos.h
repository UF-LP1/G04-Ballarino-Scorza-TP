
#ifndef _GLOBOS_H
#define _GLOBOS_H

#include "producto.h"
#include <string>

class globos : public producto {
public:


    globos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, bool inflado);

    void set_inflado(bool inflado);

    bool get_inflado();

    ~globos();

private:
    bool inflado;
};

#endif 