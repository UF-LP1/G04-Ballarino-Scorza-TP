#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "persona.h"

class Cliente : public persona {
public:

    Cliente(string nombre, char sexo, string DNI, bool capricho_vajilla, unsigned int cant_capricho_vaj, unsigned int numerodeturno,string marca,unsigned int cantidad,bool pararegalar);

    void elegirmetodo(metododepago mimetodo);

    bool get_capricho();

    void set_capricho(bool capricho);

    int get_cantcapricho();

    void set_cantcapricho(unsigned int cant_caprcho_vaj);

    unsigned int get_numdeturno();

    void set_numdeturno(unsigned int setnum);

    void set_regalo(bool pararegalar);

    bool get_regalo();

    ~Cliente();

private:
    string Nombre;
    string DNI;
    string marca;//agregamos nombre y cantidad al cliente para que en el main de los pase al encargado
    unsigned int cantidad;
    bool capricho_vajilla;
    unsigned int cant_caprichos_vaj;
    unsigned int numerodeturno;
    bool pararegalar;
};

#endif 