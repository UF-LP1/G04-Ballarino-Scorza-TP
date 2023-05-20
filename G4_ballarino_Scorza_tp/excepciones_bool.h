#pragma once
#include <iostream>
#include<string>
using namespace std;

class excepciones_bool :public exception {
public:
	const char* what() const throw() {
		return " ingrese parametros validos, '0' o '1'";
	}
};

