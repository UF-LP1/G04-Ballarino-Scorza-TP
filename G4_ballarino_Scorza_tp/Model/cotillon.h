/**
 * Project Untitled
 */


#ifndef _COTILLON_H
#define _COTILLON_H

#include "producto.h"


class cotillon: public producto {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod
 */
void cotillon(string marca , string color, string tamanio , string precio , u_int cant_prod );
protected: 
    
void cotillon();
private: 
    string marca;
    string tamanio;
    u_int precio;
};

#endif //_COTILLON_H