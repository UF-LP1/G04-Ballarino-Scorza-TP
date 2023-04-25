/**
 * Project Untitled
 */


#ifndef _CARTELES_H
#define _CARTELES_H

#include "cotillon.h"


class Carteles: public cotillon {
public: 
    string frase;
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param frase
 */
void Carteles(string marca , string color, string tamanio , string precio , u_int cant_prod , string frase );
    
string get_frase();
    
/**
 * @param string
 */
void set_frase(void string);
protected: 
    
void Carteles();
};

#endif //_CARTELES_H