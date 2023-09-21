#include <iostream>

int anglestThree(int A, int B, int C, int sumAngles) {	
	
	if (A+B+C!=sumAngles) {	
		throw "sumAngles";
	}	
	return sumAngles;
}

int anglestFour(int A, int B, int C, int D,int sumAngles) {	
	
	if (A + B + C + D != sumAngles) {	
		throw "sumAngles";
	}	
	return sumAngles;
}

class ExceptionsInConstructors
{
public:	
	ExceptionsInConstructors(int a,int b,int c,int d,int A, int B, int C,int D,int sum) {				
		try
		{		
			if (D != 0) {				
				anglestFour(A, B, C, D, sum);
				std::cout << "(стороны " << a << "," << d << "," << c << "," << d << "; углы " << A << "," << B << "," << C << "," << D << ") создан" << std::endl;
				std::cout << std::endl;
			}
			else {		
				anglestThree(A, B, C, sum);		
				std::cout << "(стороны " << a << "," << d << "," << c << "; углы " << A << "," << B << "," << C << ") создан" << std::endl;		
				std::cout << std::endl;
			}
		}
		catch (...)
		{	
		 std::cout << "Ошибка создания фигуры. Причина: сумма углов не равна " << sum << std::endl;
		 std::cout << std::endl;
		}				
	}	
};




