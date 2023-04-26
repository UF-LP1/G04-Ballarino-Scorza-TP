


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

    bool buscar_pedido_cliente(list<producto> listap, string marca, unsigned int cantidad);

   // void envolverregalo(cliente micliente);

    void abrirlocal();

    void cerrarlocal();

    void set_area(string area);

    string get_area();

    ~Encargado();

};

#endif