/**
 * Project Untitled
 */


#ifndef _PLATOS_H
#define _PLATOS_H

#include "Vajilla_descartables.h"


class platos: public platos, public Vajilla_descartables {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material 
 * @param forma
 */
void platos(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material , string forma );
    
string get_forma();
    
/**
 * @param string
 */
void set_forma(void string);
protected: 
    
void platos();
private: 
    string forma;
};

#endif //_PLATOS_H