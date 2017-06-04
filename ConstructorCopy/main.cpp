#include <iostream>
#include "Dog.h"
#include "Ogre.h"

int main()
{
	//create dog
	Dog MyDog;
	//set name
	MyDog.SetName("Karo");

	//create new dog based on first dog
	//note: this does not call the class constructor, it automatically calls a copy constructor
	//same as: Dog MyDog2(MyDog);
	Dog MyDog2 = MyDog;

	//ask dogs for their names
	MyDog.Speak();
	MyDog2.Speak();

	//setting a new name on the second dog proves I have created two separate instances
	MyDog2.SetName("Cujo");

	//ask dogs for their names again
	MyDog.Speak();
	MyDog2.Speak();

	//Let's try some Ogres where I have defined my own copy constructor

	std::cout << "----------------------------------------------" << std::endl;

	//new object, uses standard constructor
	Ogre MyOgre;
	MyOgre.SetName("Shrek");
	MyOgre.SetAge(34);
	MyOgre.Speak();

	//this will copy name and age to the new object
	Ogre MyOgre2 = MyOgre;
	MyOgre2.Speak();

	MyOgre2.SetName("Fiona");
	MyOgre2.SetAge(29);
	MyOgre2.Speak();

	//this will copy name and age to the new object
	Ogre MyOgre3(MyOgre2);
	MyOgre3.SetName("Growl");
	MyOgre3.Speak();

	//new object, uses standard constructor
	Ogre MyOgre4;
	MyOgre4.Speak();

	return 0;
}