/**
 * Project Untitled
 */


#ifndef _LOCAL_H
#define _LOCAL_H

class Local {
public: 
    
/**
 * @param Horariosdias_hab
 * @param Horariosab
 * @param Nombre
 */
void Local(const string Horariosdias_hab, const string Horariosab, const string Nombre);
    
const string get_horariodias();
    
const string get_horasab();
    
const string get_nombre();
    
string get_direccion();
    
string get_contacto();
    
/**
 * @param string
 */
void set_direccion(void string);
    
/**
 * @param string
 */
void set_contacto(void string);
protected: 
    
void Local();
private: 
    string const Horariosdias_hab;
    string const Horariosab;
    string const Nombre;
    string direccion;
    string Contacto;
};

#endif //_LOCAL_H