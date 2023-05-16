#include <iostream>
#include <list>
#include<string>
#include "../G4_ballarino_Scorza_tp/Model/producto.h"
#include "../G4_ballarino_Scorza_tp/Model/Encargado.h"
#include "../G4_ballarino_Scorza_tp/Model/Cliente.h"
#include "../G4_ballarino_Scorza_tp/Model/Empleado.h"
#include "../G4_ballarino_Scorza_tp/Model/Globos.h"
#include"Model/Velas.h"
#include"Model/manteles.h"
#include"Model/platos.h"
#include"Model/Golosinas.h"
#include"../G4_ballarino_Scorza_tp/Model/Vajilla_descartables.h"
#include"Model/vasos.h"
#include"Model/cubiertos.h"
#include "Model/servilletas.h"
#include"Model/disfraces.h"
#include"Model/papelpicado.h"
#include"Model/mascara.h"
#include"Model/espuma.h"
#include"Model/art_fluo.h"
#include"Model/Carteles.h"
#include"Model/moldes.h"


using namespace std;

//LA IDEA ES PROBAR LOS METODOS CREANDO LOS OBJETOS NECESARIO
int main() {
    
    /* Primero vamos a hacer funcionar el metodo buscar_pedido_cliente y todos los metodos que son llamados en ella,
    para ellos nos vamos a tener que crear una lista de productos que es la que tiene nuestro encargado para buscar,
    y luego vamos a tener que crear un cliente que es el que elige que va a comprar,
    */
    list<producto> listaProductos;

    // Agregar los  objetos a la lista
    globos miglobos("globin", "rojo", "grande", "20$", 10, true);
    Velas mivela("velin", "blanco", "pequeño", "45$", 5, "cera");
    Golosina migolosina("arcor", "multicolor", "pequeño", "15$", 20, "informe_nutricional", "anana");
    platos miplatos("platova", "verde", "grande", "100$", 8, platos::dec_vajillas::superheroe, "ceramica", "redondo");
    vasos mivaso("sinfondo", "violeta", "mediano", "50$", 12,vasos::dec_vajillas::clubes_de_futbol_, "vidrio", vasos::tipo_vaso::camping);
    cubiertos micubierto("tramontana", "marron", "10cm", "150$", 10, cubiertos::dec_vajillas::jugadores_de_futbol, "madera", cubiertos::tipo_cub::cuchara);
     servilletas miservilleta("elite", "blanca", "10cmcuadrado", "10$", 15, servilletas::dec_vajillas::princesas, "papel", "2mm");
     manteles mimantel("tumantelito", "verde", "1mcuadrado", "125$", 3,manteles::dec_vajillas::superheroe, "nylon", true);
    disfraces midisfraz("zara", "verde", "Medium", "500$", 4, "Hulk", "bueno", "50$");
     papelpicado mipapelpicado("tupapelitopicado", "azul", "50g", "40$", 7, papelpicado::tipo_envase::bolsita);
     mascara mimascara("themask", "verde", "1ocmcuadrados", "170$", 4, true);
     espuma miespuma("diversion", "blanca", "100g", "120$", 9, "lavanda");
    art_fluo miartfluo("tufiestita", "amarillo", "25cm", "60$", 6, true);
    Carteles micarteles("easy", "verde", "2mcuadrado", "110$", 10, "feliz cumple");
    moldes mimoldes("La nona", "plateado", "mediano", "70$", 3, moldes::tipo_molde::pancakes);
    listaProductos.push_back(miglobos);
    listaProductos.push_back(mivela);
    listaProductos.push_back(migolosina);
    listaProductos.push_back(miplatos);
    listaProductos.push_back(mivaso);
    listaProductos.push_back(micubierto);
    listaProductos.push_back(miservilleta);
    listaProductos.push_back(mimantel);
    listaProductos.push_back(midisfraz);
    listaProductos.push_back(mipapelpicado);
    listaProductos.push_back(mimascara);
    listaProductos.push_back(miespuma);
    listaProductos.push_back(miartfluo);
    listaProductos.push_back(micarteles);
    listaProductos.push_back(mimoldes);

    Cliente micliente("Juan pepe", 'M', "41540321", true, 1, 3, "tramontana", 4, true, "Tarjeta de Débito", true, "juanpepitolanus@gmail.com", false, 0, false);
    
    Empleado empleado("Pedro", 'M', "407654321", 2000, "8 horas diarias", "30 días al año", "Ventas");

    Encargado encargado("lucila", 'F', "437654321", 4000, "8 horas diarias", "50 días al año", "Caja");

    empleado.llamarnum(micliente);

    bool prueba = encargado.buscar_pedido_cliente(listaProductos, micliente);

    if (prueba == false)

  cout << "Disculpeme " << micliente.get_nombre() << " , pero no hay stock de lo que pide" << endl;

    else 
        cout << "corre el programa" << endl;

    return 0;
}