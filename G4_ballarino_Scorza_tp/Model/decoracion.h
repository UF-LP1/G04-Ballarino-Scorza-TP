
#ifndef _DECORACION_H
#define _DECORACION_H

#include "Articulos_de_resposteria.h"


class decoracion : public Articulos_de_resposteria {
private:
    enum class tipo_dec { grana, chocolate, fondand };
    tipo_dec tipdec;
public:

    decoracion(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_dec tipdec);

    tipo_dec get_dec();


    

    ~decoracion();

};

#endif 