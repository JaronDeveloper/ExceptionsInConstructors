#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle() {}
	EquilateralTriangle(int a, int b, int c , int A, int B, int C);
	std::string NameFigures = "Равносторонний треугольник:";
	const char* what() const override { return "Ошибка создания фигуры. Причина: углы не равны 60"; }
	std::string getType() override;
};