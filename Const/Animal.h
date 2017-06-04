#pragma once
#include <iostream>
class Animal
{
public:
	Animal() {};
	~Animal() {};
	void SetName(std::string name);
	//the speak method does not change any data, 
	//hence it is good practice to declare it as const
	void speak() const;
private:
	std::string name;
};

