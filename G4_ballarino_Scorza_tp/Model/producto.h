
#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include <string>
#include<iostream>

using namespace std;


class producto {

protected:
    string marca;
    string color;
    string tamanio;
    string  precio;
    unsigned int cant_prod;

public:

    producto(string marca, string color, string tamanio, string precio, unsigned int cant_prod);

    virtual string get_marca();

 virtual   string get_color();

 virtual     string get_tamanio();

 virtual    string get_precio();

 virtual   unsigned int get_cantprod();
    



 virtual  void set_marca(string marca);


 virtual  void set_color(string color);


 virtual   void set_tama(string tamanio);


 virtual     void set_precio(string precio);


 virtual   void set_cantprod(unsigned int cant_prod);

    ~producto();// debemos poner al menos un mertodo  virtual para convertir la clase en abstracta y asi poder hacer dinamic cast

};


#endif 