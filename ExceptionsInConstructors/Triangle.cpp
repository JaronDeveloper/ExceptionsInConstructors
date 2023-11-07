#include "Triangle.h"

Triangle::Triangle(int nubmer,int a, int b, int c, int A, int B, int C) {		
	if (A + B + C != 180) {	
		throw "sumAngles";
	}
	this->number = nubmer;

	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string Triangle::getType() {
	return NameFigures;
}