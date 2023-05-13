


#ifndef _PERSONA_H
#define _PERSONA_H
#include<iostream>
#include<string>
using namespace std;


class persona {
public:


    persona(string nombre, char sexo, string DNI);

    string get_nombre();

    void set_nombre(string nombre);

    char get_sexo();

    void set_sexo(char sexo);

    string get_dni();

    void set_dni(string dni);


    ~persona();

protected:
    string nombre;
    char sexo;
    string DNI;
};

#endif