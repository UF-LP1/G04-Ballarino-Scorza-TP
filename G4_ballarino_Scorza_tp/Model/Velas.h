

#ifndef _VELAS_H
#define _VELAS_H

#include "producto.h"


class Velas : public producto {
public:

    Velas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string material);


    void set_material(string material);

    string get_material();

    string descripcion(string descripcion) override;//override, est�s indicando de manera expl�cita que est�s sobrescribiendo un m�todo de la clase base

    ~Velas();
private:
    string material;
};

#endif 