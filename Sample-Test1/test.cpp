#include "pch.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../G4_ballarino_Scorza_tp/Model/producto.h"
#include "../G4_ballarino_Scorza_tp/Model/Encargado.h"
#include"../G4_ballarino_Scorza_tp/Model/Globos.h"
#include"../G4_ballarino_Scorza_tp/Model/Golosinas.h"
#include"../G4_ballarino_Scorza_tp/Model/mascara.h"
#include"../G4_ballarino_Scorza_tp/Model/Velas.h"

namespace funcion_buscar_producto
{
	TEST_CLASS(funcion_buscar_producto)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//creo lista de clase productos
			list<producto>listaprod;
			Velas velita;
			velita.set_marca("pepe");
			velita.set_cantprod(7);
			globos globito;
			globito.set_marca("fuimba");
			globito.set_cantprod(7);
			Golosina golo;
			golo.set_marca("arcor");
			golo.set_cantprod(12);
			mascara masc;
			masc.set_marca("joker");
			masc.set_cantprod(4);

			listaprod.push_back(velita);
			listaprod.push_back(globito);
			listaprod.push_back(golo);
			listaprod.push_back(masc);

			Encargado encarg1;
			encarg1.set_nombre("mike");

			bool respuesta = encarg1.buscar_pedido_cliente(listaprod, "joker", 4);

			EXPECT_TRUE(respuesta);

		}
	};
}
