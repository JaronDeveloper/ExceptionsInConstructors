#include "Exceptions.cpp"
#include "Figures.cpp"

int main() {
	setlocale(LC_ALL, "Russian");			
	
	Triangle();
	ExceptionsInConstructors(10, 20, 30, 0, 50, 60, 70, 0, 180);

	Quadrilateral();
	ExceptionsInConstructors(10, 20, 30,40, 50, 60, 70,80,360);

	RightRriangle();
	ExceptionsInConstructors(10, 20, 30, 0, 50, 60, 90, 0,180);

	IsoscelesTriangle();
	ExceptionsInConstructors(10, 20, 10, 0, 50, 60, 50, 0, 180);

	EquilateralTriangle();
	ExceptionsInConstructors(10, 20, 10, 0, 50, 60, 50, 0, 160);

	Rectangle();
	ExceptionsInConstructors(10, 20, 10, 20, 90, 90, 90, 90, 360);

	Square();
	ExceptionsInConstructors(20, 20, 20, 20, 90, 90, 90, 90, 360);

	Parallelogram();
	ExceptionsInConstructors(20, 30, 20, 30, 30, 40, 30, 40, 140);

	Rhombus();
	ExceptionsInConstructors(30, 30, 30, 30, 30, 40, 30, 40, 140);
	
	return 0;
}