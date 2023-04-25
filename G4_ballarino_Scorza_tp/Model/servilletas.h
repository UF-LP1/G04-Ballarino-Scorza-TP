/**
 * Project Untitled
 */


#ifndef _SERVILLETAS_H
#define _SERVILLETAS_H

#include "Vajilla_descartables.h"


class servilletas: public Vajilla_descartables {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material 
 * @param grosor
 */
void servilletas(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material , string grosor );
    
string get_gro();
    
/**
 * @param string
 */
void set_gro(void string);
protected: 
    
void servilletas();
private: 
    string grosor;
};

#endif //_SERVILLETAS_H