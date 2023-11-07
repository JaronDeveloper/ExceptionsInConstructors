#pragma once
#include "Triangle.h"

class Parallelogram : public Triangle {
public:
	//int	a = 20, b = 30, c = 20, d = 30;
	//int	A = 30, B = 40, C = 30, D = 40;

	std::string NameFigures = "ֿאנאככוכמדנאלל:";

	Parallelogram() {}
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);

	std::string getType() override;
};