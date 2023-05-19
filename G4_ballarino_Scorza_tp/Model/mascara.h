


#ifndef _MASCARA_H
#define _MASCARA_H

#include "cotillon.h"

class mascara : public cotillon {
public:

    mascara(string marca, string color, string tamanio, string precio, unsigned int cant_prod, bool completa);

    bool get_comp();

    void set_comp(bool completa);
    string descripcion(string descripcion) override;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base
    ~mascara();
private:
    bool completa;
};

#endif 