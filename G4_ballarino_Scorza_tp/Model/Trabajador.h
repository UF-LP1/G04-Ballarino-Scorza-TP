/**
 * Project Untitled
 */


#ifndef _TRABAJADOR_H
#define _TRABAJADOR_H

#include "persona.h"


class Trabajador: public persona {
public: 
    u_int sueldo;
    string horas;
    string dias_vacas;
    
u_int get_sueldo();
    
/**
 * @param u_int
 */
void set_sueldo(void u_int);
    
string get_horas();
    
/**
 * @param string
 */
void set_horas(void string);
    
string get_diasv();
    
/**
 * @param string
 */
void set_diasv(void string);
    
/**
 * @param nombre 
 * @param sexo 
 * @param DNI 
 * @param sueldo 
 * @param horas 
 * @param dias_vacas
 */
void Trabajador(string nombre , char sexo , string DNI , u_int sueldo , string horas , string dias_vacas );
protected: 
    
void Trabajador();
};

#endif //_TRABAJADOR_H