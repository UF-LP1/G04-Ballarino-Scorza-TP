#include "pch.h"
#include "CppUnitTest.h"


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
			
			list<producto>listaprod;
			Velas miVela("obelisco", "marron", "15cm", "200pe", 19, "cera");
			
			globos miGlobo("de la b", "blanco", "chiquitisimo", "100p", 10, true);
			
			Golosina miGolosina("arcor", "rojo", "10g", "10p", 5, "10gproteina", "frambuesa");
			
			listaprod.push_back(miVela);
			listaprod.push_back(miGlobo);
			listaprod.push_back(miGolosina);
			
			Encargado encargado("Mike", 'M', "30454433", 324242, "8hs", "15 dias", "Ventas");

			bool respuesta = encargado.buscar_pedido_cliente(listaprod, "arcor", 5);

			Assert::IsTrue(respuesta);

		}
	};
}
