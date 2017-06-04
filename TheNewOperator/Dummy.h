#pragma once
#include <iostream>
class Dummy
{
public:
	Dummy() { std::cout << "Calling constructor" << std::endl; };
	~Dummy() { std::cout << "Calling destructor" << std::endl; };
	void Avoid();
};

