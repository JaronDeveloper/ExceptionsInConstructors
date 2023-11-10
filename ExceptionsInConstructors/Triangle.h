#pragma once
#include "FiguresH.h"

class  Triangle : public Figures
{
public:
	std::string NameFigures = "Треугольник ";
	int a, b, c;
	int	A, B, C;
	Triangle() {}
	Triangle(int number,int a, int b, int c, int A, int B, int C);
	const char* what() const override { return "Ошибка создания фигуры. Причина: сумма углов не равна 180"; }
	std::string getType() override;
	void info()override;
};
