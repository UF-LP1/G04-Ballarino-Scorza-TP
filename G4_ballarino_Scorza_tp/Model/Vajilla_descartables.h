
#ifndef _VAJILLA_DESCARTABLES_H
#define _VAJILLA_DESCARTABLES_H

#include "producto.h"


class Vajilla_descartables : public producto {
protected:
   const enum class dec_vajillas{ superheroe, clubes_de_futbol_, jugadores_de_futbol, princesas };
    string material;

public:

    Vajilla_descartables(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material);

   const enum class dec_vajillas get_deco();

    string get_material();

    void set_material(string material);

    ~Vajilla_descartables();

};

#endif 