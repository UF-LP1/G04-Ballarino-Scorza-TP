

#ifndef _EMPLEADO_H
#define _EMPLEADO_H
#include<list>
#include "Cliente.h"
#include "Trabajador.h"

class Empleado : public Trabajador {
private:
    std::string especialidad;
public:

    Empleado(std::string nombre, char sexo, std::string DNI, unsigned int sueldo, std::string horas, std::string dias_vacas, std::string especialidad);

    void llamarnum(list<Cliente> listac);
    /*
     la idea de llamar es que nuestro empleado tiene la lista de numeros de los clientes, y los va llamaando, en este 
     caso, imprimiendo en pantalla. Creemos que no hace falta ordenar la lista porque consideramos que los numeros ya se
     asginan de menor a mayor segun el orden de llegada.
     */
 
    void set_especia(std::string especialidad);

    std::string get_especia();

    ~Empleado();

};

#endif 