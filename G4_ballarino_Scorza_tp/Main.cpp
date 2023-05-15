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
#include"Model/Vajilla_descartables.h"
#include"Model/vasos.h"}
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
    std::list<producto> listaProductos;

    // Agregar objetos de todas las clases derivadas a la lista
    globos miglobos("globin", "rojo", "grande", "20.9", 10, true);
    Velas mivela("velin", "blanco", "pequeño", "45", 5, "cera");
    Golosina migolosina("arcor", "multicolor", "pequeño", "15", 20, "informe_nutricional", "anana");
    platos miplatos("platova", "verdes", "grande", "50", 8, dec_vajillas::superheroe, "ceramica", "redondos");
    vasos mivaso("sinfondo", "violeta", "mediano", "28", 12, dec_vajillas::clubes_de_futbol_, "vidrio", tipo_vaso::camping);
    cubiertos micubierto("marca_cubiertos", "color_cubiertos", "tamanio_cubiertos", "precio_cubiertos", 6, dec_vajillas::jugadores_de_futbol, "material_cubiertos", tipo_cub::cuchara);
     servilletas miservilleta("marca_servilletas", "color_servilletas", "tamanio_servilletas", "precio_servilletas", 15, dec_vajillas::princesas, "material_servilletas", "grosor_servilletas");
     manteles mimantel("marca_manteles", "color_manteles", "tamanio_manteles", "precio_manteles", 3, dec_vajillas::superheroe, "material_manteles", true);
    disfraces midisfraz("marca_disfraces", "color_disfraces", "tamanio_disfraces", "precio_disfraces", 2, "nombre_disfraces", "estado_disfraces", "preciosemanal_disfraces");
     papelpicado mipapelpicado("marca_papelpicado", "color_papelpicado", "tamanio_papelpicado", "precio_papelpicado", 7, tipo_envase::bolsita);
     mascara mimascara("marca_mascara", "color_mascara", "tamanio_mascara", "precio_mascara", 4, true);
     espuma miespuma("marca_espuma", "color_espuma", "tamanio_espuma", "precio_espuma", 9, "fragancia_espuma");
    art_fluo miartfluo("marca_art_fluo", "color_art_fluo", "tamanio_art_fluo", "precio_art_fluo", 6, true);
    Carteles micarteles("marca_carteles", "color_carteles", "tamanio_carteles", "precio_carteles", 10, "frase_carteles");
    moldes mimoldes("marca_moldes", "color_moldes", "tamanio_moldes", "precio_moldes", 3, tipo_molde::pancakes);
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

    Cliente cliente("Juan", 'M', "123456789", true, 5, 1, "arcor", 10, true, "Tarjeta", true, "cliente@ejemplo.com", false, 2, true);
    Empleado empleado("Pedro", 'M', "987654321", 2000, "8 horas diarias", "30 días al año", "Ventas");
    empleado.llamarnum(cliente);
    //se me ocurrio crear una funcion de empleado que pida cuantas cosas quiere comprar para saber hasta donde va el for . y hay problemas em el constructor de empleado












    cout << "corre el programa" << endl;
    return 0;
}