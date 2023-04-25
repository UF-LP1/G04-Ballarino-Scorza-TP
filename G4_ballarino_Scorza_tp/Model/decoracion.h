/**
 * Project Untitled
 */


#ifndef _DECORACION_H
#define _DECORACION_H

#include "Articulos_de_resposteria.h"


class decoracion: public Articulos_de_resposteria {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param tipo_dec
 */
void decoracion(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration tipo_dec );
    
tipo_dec get_dec();
    
/**
 * @param tipo_dec
 */
void set_dec(void tipo_dec);
protected: 
    
void decoracion();
private: 
    enumeration tipo_dec;
};

#endif //_DECORACION_H