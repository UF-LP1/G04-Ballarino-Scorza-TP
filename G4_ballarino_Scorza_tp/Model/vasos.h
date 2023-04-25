/**
 * Project Untitled
 */


#ifndef _VASOS_H
#define _VASOS_H

#include "Vajilla_descartables.h"


class vasos: public Vajilla_descartables {
public: 
    
/**
 * @param marca 
 * @param color
 * @param tamanio 
 * @param precio 
 * @param cant_prod 
 * @param decoraciionvajillas
 * @param material 
 * @param tipo_vaso
 */
void vasos(string marca , string color, string tamanio , string precio , u_int cant_prod , enumeration decoraciionvajillas, string material , enumeration tipo_vaso);
    
tipo_vaso get_tipovas();
    
/**
 * @param tipo_vaso
 */
void set_tipovas(void tipo_vaso);
protected: 
    
void vasos();
private: 
    enumeration tipo_vaso;
};

#endif //_VASOS_H