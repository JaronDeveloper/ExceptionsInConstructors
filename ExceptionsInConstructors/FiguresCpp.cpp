#include "FiguresH.h"

std::string Figures::getType() {
	return NameFigures;	
}

void print_info(Figures* f) {
		std::cout << f->getType();

		if (f->number == 4) {
			std::cout << "(�������: " << f->a << ", " << f->b << ", " << f->c << ", " << f->d <<
				"; ����: " << f->A << ", " << f->B << ", " << f->C << ", " << f->D << ") ������" << std::endl;
		}
		if (f->number == 3) {
			std::cout << "(�������: " << f->a << ", " << f->b << ", " << f->c <<
				"; ����: " << f->A << ", " << f->B << ", " << f->C << ") ������" << std::endl;
		}
		std::cout << std::endl;	
}

int sum(Figures* f) {
	return f->sumAngles ;
}


	










