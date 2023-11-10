#pragma once
#include "Triangle.h"

class RightRriangle : public Triangle {
public:
	std::string NameFigures = "Прямоугольный треугольник:";
	RightRriangle() {}
	RightRriangle(int a, int b, int c, int A, int B, int C);
	const char* what() const override { return "Ошибка создания фигуры. Причина: угол C всегда не равен 90"; }
	std::string getType() override;
};