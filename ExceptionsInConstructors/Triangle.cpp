#include "Triangle.h"

Triangle::Triangle(int nubmer,int a, int b, int c, int A, int B, int C) {		
	if (A + B + C != 180) {	
		throw Triangle();
	}
	this->a = a;
	this->b = b;
	this->c = c;

	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::info() {
	std::cout << "(�������: " << this->a << ", " << this->b << ", " << this->c <<
		"; ����: " << this->A << ", " << this->B << ", " << this->C << ") ������" << std::endl;
}

std::string Triangle::getType() {
	return NameFigures;
}