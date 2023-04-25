


#ifndef _PERSONA_H
#define _PERSONA_H
#include<iostream>
#include<string>
using namespace std;


class persona {
public:


    persona(std::string nombre, char sexo, std::string DNI);

    std::string get_nombre();

    void set_nombre(std::string nombre);

    char get_sexo();

    void set_sexo(char sexo);

    std::string get_dni();

    void set_dni(std::string dni);


    ~persona();

protected:
    std::string nombre;
    char sexo;
    std::string DNI;
};

#endif