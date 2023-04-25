/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H

class persona {
public: 
    
/**
 * @param nombre 
 * @param sexo 
 * @param DNI
 */
void persona(string nombre , char sexo , string DNI );
    
string get_nombre();
    
/**
 * @param string
 */
void set_nombre(void string);
    
char get_sexo();
    
/**
 * @param char
 */
void set_sexo(void char);
    
string get_dni();
    
/**
 * @param string
 */
void set_dni(void string);
protected: 
    
void persona();
private: 
    string nombre;
    char sexo;
    string DNI;
};

#endif //_PERSONA_H