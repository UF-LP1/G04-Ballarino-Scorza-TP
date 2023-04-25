/**
 * Project Untitled
 */


#ifndef _GLOBOS_H
#define _GLOBOS_H

#include "producto.h"


class Globos: public producto {
public: 
    
void Operation1();
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param inflado
 */
void globos(string marca , string color, string tamanio , string precio , u_int cant_prod , bool inflado);
    
/**
 * @param bool
 */
void set_inflado(void bool);
    
bool get_inflado();
protected: 
    
void globos();
private: 
    bool inflado;
};

#endif //_GLOBOS_H