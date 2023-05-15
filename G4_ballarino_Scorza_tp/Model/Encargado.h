


#ifndef _ENCARGADO_H
#define _ENCARGADO_H
#include<list>
#include "Trabajador.h"

class producto;
class Cliente;/* no se puede agregar al encabezado #include cliente.h , ya que se crea un bucle(porque encargado ya esta llamado en cliente,
              y encontramos en la seccion foward declaration de cpp.reference que se resuelve asi, y se llama 
               identificador de atributo de clave de clase;
              */


class Encargado : public Trabajador {
private:
    static float preciototal;
   string area;
   

public:
    Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area);

    bool  buscar_pedido_cliente(list<producto> listap, Cliente micliente);
    void cobrarproducto(producto& prod,Cliente micliente);
    void envolver_regalo(producto& prod, bool pararegalar);
    string manerapagar(string formapago);
    void set_area(string area);

    string get_area();

    ~Encargado();

};
#endif