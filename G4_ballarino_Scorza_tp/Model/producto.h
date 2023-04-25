/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H

class producto {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod
 */
void producto(string marca , string color, string tamanio , string precio , u_int cant_prod );
    
string get_marca();
    
string get_color();
    
string get_tamanio();
    
string get_precio();
    
u_int get_cantprod();
    
/**
 * @param string
 */
void set_marca(void string);
    
/**
 * @param string
 */
void sert_color(void string);
    
/**
 * @param string
 */
void set_tama(void string);
    
/**
 * @param string
 */
void set_precio(void string);
    
/**
 * @param u_int
 */
void set_cantprod(void u_int);
protected: 
    
void producto();
private: 
    string marca;
    string color;
    string tamanio;
    string precio;
    u_int cant_prod;
};

#endif //_PRODUCTO_H