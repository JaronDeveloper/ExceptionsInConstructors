#pragma once
#include <iostream>

class  Figures
{
public:	
	int a, b, c, d;//�������
	int	A, B, C, D;//����
	int number;//���������� ������
	int sumAngles;

	std::string NameFigures;
	

	virtual std::string getType();	
};

void print_info(Figures* f);

int sum(Figures* f);















