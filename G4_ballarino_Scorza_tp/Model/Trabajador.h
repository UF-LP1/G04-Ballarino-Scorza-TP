


#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include "persona.h"
#include<string>
#include<iostream>

class Trabajador : public persona {
protected:
    unsigned int sueldo;
    string horas;
    string dias_vacas;

public:
    Trabajador(string nombre, char sexo, const string DNI, unsigned int sueldo, string horas, string dias_vacas);

    unsigned int get_sueldo();

    void set_sueldo(unsigned int sueldo);

    string get_horas();

    void set_horas(string horas);

    string get_diasv();


    void set_diasv(string dias_vacas);

    ~Trabajador();
};

#endif 