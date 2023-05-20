#pragma once
#include <iostream>
#include<string>
using namespace std;

class excepciones_unsigned_int :public exception {
public:
	const char* what() const throw() {
		return " ingrese parametros validos, no se admite negativos";
	}
};
