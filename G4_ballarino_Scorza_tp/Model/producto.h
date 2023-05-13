
#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include <string>
#include<iostream>
using namespace std;


class producto {
public:

    producto(string marca, string color, string tamanio, unsigned int precio, unsigned int cant_prod);

    string get_marca();

    string get_color();

    string get_tamanio();

    unsigned int get_precio();

    unsigned int get_cantprod();


    void set_marca(string marca);


    void set_color(string color);


    void set_tama(string tamanio);


    void set_precio(unsigned int precio);


    void set_cantprod(unsigned int cant_prod);


    ~producto();
    ;
public:
    string marca;
    string color;
    string tamanio;
    unsigned int  precio;
    unsigned int cant_prod;
};

#endif 