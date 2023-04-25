/**
 * Project Untitled
 */


#ifndef _PAPELPICADO_H
#define _PAPELPICADO_H

#include "cotillon.h"


class papelpicado: public cotillon {
public: 
    u_int cant_papel;
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param tipo_envase
 */
void papelpicado(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration tipo_envase);
    
tipo_envase get_envase();
    
/**
 * @param tipo_envase
 */
void set_envase(void tipo_envase);
protected: 
    
void papelpicado();
private: 
    enumeration tipo_envase;
};

#endif //_PAPELPICADO_H