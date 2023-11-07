#pragma once
#include "Triangle.h"

class Quadrilateral : public Triangle {
public:
	std::string NameFigures = "Четырёхугольник:";

	//int a = 10, b = 20, c = 30, d = 40;
	//int A = 50, B = 60, C = 70, D = 80;

	Quadrilateral() {}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};