/**
 * Project Untitled
 */


#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "persona.h"
#include "persona.h"
#include "Trabajador.h"


class Encargado: public persona, public persona, public Trabajador {
public: 
    void Attribute1;
    string area;
    producto listap;
    
/**
 * @param nombre 
 * @param sexo 
 * @param DNI 
 * @param sueldo 
 * @param horas
 * @param dias_vacas
 * @param area
 */
void Encargado(string nombre , char sexo , string DNI , u_int sueldo , string horas, string dias_vacas, string area);
    
/**
 * @param lista producto
 * @param string marca
 * @param u_int cantidad
 */
bool buscar_pedido_cliente(void lista producto, void string marca, void u_int cantidad);
    
/**
 * @param micliente
 */
void envolverregalo(cliente micliente);
    
void abrirlocal();
    
void cerrarlocal();
    
/**
 * @param string
 */
void set_area(void string);
    
string get_area();
protected: 
    
void Encargado();
private: 
    string Nombre;
    char sexo;
};

#endif //_ENCARGADO_H