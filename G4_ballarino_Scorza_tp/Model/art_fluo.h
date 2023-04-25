

#ifndef _ART_FLUO_H
#define _ART_FLUO_H

#include "cotillon.h"


class art_fluo : public cotillon {

public:

    art_fluo(string marca, string color, string tamanio, string precio, unsigned int cant_prod, bool pilas);

    bool get_pilas();

    void set_pilas(bool pilas);

    ~art_fluo();
private:
    bool pilas;
};

#endif 