

#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "cotillon.h"


class disfraces : public cotillon {
private:
    enum class tipo_d_venta { alquiler, compra };
    string nombre;
    string estado;

public:

    disfraces(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_d_venta  tipvent, string nombre, string estado);

    void set_nombre(string nombre);

    string get_nombre();

    string get_estado();

    void set_estado(string estad);

    tipo_d_venta get_tipoventa();

    void set_tipoventa(tipo_d_venta tippventa);

    ~disfraces();


};

#endif 