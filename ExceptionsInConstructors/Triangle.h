#pragma once
#include "FiguresH.h"

class  Triangle : public Figures
{
public:
	std::string NameFigures = "����������� ";

	Triangle() {}
	Triangle(int number,int a, int b, int c, int A, int B, int C);

	std::string getType() override;
};
