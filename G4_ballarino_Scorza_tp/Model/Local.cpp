


#include "Local.h"




Local::Local(const string Horariosdias_hab, const string Horariosab, const string Nombre, string direccion, string Contacto)
    : Horariosdias_hab(Horariosdias_hab), Horariosab(Horariosab), Nombre(Nombre) {
    this->direccion = direccion;
    this->Contacto = Contacto;
}


const string Local::get_horariodias() {
    return this->Horariosdias_hab;
}


const string Local::get_horasab() {
    return this->Horariosab;
}


const string Local::get_nombre() {
    return this->Nombre;
}


string Local::get_direccion() {
    return this->direccion;
}


string Local::get_contacto() {
    return this->Contacto;
}


void Local::set_direccion(string direccion) {
    this->direccion = direccion;
    return;
}


void Local::set_contacto(string Contacto) {
    this -> Contacto = Contacto;
    return;
}

Local::~Local() {

}