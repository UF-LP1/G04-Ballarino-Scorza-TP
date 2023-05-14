
#ifndef _METODODEPAGO_H
#define _METODODEPAGO_H

#include <string>
#include<iostream>
using namespace std;


class Metododepago {
private:
    enum  metodo { efectivo, debito, credito, app };
    metodo mpago;
public:
    Metododepago(metodo mpago);
    

    metodo get_metod();

    ~Metododepago();

};

#endif 