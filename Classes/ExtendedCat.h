#pragma once
#include "Cat.h"
class ExtendedCat : public Cat
{
public:
	ExtendedCat() 
	{
		SetColour("red");
	};
	
	void SetColour(std::string);
	std::string GetColour();
	
	std::string Colour = "";

};

