#pragma once
#include "Triangle.h"

class Rectangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10, d = 20;
	//int	A = 90, B = 90, C = 90, D = 90;

	Rectangle() {}
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string NameFigures = "Прямоугольник:";

	std::string getType() override;
};