#include <iostream>
#include <string>
#include "Dummy.h"
int main()
{
	//creating a new instance of Dummy, and pointing to it using PNewDummy
	Dummy* PNewDummy = new Dummy();

	//Whenever I create objects with the "new" operator I must remember 
	//to delete it when I don't need it any more.
	//Failing to delete references will = creating memory leaks
	//Note! Trying to delete pointers that currently isn't referncing any memory can cause crashes
	delete PNewDummy;

	return 0;
}