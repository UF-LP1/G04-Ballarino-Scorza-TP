

#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "cotillon.h"


class disfraces : public cotillon {
private:
    
    
    string nombre;
    string estado;
    string preciosemanal;

public:

    disfraces(string marca, string color, string tamanio, string precio, unsigned int cant_prod, string nombre, string estado, string preciosemanal);
    //entendemos que el atributo tamanio contiene el talle
    void set_nombre(string nombre);

    string get_nombre();

    string get_estado();

    void set_estado(string estado);
    string descripcion(string descripcion) override;//override, estás indicando de manera explícita que estás sobrescribiendo un método de la clase base
    
    void set_preciosemanal(string preciosemanal);
    string get_preciosemanal();
   

    ~disfraces();


};

#endif 