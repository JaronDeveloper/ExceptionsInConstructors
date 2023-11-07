#include "Square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) {
	if (A != 90 || C != 90 || B != 90 || D != 90) {
		throw "sumAngles";
	}
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;

	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

std::string Square::getType() {
	return NameFigures;
}