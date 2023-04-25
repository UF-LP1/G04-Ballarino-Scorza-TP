
#ifndef _DECORACION_H
#define _DECORACION_H

#include "Articulos_de_resposteria.h"


class decoracion : public Articulos_de_resposteria {
private:
    enum class tipo_dec { grana, chocolate, fondand };

public:

    decoracion(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_dec tipo_decc);

    tipo_dec get_dec();


    void set_dec(tipo_dec tipdec);

    ~decoracion();

};

#endif 