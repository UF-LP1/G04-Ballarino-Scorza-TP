

#include "persona.h"
#include<string>


persona::persona(string nombre, char sexo, const string DNI):DNI(DNI) {
    this->nombre = nombre;
    this->sexo = sexo;
    
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


const string persona::get_dni() {
    return DNI;
}


persona::~persona() {

}