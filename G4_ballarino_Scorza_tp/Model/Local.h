
#ifndef _LOCAL_H
#define _LOCAL_H

#include <string>
#include<iostream>
using namespace std;


class Local {
public:

    Local(const string Horariosdias_hab, const string Horariosab, const string Nombre, string direccion, string Contacto);

    const string get_horariodias();

    const string get_horasab();

    const string get_nombre();

    string get_direccion();

    string get_contacto();

    void set_direccion(string direccion);

    void set_contacto(string Contacto);

    ~Local();
private:
    string const Horariosdias_hab;
    string const Horariosab;
    string const Nombre;
    string direccion;
    string Contacto;
};

#endif 