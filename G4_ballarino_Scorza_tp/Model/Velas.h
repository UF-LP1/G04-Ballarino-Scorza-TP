

#ifndef _VELAS_H
#define _VELAS_H

#include "producto.h"


class Velas : public producto {
public:

    Velas(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string Material);


    void set_material(string material);

    string get_material();


    ~Velas();
private:
    string Material;
};

#endif 