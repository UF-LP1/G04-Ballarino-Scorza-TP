/**
 * Project Untitled
 */


#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "producto.h"


class Golosinas: public producto {
public: 
    
void Operation1();
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param informe nutricional 
 * @param sabor
 */
void Golosina(string marca , string color, string tamanio , string precio , u_int cant_prod , string informe nutricional , string sabor);
    
string get_informe();
    
/**
 * @param string
 */
void set_informe(void string);
    
void Operation2();
    
string get_sabor();
    
/**
 * @param string
 */
void set_sabor(void string);
protected: 
    
void Golosina();
private: 
    string informe nutricional;
    string sabor;
};

#endif //_GOLOSINAS_H