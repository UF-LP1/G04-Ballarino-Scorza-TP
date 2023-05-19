
#ifndef _ARTICULOS_DE_RESPOSTERIA_H
#define _ARTICULOS_DE_RESPOSTERIA_H

#include "producto.h"

class Articulos_de_resposteria : public producto {
public:

    Articulos_de_resposteria(string marca, string color, string tamanio, string precio, unsigned int cant_prod);
    string descripcion(string descripcion)=0;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base
    ~Articulos_de_resposteria();
};

#endif 