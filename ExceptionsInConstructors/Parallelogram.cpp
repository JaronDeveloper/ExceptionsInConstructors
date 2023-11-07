#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
	if (A != C && D!=B) {
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

std::string Parallelogram::getType() {
	return NameFigures;
}