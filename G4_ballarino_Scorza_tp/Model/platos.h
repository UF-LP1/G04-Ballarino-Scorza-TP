

#ifndef _PLATOS_H
#define _PLATOS_H

#include "Vajilla_descartables.h"


class platos :public Vajilla_descartables {
public:

    platos(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, string forma);

    string get_forma();

    void set_forma(string forma);

    ~platos();
private:
    string forma;
};

#endif 