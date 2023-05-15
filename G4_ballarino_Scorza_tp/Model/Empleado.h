

#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include<list>
#include "Cliente.h"
#include "Trabajador.h"


class Empleado : public Trabajador {
private:
    std::string especialidad;
public:

    Empleado(std::string nombre, char sexo, const string DNI, unsigned int sueldo, std::string horas, std::string dias_vacas, std::string especialidad);

    void llamarnum(Cliente miclient);// la idea es que reciba un cliente y lo llame

 
    void set_especia(std::string especialidad);

    std::string get_especia();

    ~Empleado();

};

#endif 