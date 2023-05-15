

#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include<list>
#include "Cliente.h"
#include "Trabajador.h"


class Empleado : public Trabajador {
private:
    string especialidad;
public:

    Empleado(string nombre, char sexo, const string DNI, unsigned int sueldo, string horas, string dias_vacas, string especialidad);

    void llamarnum(Cliente miclient);// la idea es que reciba un cliente y lo llame

 
    void set_especia(string especialidad);

    string get_especia();

    ~Empleado();

};

#endif 