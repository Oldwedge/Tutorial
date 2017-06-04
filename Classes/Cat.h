#pragma once
#include <string>
class Cat
{
public:
	Cat() 
	{
		SetSound("meow");
	};

	std::string Sound = "";

	void SetSound(std::string);
	std::string GetSound();
};

