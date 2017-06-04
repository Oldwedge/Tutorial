#pragma once
#include <string>
class YetAnotherPerson
{
public:
	YetAnotherPerson() { Name = "John"; Age = 21; };
	//when using the same name (Name) I need to diffrentiate parameter from instance variable using "this->" 
	YetAnotherPerson(std::string Name) { this->Name = Name; Age = 21; };

	void SetName(std::string);
	void SetName2(std::string);
	void SetAge(int);
	std::string GetName();
	int GetAge();
private:
	std::string Name = "";
	int Age = 0;
};

