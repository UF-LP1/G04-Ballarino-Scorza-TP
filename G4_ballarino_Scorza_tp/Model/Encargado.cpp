


#include "Encargado.h"
#include <cmath>
#include "Vajilla_descartables.h"
Encargado::Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area)
    :Trabajador(nombre, sexo, DNI, sueldo, horas, dias_vacas), area(area) {

}

/*FUNCION QUE SE ENTREGA Hola cyndy, como bien dice el titulo, esta funcion es para que el encargado busque
lo que quiere comprar el cliente, la idea es que recibe la marca y la cantidad requerida, y el encargado busca
a traves del objeto de la clase producto "listap" encuentra lo pedido. Para esto utilizamos el contenedor dinamico
lista y luego a partir del iterador it, recorremos hasta que se encuentren.
*/
// Ahora recibe mucha cosas por el tp3 
bool Encargado::buscar_pedido_cliente(list<producto> listap, string marca, unsigned int cantidad, bool pararegalar, bool capricho_vajilla, unsigned int cant_caprichos_vaj) {
    std::list<producto>::iterator it;
    
    it = listap.begin();// iterador para que aborde el primer elemento de la lista


    while (it != listap.end())//lista end devuelve iterador que se dirige a la ubicacion que sigue al ultimo elemento de la lista
    {
        if (it->marca == marca && it->cant_prod >= cantidad)//impongo condicion
            
          cobrarproducto(*it, capricho_vajilla, cant_caprichos_vaj);
          envolver_regalo(*it, pararegalar);
        it++;
        return true;
    };
    return false;
}

void Encargado::cobrarproducto(producto& prod, bool capricho_vajilla, unsigned int cant_caprichos_vaj) {
    float precio;
    if (Vajilla_descartables* vajilla = dynamic_cast<Vajilla_descartables*>(&prod))
    {
        if (capricho_vajilla) {
            precio = stof(prod.precio) * cant_caprichos_vaj;
            cout << "cobro el 30%" << endl;
        }
        else
            precio = stof(prod.precio) * prod.cant_prod;//el problema que veo es si tengo un cliente que compra mas de una vajillas, y no todas con capricho
    }
    else
    {
        precio = stof(prod.precio) * prod.cant_prod; //no se puede multiplicar string con unisgned int, por lo que utilizamos stof que covierte el string en float esoecificamente: toma tantos caracteres como sea posible para formar una representación de punto flotante válida y los convierte en un valor de punto flotante.

        cout << "El precio del producto " << prod.marca << " es: $" << precio << endl;
    }
    }

void Encargado::envolver_regalo(producto& prod, bool pararegalar) {
    if (pararegalar)
        cout << "El producto  " << prod.marca << " será envuelto para regalo." << endl;
    else 
        cout << "El producto  " << prod.marca << " no será envuelto para regalo." << endl;
    return;
}



void Encargado::set_area(string area) {
    return;
}


string Encargado::get_area() {
    return this->area;
}

Encargado::~Encargado() {

}