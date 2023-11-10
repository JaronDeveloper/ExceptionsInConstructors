#pragma once
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle() {}
	IsoscelesTriangle(int a, int b, int c, int A, int B, int C);
	std::string NameFigures = "�������������� �����������:";
	const char* what() const override { return "������ �������� ������. �������: ���� A � C �� �����"; }
	std::string getType() override;
};
