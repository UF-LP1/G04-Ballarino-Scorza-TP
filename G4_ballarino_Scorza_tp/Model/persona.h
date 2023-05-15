


#ifndef _PERSONA_H
#define _PERSONA_H
#include<iostream>
#include<string>
using namespace std;


class persona {
public:


    persona(string nombre, char sexo, const string DNI);

    string get_nombre();

    void set_nombre(string nombre);

    char get_sexo();

    void set_sexo(char sexo);

  const string get_dni();

    ~persona();

protected:
    string nombre;
    char sexo;
  const string DNI;
};

#endif