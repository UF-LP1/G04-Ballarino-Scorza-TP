/**
 * Project Untitled
 */


#ifndef _ESPUMA_H
#define _ESPUMA_H

#include "cotillon.h"


class espuma: public cotillon {
public: 
    u_int cant_esp;
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param fragancia
 */
void espuma(string marca , string color, string tamanio , string precio , u_int cant_prod , string fragancia );
    
string get_frag();
    
/**
 * @param string
 */
void set_frag(void string);
protected: 
    
void espuma();
private: 
    string fragancia;
};

#endif //_ESPUMA_H