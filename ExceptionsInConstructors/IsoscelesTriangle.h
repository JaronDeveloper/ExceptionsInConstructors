#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle() {}
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C);
	std::string NameFigures = "Равнобедренный треугольник:";
	const char* what() const override { return "Ошибка создания фигуры. Причина: углы A и C не равны"; }
	std::string getType() override;
};
