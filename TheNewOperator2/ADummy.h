#pragma once
#include <iostream>
class ADummy
{
public:
	//standard constructor
	ADummy() { std::cout << "Creating ADummy with standard constructor" << std::endl; };
	//copy constructor
	ADummy(const ADummy& CopiedObject):Name(CopiedObject.Name) { std::cout << "Creating ADummy with standard constructor" << std::endl; };
	//destructor
	~ADummy() { std::cout << "Destroying ADummy" << std::endl; };

	void SetName(std::string);
	void Speak();

private:
	std::string Name;
};

