

#ifndef _EMPLEADO_H
#define _EMPLEADO_H


#include "Trabajador.h"

class Empleado : public Trabajador {
private:
    std::string especialidad;
public:

    Empleado(std::string nombre, char sexo, std::string DNI, unsigned int sueldo, std::string horas, std::string dias_vacas, std::string especialidad);

    void llamarnum();

    void recibirticket(cliente micliente);

    void mostrarstock();

    void set_especia(std::string especialidad);

    std::string get_especia();

    ~Empleado();

};

#endif 