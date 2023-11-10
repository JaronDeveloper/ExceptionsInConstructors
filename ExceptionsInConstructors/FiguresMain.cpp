#include "FiguresH.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "RightRriangle.h"
#include "Square.h"

int main() {

	setlocale(LC_ALL, "Russian");

	int a = 0;

	Figures* triangle = new Triangle();
	Figures* quadrilateral = new Quadrilateral();
	Figures* rightRriangle = new RightRriangle();
	Figures* isoscelesTriangle = new IsoscelesTriangle();
	Figures* equilateralTriangle = new EquilateralTriangle();
	Figures* rectangle = new Rectangle();
	Figures* square = new Square();
	Figures* parallelogram = new Parallelogram();
	Figures* rhombus = new Rhombus();

	while (true)
	{
		try
		{			
			switch (a)
			{
			case 0:
				  triangle=new Triangle(3,10,20,30,50,60,70);		
	              print_info(triangle);
				  delete triangle;
				  break;
			case 1:
				quadrilateral = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);				
				print_info(quadrilateral);
				delete quadrilateral;				
				break;
			case 2:
				rightRriangle = new RightRriangle(10,20,30,50,60,90);				
				print_info(rightRriangle);
				delete rightRriangle;
				break;
			case 3:				
			    isoscelesTriangle = new IsoscelesTriangle(10, 20, 10, 50, 60, 50);
				print_info(isoscelesTriangle);
				delete isoscelesTriangle;
				break;
			case 4:
				equilateralTriangle = new EquilateralTriangle(30, 30, 30, 60, 60, 60);
				print_info(equilateralTriangle);
				delete equilateralTriangle;
				break;
			case 5:
				rectangle = new Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
				print_info(rectangle);
				delete rectangle;
				break;
			case 6:
				square = new Square(20, 20, 20, 20, 90, 90, 90, 90);
				print_info(square);
				delete square;
				break;
			case 7:
				parallelogram = new Parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
				print_info(parallelogram);
				delete parallelogram;
				break;
			case 8:
				rhombus = new Rhombus(30, 30, 30, 30, 30, 40, 30, 40);
				print_info(rhombus);
				delete rhombus;
			return 0;
			}
		}

		catch (const Triangle& ex)
		{					
			switch (a)
			{
			case 0:		
			    std::cout << ex.what() << std::endl;
				delete triangle;
				break;
			case 1:				
				std::cout << ex.what() << std::endl;
				delete quadrilateral;
				break;
			case 2:							
				std::cout << ex.what() << std::endl;
				delete rightRriangle;
				break;
			case 3:
				std::cout << ex.what() << std::endl;
				delete isoscelesTriangle;
				break;
			case 4:
				std::cout << ex.what() << std::endl;
				delete equilateralTriangle;
				break;
			case 5:
				std::cout << ex.what() << std::endl;
				delete rectangle;
				break;
			case 6:
				std::cout << ex.what() << std::endl;
				delete square;
				break;
			case 7:
				std::cout << ex.what() << std::endl;
				delete parallelogram;
				break;
			case 8:
				std::cout << ex.what() << std::endl;
				delete rhombus;
			return 0;
			}						
			std::cout << std::endl;				
		}
		catch (...) { std::cout << "Неизвестная ошибка" << std::endl; }
		a++;
	}	
}