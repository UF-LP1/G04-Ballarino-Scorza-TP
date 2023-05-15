


#include "Encargado.h"
#include <cmath>
#include "Vajilla_descartables.h"
#include "Cliente.h"
#include "producto.h"

Encargado::Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area)
    :Trabajador(nombre, sexo, DNI, sueldo, horas, dias_vacas), area(area) {

}
float Encargado::preciototal = 0;
/*HOLA CYNDY, CAMBIAMOS LO QUE RECIBE LA FUNCION BUSCAR PEDIDO CLIENTE, EN VEZ DE QUE RECIBA UNA MARCA Y UN CLIENTE, AHORA COMO
DEBEMOS HACER MAS COSAS, ENCONTRAMOS MAS COMODO PASAR UN CLIENTE, Y ESTE VA A TENER COMO ATRIBUTO LA MARCA ELEGIDA, CON SU CANTIDAD
CORREPONDIENTE
*/
bool Encargado::buscar_pedido_cliente(list<producto> listap, Cliente micliente) {
    std::list<producto>::iterator it;
    
    it = listap.begin();// iterador para que aborde el primer elemento de la lista


    while (it != listap.end())//lista end devuelve iterador que se dirige a la ubicacion que sigue al ultimo elemento de la lista
    {
        if (it->get_marca() == micliente.marca && it->get_cantprod() >= micliente.cantidad)//impongo condicion
            
          cobrarproducto(*it, micliente.capricho_vajilla, micliente.cant_caprichos_vaj,micliente.formapagar,micliente.ticketfisico,micliente.mail);
          envolver_regalo(*it,micliente.pararegalar);
        it++;
        return true;
    };
    return false;
}

void Encargado::cobrarproducto(producto& prod, bool capricho_vajilla, unsigned int cant_caprichos_vaj,string formapago,bool ticketfisico,string mail) {
    
    if (Vajilla_descartables* vajilla = dynamic_cast<Vajilla_descartables*>(&prod))// Hacemos un dynamic cast para ver si el producto es de tipo vajillas, el dynamic cast es para poder crear punteros de clases derivadas de namera segura,esto funcionano nos deja poner capricho vajilla dentro del if
    {
        if (capricho_vajilla) {
            Encargado::preciototal = stof(prod.get_precio()) * cant_caprichos_vaj;//no se puede multiplicar string con unisgned int, por lo que utilizamos stof que covierte el string en float esoecificamente: toma tantos caracteres como sea posible para formar una representación de punto flotante válida y los convierte en un valor de punto flotante.

            cout << "debera pagar por adelantado:" <<(Encargado::preciototal)* 0.3 << " $." << endl;

        }
    }
   
    
        Encargado::preciototal += stof(prod.get_precio()) * prod.get_cantprod();
        string formapaga = manerapagar(formapago);//no lo llamamos directamente en el cout, porque si no tiene forma de pagar se imprimiria que abona sin tener forma de pago, entonces lo sometemos a una condicion
        if (formapaga == "no tiene forma de pago") {
            cout << "no te puedo vender" << endl;
            return;
        }
        if (ticketfisico) {
            cout << "Ticket fisico: El precio de    " << prod.get_marca() << " es: $" << Encargado::preciototal << "y abona en " << formapaga << "." << endl;
      }else
            cout<<"Enviar al mail:"<<mail<<"."<< "El precio de" << prod.get_marca() << " es: $" << Encargado::preciototal << "y abona en " << formapaga << "." << endl;

        
      return;
    }


void Encargado::envolver_regalo(producto& prod, bool pararegalar) {
    if (pararegalar)
        cout << "El producto  " << prod.get_marca() << " será envuelto para regalo." << endl;
    else 
        cout << "El producto  " << prod.get_marca() << " no será envuelto para regalo." << endl;
    return;
}

string Encargado::manerapagar(string formapago) {
   
    if (formapago == "efectivo") {
        return "Efectivo";
    }
    else if (formapago == "debito") {
        return "Tarjeta de Débito";
    }
    else if (formapago == "credito") {
        return "Tarjeta de Crédito";
    }
    else if (formapago == "app") {
        return "Pago por Aplicación";
    }
    else {

        return "no tiene forma de pago";
    }
}

void Encargado::set_area(string area) {
    this->area = area;
    return;
}


string Encargado::get_area() {
    return this->area;
}

Encargado::~Encargado() {

}