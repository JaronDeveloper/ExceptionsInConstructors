#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) {
	if (A != 60 ||  C != 60 || B != 60) {
		throw EquilateralTriangle();
	}
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string EquilateralTriangle::getType() {
	return NameFigures;
}