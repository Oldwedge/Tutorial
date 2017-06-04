#pragma once
#include <string>
class AnotherPerson 
{
public:
	AnotherPerson() { Name = "John"; Age = 42; };
	AnotherPerson(std::string NewName) { Name = NewName; };
	AnotherPerson(int NewAge) {Age = NewAge; };
	AnotherPerson(std::string NewName, int NewAge) {Name = NewName; Age = NewAge; };

	std::string GetPersonData();
private:
	std::string Name = "Donald";
	int Age = 0;
};