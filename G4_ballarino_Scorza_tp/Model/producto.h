
#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include <string>
#include<iostream>
using namespace std;


class producto {
public:

    producto(string marca, string color, string tamanio, string precio, unsigned int cant_prod);

    string get_marca();

    string get_color();

    string get_tamanio();

    string get_precio();

    unsigned int get_cantprod();
    



   virtual void set_marca(string marca)=0;// debemos poner al menos un mertodo  virtual para convertir la clase en abstracta y asi poder hacer dinamic cast


    void set_color(string color);


    void set_tama(string tamanio);


    void set_precio(string precio);


    void set_cantprod(unsigned int cant_prod);


   virtual ~producto();
    
public:
    string marca;
    string color;
    string tamanio;
    string  precio;
    unsigned int cant_prod;
};


#endif 