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
				std::cout << "(������� " << a << "," << d << "," << c << "," << d << "; ���� " << A << "," << B << "," << C << "," << D << ") ������" << std::endl;
				std::cout << std::endl;
			}
			else {		
				anglestThree(A, B, C, sum);		
				std::cout << "(������� " << a << "," << d << "," << c << "; ���� " << A << "," << B << "," << C << ") ������" << std::endl;		
				std::cout << std::endl;
			}
		}
		catch (...)
		{	
		 std::cout << "������ �������� ������. �������: ����� ����� �� ����� " << sum << std::endl;
		 std::cout << std::endl;
		}				
	}	
};




