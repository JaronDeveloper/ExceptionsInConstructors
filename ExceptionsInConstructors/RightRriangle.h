#pragma once
#include "Triangle.h"

class RightRriangle : public Triangle {
public:
	std::string NameFigures = "Прямоугольный треугольник:";

	//int a = 10, b = 20, c = 30;
	//int A = 50, B = 60, C = 90;

	RightRriangle() {}
	RightRriangle(int a, int b, int c, int A, int B, int C);

	std::string getType() override;
};