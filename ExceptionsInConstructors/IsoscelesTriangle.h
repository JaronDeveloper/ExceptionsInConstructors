#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
	//int	a = 10, b = 20, c = 10;
	//int	A = 50, B = 60, C = 50;

	IsoscelesTriangle() {}
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C);

	std::string NameFigures = "Равнобедренный треугольник:";

	std::string getType() override;
};
