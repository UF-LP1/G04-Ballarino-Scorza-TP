

#ifndef _COTILLON_H
#define _COTILLON_H

#include "producto.h"


class cotillon : public producto {
public:

    cotillon(string marca, string color, string tamanio, string precio, unsigned int cant_prod);

    string descripcion(string descripcion) =0;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base

    ~cotillon();
};

#endif 