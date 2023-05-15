

#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(string nombre, char sexo, string DNI, bool capricho_vajilla, unsigned int cant_capricho_vaj, unsigned int numerodeturno, 
    string marca, unsigned int cantidad, bool pararegalar,string formapagar,bool ticketfisico,string mail):persona(nombre, sexo, DNI) {
    this->cant_caprichos_vaj = cant_caprichos_vaj;
    this->capricho_vajilla = capricho_vajilla;
    this->numerodeturno = numerodeturno;
    this->pararegalar = pararegalar;
    this->cantidad = cantidad;
    this->marca = marca;
    this->formapagar = formapagar;
    this->ticketfisico = ticketfisico;
}


bool Cliente::get_capricho() {
    return this->capricho_vajilla;
}


void Cliente::set_capricho(bool capricho) {
    capricho_vajilla =capricho;
    return;
}


unsigned int Cliente::get_cantcapricho() {
    return this->cant_caprichos_vaj;
}


void Cliente::set_cantcapricho(unsigned int  cant_caprcho_vaj) {
    this->cant_caprichos_vaj = cant_caprcho_vaj;
    return;
}


unsigned int Cliente::get_numdeturno() {
    return this->numerodeturno;
}

void Cliente::set_numdeturno(unsigned int setnum) {
    numerodeturno = setnum;
    return;
}


void Cliente::set_regalo(bool pararegalar) {
    this->pararegalar = pararegalar;
    return;
}

bool Cliente::get_regalo() {
    return this->pararegalar;
}

void Cliente:: set_formapagar(string formapagarr) {
    formapagar = formapagarr;
    return;
}
string Cliente::get_formapagar() {
    return this->formapagar;
}
void Cliente::set_ticket(bool ticketfisico) {
    this->ticketfisico = ticketfisico;
    return;
}
bool Cliente::get_ticket() {
    return this->ticketfisico;
}
void Cliente:: set_mail(string mail) {
    this->mail = mail;
    return;
}
string Cliente:: get_mail() {
    return this->mail;
}
Cliente::~Cliente() {

}