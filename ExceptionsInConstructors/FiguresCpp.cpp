#include "FiguresH.h"

std::string Figures::getType() {
	return NameFigures;	
}

void print_info(Figures* f) {
		std::cout << f->getType();
		f->info();
		std::cout << std::endl;	
}




	










