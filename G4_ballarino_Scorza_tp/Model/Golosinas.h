


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "producto.h"


class Golosina : public producto {
private:
    string informe_nutricional;
    string sabor;
public:


    Golosina(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string informe_nutricional, string sabor);

    string get_informe();

    void set_informe(string informe);


    string get_sabor();

    void set_sabor(string sabor);

    string descripcion(string descripcion) override;//override, est�s indicando de manera expl�cita que est�s sobrescribiendo un m�todo de la clase base

    ~Golosina();

};

#endif 