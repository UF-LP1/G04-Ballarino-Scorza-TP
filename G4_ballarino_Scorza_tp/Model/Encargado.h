


#ifndef _ENCARGADO_H
#define _ENCARGADO_H
#include<list>
#include "producto.h"
#include "Trabajador.h"


class Encargado : public Trabajador {
private:
    static float preciototal;
   string area;

public:
    Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area);

    bool buscar_pedido_cliente(list<producto> listap, string marca, unsigned int cantidad, bool pararegalar, bool capricho_vajilla, unsigned int cant_caprichos_vaj);
    void cobrarproducto(producto& prod, bool capricho_vajilla, unsigned int cant_caprichos_vaj);
    void envolver_regalo(producto& prod, bool pararegalar);
    

    void set_area(string area);

    string get_area();

    ~Encargado();

};
#endif