/**
 * Project Untitled
 */


#ifndef _VAJILLA_DESCARTABLES_H
#define _VAJILLA_DESCARTABLES_H

#include "producto.h"


class Vajilla_descartables: public producto {
public: 
    
void Operation1();
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material
 */
void vajilla_descartables(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material );
    
decoracionvajillas get_deco();
    
/**
 * @param decoracionvajillas
 */
void set_deco(void decoracionvajillas);
    
string get_material();
    
/**
 * @param string
 */
void set_material(void string);
protected: 
    
void vajilla_descartable();
private: 
    enumeration decoracionvajillas;
    string material;
};

#endif //_VAJILLA_DESCARTABLES_H