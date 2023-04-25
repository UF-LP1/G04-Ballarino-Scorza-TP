/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "persona.h"
#include "persona.h"
#include "Trabajador.h"


class Empleado: public persona, public persona, public Trabajador {
public: 
    string especialidad;
    
/**
 * @param nombre 
 * @param sexo 
 * @param DNI 
 * @param sueldo 
 * @param horas
 * @param dias_vacas
 * @param especialidad
 */
void Empleado(string nombre , char sexo , string DNI , u_int sueldo , string horas, string dias_vacas, string especialidad);
    
void llamarnum();
    
/**
 * @param micliente
 */
void recibirticket(cliente micliente);
    
void mostrarstock();
    
/**
 * @param string
 */
void set_especia(void string);
    
string get_especia();
protected: 
    
void Empleado();
private: 
    string Nombre;
    char sexo;
};

#endif //_EMPLEADO_H