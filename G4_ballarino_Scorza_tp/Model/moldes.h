
#ifndef _MOLDES_H
#define _MOLDES_H

#include "Articulos_de_resposteria.h"


class moldes : public Articulos_de_resposteria {
public:
    enum class tipo_molde { pancakes, tortas, pandulces };//tuvimos que poner todos los enums publics, para que corran en el main
private:
    tipo_molde tipmolde;
public:

    moldes(string marca, string color, string tamanio, string precio, unsigned int cant_prod, tipo_molde tipmolde);

    tipo_molde get_molde();

   

    ~moldes();

};

#endif 