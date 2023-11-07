#pragma once
#include "Triangle.h"

class Square : public Triangle {
public:
	//int	a = 20, b = 20, c = 20, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	std::string NameFigures = " вадрат:";

	Square() {}
	Square(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};