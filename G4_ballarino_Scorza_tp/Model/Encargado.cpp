


#include "Encargado.h"
#include <cmath>

Encargado::Encargado(string nombre, char sexo, string DNI, unsigned int sueldo, string horas, string dias_vacas, string area)
    :Trabajador(nombre, sexo, DNI, sueldo, horas, dias_vacas), area(area) {

}

/*FUNCION QUE SE ENTREGA Hola cyndy, como bien dice el titulo, esta funcion es para que el encargado busque
lo que quiere comprar el cliente, la idea es que recibe la marca y la cantidad requerida, y el encargado busca
a traves del objeto de la clase producto "listap" encuentra lo pedido. Para esto utilizamos el contenedor dinamico
lista y luego a partir del iterador it, recorremos hasta que se encuentren.
*/

bool Encargado::buscar_pedido_cliente(list<producto> listap, string marca, unsigned int cantidad, bool pararegalar) {
    std::list<producto>::iterator it;
    
    it = listap.begin();// iterador para que aborde el primer elemento de la lista


    while (it != listap.end())//lista end devuelve iterador que se dirige a la ubicacion que sigue al ultimo elemento de la lista
    {
        if (it->marca == marca && it->cant_prod == cantidad)//impongo condicion
            return true;
          cobrarproducto(*it);
          envolver_regalo(*it, pararegalar);
        it++;
    };
    return false;
}

void Encargado::cobrarproducto(producto& prod) {
    float precio;
        precio = stof(prod.precio) * prod.cant_prod; //no se puede multiplicar string con unisgned int, por lo que lo sobrecargamos
    
    cout << "El precio del producto " << prod.marca << " es: $" << precio << endl;
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