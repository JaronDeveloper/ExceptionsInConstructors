#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
	Rectangle() {}
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string NameFigures = "�������������:";
	const char* what() const override { return "������ �������� ������. �������: ���� �� ����� 90"; }
	std::string getType() override;
};