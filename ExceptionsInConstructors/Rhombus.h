#pragma once
#include "Triangle.h"

class Rhombus : public Triangle {
public:
	//int	a = 30, b = 30, c = 30, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "Ромб:";

	Rhombus() {}
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};