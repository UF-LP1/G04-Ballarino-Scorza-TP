/**
 * Project Untitled
 */


#ifndef _VELAS_H
#define _VELAS_H

#include "producto.h"


class Velas: public producto {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param Material
 */
void Velas(string marca , string color, string tamanio , string precio , u_int cant_prod , string Material );
    
/**
 * @param string
 */
void set_material(void string);
    
string get_material();
protected: 
    
void Velas();
private: 
    string Material;
};

#endif //_VELAS_H