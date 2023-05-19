


#ifndef _ESPUMA_H
#define _ESPUMA_H

#include "cotillon.h"

class espuma : public cotillon {
private:
    string fragancia;
public:

    espuma(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string fragancia);

    string get_frag();

    void set_frag(string fragancia);
    string descripcion(string descripcion) override;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base

    ~espuma();


};

#endif 