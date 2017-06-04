#pragma once
#include <string>
class Xperson
{
public:
	/*one way of defining constructors
	Xperson() { Name = "John"; Age = 31; };
	Xperson(std::string Name, int Age) { this->Name = Name; this->Age = Age; };
	*/

	//more efficient way of defining constructors, 
	//useful when having a limited number of variables
	Xperson():Name("Unknown"),Age(0) {};
	Xperson(std::string Name, int Age):Name(Name),Age(Age) {};

	std::string ToString();
	
private:
	std::string Name;
	int Age;
};

