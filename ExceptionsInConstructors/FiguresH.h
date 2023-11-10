#pragma once
#include <iostream>

class  Figures : public std::exception
{
public:		
	std::string NameFigures;
	virtual std::string getType();	
	virtual void info() {}
};

void print_info(Figures* f);
















