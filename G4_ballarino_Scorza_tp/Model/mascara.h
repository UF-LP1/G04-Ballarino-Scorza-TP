/**
 * Project Untitled
 */


#ifndef _MASCARA_H
#define _MASCARA_H

#include "cotillon.h"


class mascara: public cotillon {
public: 
    u_int cant_masc;
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param completa
 */
void mascara(string marca , string color, string tamanio , string precio , u_int cant_prod , bool completa );
    
bool get_comp();
    
/**
 * @param bool
 */
void set_comp(void bool);
protected: 
    
void mascara();
private: 
    bool completa;
};

#endif //_MASCARA_H