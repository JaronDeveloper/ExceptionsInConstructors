#pragma once
#include "Triangle.h"

class RightRriangle : public Triangle {
public:
	std::string NameFigures = "������������� �����������:";
	RightRriangle() {}
	RightRriangle(int a, int b, int c, int A, int B, int C);
	const char* what() const override { return "������ �������� ������. �������: ���� C ������ �� ����� 90"; }
	std::string getType() override;
};