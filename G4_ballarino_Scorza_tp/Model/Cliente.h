/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "persona.h"
#include "persona.h"
#include "persona.h"


class Cliente: public persona, public persona, public persona {
public: 
    
/**
 * @param nombre 
 * @param sexo 
 * @param DNI 
 * @param capricho_vajilla
 * @param incant_capricho
 * @param numerodeturno 
 * @param pararegalar
 */
void Cliente(string nombre , char sexo , string DNI , bool capricho_vajilla, int incant_capricho, u_int numerodeturno , bool pararegalar );
    
/**
 * @param mimetodo
 */
void elegirmetodo(metododepago mimetodo);
    
/**
 * @param miprod
 */
void elegirprod(producto miprod);
    
bool get_capricho();
    
/**
 * @param bool
 */
void set_capricho(void bool);
    
int get_cantcapricho();
    
/**
 * @param int
 */
void set_cantcapricho(void int);
    
u_int get_numdeturno();
    
/**
 * @param u_int
 */
void set_numdeturno(void u_int);
    
/**
 * @param bool
 */
void set_regalo(void bool);
    
bool get_regalo();
protected: 
    
void Cliente();
private: 
    string Nombre;
    string DNI;
    bool capricho_vajilla;
    int cant_caprichos_vaj;
    u_int numerodeturno;
    bool pararegalar;
};

#endif //_CLIENTE_H