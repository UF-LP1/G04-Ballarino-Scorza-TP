
#ifndef _MANTELES_H
#define _MANTELES_H

#include "Vajilla_descartables.h"


class manteles : public Vajilla_descartables {
public:

    manteles(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material, bool impermeable);

    void set_impermeable(bool impermeable);

    bool get_impermeable();
    string descripcion(string descripcion) override;//override, est�s indicando de manera expl�cita que est�s sobrescribiendo un m�todo de la clase base
    ~manteles();
private:
    bool impermeable;
};

#endif