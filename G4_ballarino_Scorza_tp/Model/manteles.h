/**
 * Project Untitled
 */


#ifndef _MANTELES_H
#define _MANTELES_H

#include "Vajilla_descartables.h"


class manteles: public Vajilla_descartables {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material 
 * @param impermeable
 */
void manteles(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material , bool impermeable );
    
/**
 * @param bool
 */
void set_impermeable(void bool);
    
bool get_impermeable();
protected: 
    
void manteles();
private: 
    bool impermeable;
};

#endif //_MANTELES_H