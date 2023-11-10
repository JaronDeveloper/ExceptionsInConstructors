#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
	std::string NameFigures = "����:";
	Rhombus() {}
	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
	const char* what() const override { return "������ �������� ������. �������: ���� A,C � B,D ������� �� �����"; }
	std::string getType() override;
};