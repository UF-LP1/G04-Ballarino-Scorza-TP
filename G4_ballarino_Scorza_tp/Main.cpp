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
#include "excepciones_bool.h"
#include"excepciones_unsigned_int.h"
#include "excepcion_sexo.h"

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
   Cliente micliente("Juan pepe", 'M', "41540321", true, 1, 3, "tramontana", 4, false, "efectivo", false, "juanpepitolanus@gmail.com", false, 0, false);
    
    Empleado empleado("Pedro", 'M', "407654321", 2000, "8 horas diarias", "30 d�as al a�o", "Ventas");

    Encargado encargado("lucila", 'F', "437654321", 4000, "8 horas diarias", "50 d�as al a�o", "Caja");

    empleado.llamarnum(micliente);
    
    bool prueba = encargado.buscar_pedido_cliente(listaProductos, micliente);
    
    if (prueba == false)

  cout << "Disculpeme " << micliente.get_nombre() << " , pero no hay stock de lo que pide." << endl;

    else    
        cout << "El primer cliente fue atendido correctamente" << endl<<endl;
    
    //ahora hacemos ingreso por pantalla
    
    
    try {
        string nombre;
        char sexo;
        const string DNI = "44580621";
        bool capricho_vajilla;
        unsigned int cant_capricho_vaj;
        unsigned int numerodeturno;
        string marca;
        unsigned int cantidad;
        bool pararegalar;
        string formapagar;
        bool ticketfisico;
        string mail;
        bool perchasdisfr;
        unsigned int cantsemana;
        bool alquiler;

        cout << "Ingrese el nombre: " << endl;
        getline(cin, nombre);

        cout << "Ingrese el sexo M o F: " << endl;
        cin >> sexo;
        cin.ignore();// el cin.ignore SE USA PARA QUE LOS ENDLS NO SE INTRERPRETEN MAL EN EL CODIGO, para asegurar correcto control de entrada

        if (sexo != 'M' && sexo != 'F'&& sexo!= 'm'&& sexo!='f') {
            throw excepcion_sexo();
        }

        cout << "Ingrese la marca del producto: " << endl;
        getline(cin, marca);

        cout << "Quiere personalizar la Vajilla? (1 = Si, 0 = No): " << endl;
        cin >> capricho_vajilla;
        cin.ignore();

        if (capricho_vajilla != 1 && capricho_vajilla != 0) {
            throw excepciones_bool();
        }

        if (capricho_vajilla == 0) {
            cant_capricho_vaj = 0;
        }
        else
        { 
            cout << "Ingrese la cantidad de personalizados: " << endl;
            cin >> cant_capricho_vaj;
            cin.ignore();

            if (cant_capricho_vaj < 0) {
                throw excepciones_unsigned_int();
            }
        }
        

        cout << "Ingrese el numero de turno: " << endl;
        cin >> numerodeturno;
        cin.ignore();

        if (numerodeturno < 0) {
            throw excepciones_unsigned_int();
        }

        cout << "Ingrese la cantidad que quieres llevar de ese producto: " << endl;
        cin >> cantidad;
        cin.ignore();

        if (cantidad < 0) {
            throw excepciones_unsigned_int();
        }

        cout << "El producto es para regalar? (1 = Si, 0 = No): " << endl;
        cin >> pararegalar;
        cin.ignore();

        if (pararegalar != 1 && pararegalar != 0) {
            throw excepciones_bool();
        }



        cout << "Ingrese la forma de pago: " << endl;
        getline(cin, formapagar);
        cin.ignore();

        cout << "Desea un ticket fisico? (1 = Si, 0 = No): " << endl;
        cin >> ticketfisico;
        cin.ignore();

        if (ticketfisico != 1 && ticketfisico != 0) {
            throw excepciones_bool();
        }
        if (ticketfisico == 1) {
            mail = "ninguno";
        }
        else {
            cout << "Ingrese el correo electronico: " << endl;
            getline(cin, mail);
            cin.ignore();
        }
       

        cout << "Eliges el disfraz en el local? (1 = Si, 0 = No): " << endl;
        cin >> perchasdisfr;
        cin.ignore();

        if (perchasdisfr != 1 && perchasdisfr != 0) {
            throw excepciones_bool();
        }

        
      

        cout << "Desea alquilar el disfraz? (1 = Si, 0 = No): " << endl;
        cin >> alquiler;
        cin.ignore();

        if (alquiler != 1 && alquiler != 0) {
            throw excepciones_bool();
        }
        if (alquiler == 0) {
            cantsemana = 0;
        }
        else
        {
            cout << "Ingrese la cantidad de semanas de alquiler: " << endl;
            cin >> cantsemana;
            cin.ignore();

            if (cantsemana < 0) {
                throw excepciones_unsigned_int();
            }
        }

        // Crear objeto Cliente con los datos ingresados
        Cliente micliente2(nombre, sexo, DNI, capricho_vajilla, cant_capricho_vaj, numerodeturno, marca, cantidad,
            pararegalar, formapagar, ticketfisico, mail, perchasdisfr, cantsemana, alquiler);

        Empleado empleado2("Pedro", 'M', "407654321", 2000, "8 horas diarias", "30 d�as al a�o", "Ventas");

        Encargado encargado2("lucila", 'F', "437654321", 4000, "8 horas diarias", "50 d�as al a�o", "Caja");

        empleado2.llamarnum(micliente2);

        bool prueba2 = encargado2.buscar_pedido_cliente(listaProductos, micliente2);

        //ahora simulamos ingreso por pantalla
        if (prueba2 == false)

            cout << "Disculpeme " << micliente2.get_nombre() << " , pero no hay stock de lo que pide." << endl;

        else
            cout << "fue atendido correctamente" << endl << endl << endl;

    }
//capturo las excepciones de manera especifica
catch (const excepcion_sexo& e) {
    cout << "Se produjo una excepci�n de tipo excepcion_sexo: " << e.what() << endl;
}
catch (const excepciones_bool& e) {
    cout << "Se produjo una excepci�n de tipo excepciones_bool: " << e.what() << endl;
}
catch (const excepciones_unsigned_int& e) {
    cout << "Se produjo una excepci�n de tipo excepciones_unsigned_int: " << e.what() << endl;
}
catch (const exception& e) {
    cout << "Se produjo una excepci�n: " << e.what() << endl;
}
cin.ignore();

    for (list<producto*>::iterator it = listaProductos.begin(); it != listaProductos.end(); ++it) {
        delete* it;
    }
    


    cout << "/corre el programa/" << endl;

    return 0;
}