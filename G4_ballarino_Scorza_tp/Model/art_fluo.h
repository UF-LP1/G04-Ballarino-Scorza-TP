/**
 * Project Untitled
 */


#ifndef _ART_FLUO_H
#define _ART_FLUO_H

#include "cotillon.h"


class art_fluo: public cotillon {
public: 
    bool pilas;
    u_int cant_art;
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param pilas
 */
void art_fluo(string marca , string color, string tamanio , string precio , u_int cant_prod , bool pilas );
    
bool get_pilas();
    
/**
 * @param bool
 */
void set_pilas(void bool);
protected: 
    
void art_fluo();
private: 
    bool pilas;
};

#endif //_ART_FLUO_H