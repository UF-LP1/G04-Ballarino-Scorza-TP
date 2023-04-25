/**
 * Project Untitled
 */


#ifndef _ARTICULOS_DE_RESPOSTERIA_H
#define _ARTICULOS_DE_RESPOSTERIA_H

#include "producto.h"


class Articulos_de_resposteria: public producto {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod
 */
void Articulos_de_resposteria(string marca , string color, string tamanio , string precio , u_int cant_prod );
    
string get_();
    
void set_precio();
protected: 
    
void Articulos_de_resposteria();
};

#endif //_ARTICULOS_DE_RESPOSTERIA_H