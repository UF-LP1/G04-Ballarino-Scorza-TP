/**
 * Project Untitled
 */


#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "producto.h"
#include "cotillon.h"


class disfraces: public producto, public cotillon {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param tipo_d_venta 
 * @param nombre 
 * @param estado
 */
void disfraces(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration tipo_d_venta , string nombre , string estado );
    
/**
 * @param string
 */
void set_nombre(void string);
    
string get_nombre();
    
string get_estado();
    
/**
 * @param string
 */
void set_estado(void string);
    
tipo_d_venta get_tipoventa();
    
/**
 * @param enumeration
 */
void set_tipoventa(void enumeration);
protected: 
    
void disfraces();
private: 
    enumeration tipo_d_venta;
    string nombre;
    string estado;
    u_int precio;
    u_int cantd;
};

#endif //_DISFRACES_H