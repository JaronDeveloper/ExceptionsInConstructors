#include "RightRriangle.h"

RightRriangle::RightRriangle(int a, int b, int c, int A, int B, int C) {
	if (C != 90) {
		throw RightRriangle();
	}
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

std::string RightRriangle::getType() {
	return NameFigures;
}