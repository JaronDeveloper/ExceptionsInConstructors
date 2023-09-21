#include <iostream>

class  Figures
{
public:
	/*
	Figures() {}
	
	Figures(int a, int b, int c, int A, int B, int C) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}	
	Figures(int a, int b, int c, int d, int A, int B, int C, int D) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
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
		std::cout << "Треугольник ";
	}	
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		std::cout << "Четырёхугольник ";
	}
};

class RightRriangle : public Figures {
public:
	RightRriangle() {
		std::cout << "Прямоугольный треугольник ";
	}	
};

class IsoscelesTriangle : public Figures {
public:
	IsoscelesTriangle() {
		std::cout << "Равнобедренный треугольник ";
	}	
};

class EquilateralTriangle : public Figures {
public:
	EquilateralTriangle() {
		std::cout << "Равносторонний треугольник ";
	}
};

class Rectangle : public Figures {
public:
	Rectangle() {
		std::cout << "Прямоугольник ";
	}
};

class Square : public Figures {
public:
	Square() {
		std::cout << "Квадрат ";
	}
};

class Parallelogram : public Figures {
public:
	Parallelogram() {
		std::cout << "Параллелограмм ";
	}
};

class Rhombus : public Figures {
public:
	Rhombus() {
		std::cout << "Ромб ";
	}
};
