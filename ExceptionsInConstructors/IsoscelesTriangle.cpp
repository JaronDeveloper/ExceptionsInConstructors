#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) {
	if (A!=C) {
		throw "A!=C";
	}
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string IsoscelesTriangle::getType() {
	return NameFigures;
}