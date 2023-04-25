
#ifndef _METODODEPAGO_H
#define _METODODEPAGO_H

#include <string>
#include<iostream>
using namespace std;


class Metododepago {
private:
    enum class metodo { efectivo, debito, credito, app };
public:
    Metododepago(metodo met_pag);
    void pagarporadelantado();

    metodo get_metod();



    void set_metp(metodo met_pag);


    ~Metododepago();

};

#endif 