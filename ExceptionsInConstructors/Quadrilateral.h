#pragma once
#include "Triangle.h"

class Quadrilateral : public Triangle {
public:
	std::string NameFigures = "Четырёхугольник:";
	int d;
	int D;
	Quadrilateral() {}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	const char* what() const override { return "Ошибка создания фигуры. Причина: сумма углов не равна 360"; }
	std::string getType() override;
	void info()override;
};