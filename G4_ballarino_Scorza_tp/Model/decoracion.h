
#ifndef _DECORACION_H
#define _DECORACION_H

#include "Articulos_de_resposteria.h"


class decoracion : public Articulos_de_resposteria {
public:
    enum class tipo_dec { grana, chocolate, fondand }; // tuvimos que poner todos los enums publics, para que corran en el main
    private:
    tipo_dec tipdec;
public:

    decoracion(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_dec tipdec);

    tipo_dec get_dec();

    string descripcion(string descripcion) override;//override, est�s indicando de manera expl�cita que est�s sobrescribiendo un m�todo de la clase base
    

    ~decoracion();

};

#endif 