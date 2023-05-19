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
int  main() {
    
    /* Primero vamos a hacer funcionar el metodo buscar_pedido_cliente y todos los metodos que son llamados en ella,
    para ellos nos vamos a tener que crear una lista de productos que es la que tiene nuestro encargado para buscar,
    y luego vamos a tener que crear un cliente que es el que elige que va a comprar,
    */
    list<producto*> listaProductos;

    // Agregar los  objetos a la lista
  
    listaProductos.push_back(new globos("globin", "rojo", "grande", "20$", 10, true));
    listaProductos.push_back(new Velas("velin", "blanco", "peque�o", "45$", 5, "cera"));
    listaProductos.push_back(new Golosina("arcor", "multicolor", "peque�o", "15$", 20, "informe_nutricional", "anana"));
    listaProductos.push_back(new platos("platova", "verde", "grande", "100", 8, platos::dec_vajillas::superheroe, "ceramica", "redondo"));
    listaProductos.push_back(new vasos("sinfondo", "violeta", "mediano", "50$", 12, vasos::dec_vajillas::clubes_de_futbol_, "vidrio", vasos::tipo_vaso::camping));
    listaProductos.push_back(new cubiertos("tramontana", "marron", "10cm", "150", 10, cubiertos::dec_vajillas::jugadores_de_futbol, "madera", cubiertos::tipo_cub::cuchara));
    listaProductos.push_back(new servilletas("elite", "blanca", "10cmcuadrado", "10$", 15, servilletas::dec_vajillas::princesas, "papel", "2mm"));
    listaProductos.push_back(new manteles("tumantelito", "verde", "1mcuadrado", "125$", 3, manteles::dec_vajillas::superheroe, "nylon", true));
    listaProductos.push_back(new disfraces("zara", "verde", "Medium", "500$", 4, "Hulk", "bueno", "50$"));
    listaProductos.push_back(new papelpicado("tupapelitopicado", "azul", "50g", "40$", 7, papelpicado::tipo_envase::bolsita));
    listaProductos.push_back(new mascara("themask", "verde", "1ocmcuadrados", "170$", 4, true));
    listaProductos.push_back(new espuma("diversion", "blanca", "100g", "120$", 9, "lavanda"));
    listaProductos.push_back(new art_fluo("tufiestita", "amarillo", "25cm", "60$", 6, true));
    listaProductos.push_back(new Carteles("easy", "verde", "2mcuadrado", "110$", 10, "feliz cumple"));
    listaProductos.push_back(new moldes("La nona", "plateado", "mediano", "70$", 3, moldes::tipo_molde::pancakes));

    //simulamos cliente
    /*    Cliente(string nombre, char sexo, const string DNI, bool capricho_vajilla, unsigned int cant_capricho_vaj,
        unsigned int numerodeturno,string marca,unsigned int cantidad,bool pararegalar,
        string formapagar, bool ticketfisico, string mail, bool perchasdisfr, unsigned int cantsemana, bool alquiler);

    */
    Cliente micliente("Juan pepe", 'M', "41540321", true, 1, 3, "tramontana", 4, false , "efectivo", false, "juanpepitolanus@gmail.com", false, 0, false);
    
    Empleado empleado("Pedro", 'M', "407654321", 2000, "8 horas diarias", "30 d�as al a�o", "Ventas");

    Encargado encargado("lucila", 'F', "437654321", 4000, "8 horas diarias", "50 d�as al a�o", "Caja");

    empleado.llamarnum(micliente);
    
    bool prueba = encargado.buscar_pedido_cliente(listaProductos, micliente);

    //ahora simulamos ingreso por pantalla
    if (prueba == false)

  cout << "Disculpeme " << micliente.get_nombre() << " , pero no hay stock de lo que pide." << endl;

    else    
        cout << "/corre el main/" << endl;

    for (list<producto*>::iterator it = listaProductos.begin(); it != listaProductos.end(); ++it) {
        delete* it;
    }

    return 0;
}