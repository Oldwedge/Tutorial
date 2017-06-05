#pragma once
#include <iostream>
class BDummy
{
public:
	BDummy() { std::cout << "Constructing" << std::endl; };
	~BDummy() { std::cout << "Destructing" << std::endl; };

	void SetName(std::string);
	void Speak();
private:
	std::string Name;
};

