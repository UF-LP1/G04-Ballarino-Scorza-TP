/**
 * Project Untitled
 */


#ifndef _MOLDES_H
#define _MOLDES_H

#include "Articulos_de_resposteria.h"


class moldes: public Articulos_de_resposteria {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param tipo_molde
 */
void moldes(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration tipo_molde );
    
tipo_molde get_molde();
    
/**
 * @param tipo_molde
 */
void set_molde(void tipo_molde);
protected: 
    
void moldes();
private: 
    enumeration tipo_molde;
};

#endif //_MOLDES_H