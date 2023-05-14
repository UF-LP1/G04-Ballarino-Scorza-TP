


#ifndef _ENCARGADO_H
#define _ENCARGADO_H
#include<list>
#include "producto.h"
#include "Trabajador.h"


class Encargado : public Trabajador {
private:
    
   string area;

public:
    Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area);

    bool buscar_pedido_cliente(list<producto> listap, string marca, unsigned int cantidad, bool pararegalar);
    void cobrarproducto(producto &prod);
    void envolver_regalo(producto &prod,bool pararegalar);
   // void envolverregalo(cliente micliente);
    /* void cobrarproducto(cliente micliente, list<producto> listap) yo reeemplazaria envolver regalo por esta y pondria dentro un if de envolver regalo */
    

    void set_area(string area);

    string get_area();

    ~Encargado();

};
#endif