#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
	std::string NameFigures = "Ромб:";
	Rhombus() {}
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
	const char* what() const override { return "Ошибка создания фигуры. Причина: углы A,C и B,D попарно не равны"; }
	std::string getType() override;
};