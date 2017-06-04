#pragma once

class Cat 
{
public:
	//constructor
	Cat();
	//destructor
	~Cat();

	//instance function
	void speak();
	std::string GetName();
	void SetName(std::string);
private:
	//instance variable
	bool bHappy;
	std::string CatName = "Misse";
};