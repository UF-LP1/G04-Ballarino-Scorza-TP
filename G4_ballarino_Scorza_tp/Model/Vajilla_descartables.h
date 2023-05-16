
#ifndef _VAJILLA_DESCARTABLES_H
#define _VAJILLA_DESCARTABLES_H

#include "producto.h"
#include <string>


class Vajilla_descartables : public producto {
public://tuvimos que poner todos los enums publics, para que corran en el main
    enum  class dec_vajillas { superheroe, clubes_de_futbol_, jugadores_de_futbol, princesas }; // Ponemos ENUM CLASS ya que nos tira la advertencia de "enum type is unscoped,prefer ENUM CLASS over ENUM"
protected:
  
    dec_vajillas decoracionvajillas;
    string material;

public:

    Vajilla_descartables(string marca, string color, string tamanio, string precio, unsigned int cant_prod, dec_vajillas decoracionvajillas, string material);
    dec_vajillas get_deco();

    string get_material();

    void set_material(string material);

 ~Vajilla_descartables();

};

#endif 