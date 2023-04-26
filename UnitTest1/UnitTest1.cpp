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
			Velas velita;
			velita.set_marca("pepe");
			velita.set_cantprod(7);
			globos globito;
			globos.
		}
	};
}
