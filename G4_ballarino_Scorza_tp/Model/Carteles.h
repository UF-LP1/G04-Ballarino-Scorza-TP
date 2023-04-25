
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

    ~Carteles();
};

#endif 