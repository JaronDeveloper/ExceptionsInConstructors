#pragma once
#include "Triangle.h"

class Quadrilateral : public Triangle {
public:
	std::string NameFigures = "��������������:";
	int d;
	int D;
	Quadrilateral() {}
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	const char* what() const override { return "������ �������� ������. �������: ����� ����� �� ����� 360"; }
	std::string getType() override;
	void info()override;
};