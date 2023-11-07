#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
	//int	a = 30, b = 30, c = 30;
	//int	A = 60, B = 60, C = 60;

	EquilateralTriangle() {}
	EquilateralTriangle(int a, int b, int c , int A, int B, int C);

	std::string NameFigures = "Равносторонний треугольник:";

	std::string getType() override;
};