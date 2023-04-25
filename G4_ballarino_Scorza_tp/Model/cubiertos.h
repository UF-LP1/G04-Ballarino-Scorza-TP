/**
 * Project Untitled
 */


#ifndef _CUBIERTOS_H
#define _CUBIERTOS_H

#include "Vajilla_descartables.h"


class cubiertos: public Vajilla_descartables {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material 
 * @param tipo_cub
 */
void cubiertos(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material , enumeration tipo_cub);
    
tipo_cub get_tipocub();
    
/**
 * @param tipo_cub
 */
void set_tipocu(void tipo_cub);
protected: 
    
void cubiertos();
private: 
    enumeration tipo_cub;
};

#endif //_CUBIERTOS_H