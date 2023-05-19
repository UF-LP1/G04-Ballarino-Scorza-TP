
#ifndef _CARTELES_H
#define _CARTELES_H

#include "cotillon.h"


class Carteles : public cotillon {
private:
    string frase;
public:

    Carteles(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string frase);

    string get_frase();

    void set_frase(string frase);
    string descripcion(string descripcion) override;//override, est�s indicando de manera expl�cita que est�s sobrescribiendo un m�todo de la clase base
    ~Carteles();
};

#endif 