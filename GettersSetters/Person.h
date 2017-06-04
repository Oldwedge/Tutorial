#pragma once
#include <string>

class Person
{
public:
	Person();
	std::string GetName();
	void SetName(std::string);
private:
	std::string Name;
	
};
