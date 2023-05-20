#pragma once
#include <iostream>
#include<string>
using namespace std;

class excepcion_sexo :public exception {
public:
	const char* what() const throw() {
		return " Lamentamos que el programa no contemple otros sexos, ingrese 'M' o 'F'";
	}
};

