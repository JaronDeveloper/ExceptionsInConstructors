#include <iostream>

class  Figures
{
public:
	/*
	Figures() {}
	
	Figures(int a, int b, int c, int A, int B, int C) {
		std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}	
	Figures(int a, int b, int c, int d, int A, int B, int C, int D) {
		std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
	*/
};

/*
void print_info() {
		
}
*/

class  Triangle : public Figures
{
public:
	Triangle() {
		std::cout << "����������� ";
	}	
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		std::cout << "�������������� ";
	}
};

class RightRriangle : public Figures {
public:
	RightRriangle() {
		std::cout << "������������� ����������� ";
	}	
};

class IsoscelesTriangle : public Figures {
public:
	IsoscelesTriangle() {
		std::cout << "�������������� ����������� ";
	}	
};

class EquilateralTriangle : public Figures {
public:
	EquilateralTriangle() {
		std::cout << "�������������� ����������� ";
	}
};

class Rectangle : public Figures {
public:
	Rectangle() {
		std::cout << "������������� ";
	}
};

class Square : public Figures {
public:
	Square() {
		std::cout << "������� ";
	}
};

class Parallelogram : public Figures {
public:
	Parallelogram() {
		std::cout << "�������������� ";
	}
};

class Rhombus : public Figures {
public:
	Rhombus() {
		std::cout << "���� ";
	}
};
