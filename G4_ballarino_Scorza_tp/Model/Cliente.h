#ifndef _CLIENTE_H
#define _CLIENTE_H
#include "persona.h"
#include"Encargado.h"//incluyo para hacerla friend, asi puedo hacer la funcion buscar pedido cliente y que no me diga que los atributos son inaccesibles

class Cliente : public persona {
public:

    Cliente(string nombre, char sexo, const string DNI, bool capricho_vajilla, unsigned int cant_capricho_vaj,
        unsigned int numerodeturno,string marca,unsigned int cantidad,bool pararegalar,
        string formapagar, bool ticketfisico, string mail, bool perchasdisfr, unsigned int cantsemana, bool alquiler);


    bool get_capricho();

    void set_capricho(bool capricho);

   unsigned int get_cantcapricho();

    void set_cantcapricho(unsigned int cant_caprcho_vaj);

    unsigned int get_numdeturno();

    void set_numdeturno(unsigned int setnum);

    void set_regalo(bool pararegalar);

    bool get_regalo();

    void set_formapagar(string formapagarr);
    void set_cantidad(unsigned int cantidad);
    unsigned int get_cantidad();
    void set_marca(string marca);
    string get_marca();
    string get_formapagar(); 
    void set_ticket(bool ticketfisico);
    bool get_ticket();
    void set_mail(string mail);
    string get_mail();
    void set_perchas(bool perchasdisfr);
    bool get_perchas();
    friend bool Encargado::buscar_pedido_cliente(list<producto> listap, Cliente micliente);
    unsigned int get_cantsemana();
    void set_cantsemana(unsigned int cantsemana);
    bool get_alquiler();
    void set_alquiler(bool alquiler);
    ~Cliente();

private:

    string marca;//agregamos nombre y cantidad al cliente para que en el main de los pase al encargado
    unsigned int cantidad;
    bool capricho_vajilla;
    unsigned int cant_caprichos_vaj;//cosideramos que esta cantidad debe estar ya que no es la misma de la de los productos sin de la cantidad de cosas personalizadas, por ejemplo puedo comprar 5 platos pero quiero solo tres con fotos del pepe sand
    unsigned int numerodeturno;
    bool pararegalar;
    string formapagar;// creamos atributo forma  de pagar que va a recibir metodo de pago, si la forma de pagar que tiene nuestro cliente es igual a alguna de las alguna de las cuatro manera admitidas, devolvera el metodo de pago para que lo imprima.
    bool ticketfisico;
    string mail;//no lo hacemos en clase persona porque en este trabajo solo lo necesita el cliente
    bool perchasdisfr;// va devolver true si lo agarro del perchero 
    unsigned int cantsemana;//consideramos que se alquila por semanas
    bool alquiler;// consideramos que si es true ,alquila
    
  };

#endif 