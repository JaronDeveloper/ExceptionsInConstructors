#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
	std::string NameFigures = "Квадрат:";
	Square() {}
	Square(int a, int b, int c, int d, int A, int B, int C, int D);
	const char* what() const override { return "Ошибка создания фигуры. Причина: углы не равны 90"; }
	std::string getType() override;
};