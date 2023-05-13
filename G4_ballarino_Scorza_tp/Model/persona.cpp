

#include "persona.h"
#include<string>


persona::persona(string nombre, char sexo, string DNI) {
    this->nombre = nombre;
    this->sexo = sexo;
    this->DNI = DNI;
}


string persona::get_nombre() {
    return nombre;
}


void persona::set_nombre(string nombre) {
    this->nombre = nombre;
    return;
}


char persona::get_sexo() {
    return sexo;
}

void persona::set_sexo(char sexo) {
    this->sexo = sexo;
    return;
}


string persona::get_dni() {
    return DNI;
}


void persona::set_dni(string DNI) {
    this->DNI = DNI;
    return;
}

persona::~persona() {

}