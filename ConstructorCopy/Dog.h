#pragma once
#include <string>
class Dog
{
public:
	Dog() 
	{
		std::cout << "Constructor says: Dog created" << std::endl;
	};
	~Dog() {};
	void SetName(std::string);
	void Speak();
private:
	std::string Name;
};

