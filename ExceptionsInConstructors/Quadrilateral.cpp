#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
	if (A + B + C + D != 360) {
		throw Quadrilateral();
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

void Quadrilateral::info() {
	std::cout << "(стороны: " << this->a << ", " << this->b << ", " << this->c << ", " << this->d <<
		"; ”глы: " << this->A << ", " << this->B << ", " << this->C << ", " << this->D << ") создан" << std::endl;
}

std::string Quadrilateral::getType() {
	return NameFigures;
}