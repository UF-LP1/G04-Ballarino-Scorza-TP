
#include <iostream>
#include <string>

#ifndef _SERVILLETAS_H
#define _SERVILLETAS_H


#include "Vajilla_descartables.h"


class servilletas : public Vajilla_descartables {

    string grosor;

public:

    servilletas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, string grosor);

    string get_gro();

    void set_gro(string grosor);

    string descripcion(string descripcion) override;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base
    ~servilletas();

};

#endif 