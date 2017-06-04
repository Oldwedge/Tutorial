#include <iostream>
int main()
{
	char Text[] = "hello";

	std::cout << "Staring with: " << Text << std::endl;

	char* pTextCurrentChar = &Text[0];
	char* pTextLastChar = &Text[4];

	std::cout << "Text['" << Text[0] << "'],['" << std::flush;
	std::cout << Text[1] << "'],['" << std::flush;
	std::cout << Text[2] << "'],['" << std::flush;
	std::cout << Text[3] << "'],['" << std::flush;
	std::cout << Text[4] << "'],[" << std::flush;
	std::cout << int(Text[5]) << "]" << std::endl;


	for (int i = 0; i<sizeof(Text); i++)
	{
		if (pTextCurrentChar == pTextLastChar)
		{
			std::cout << "Breaking out of loop.." << std::endl;
			break;
		}

		//borrowing Text[5] for swapping
		Text[5] = *pTextCurrentChar;

		std::cout << "Text['" << Text[0] << "'],['" << std::flush;
		std::cout << Text[1] << "'],['" << std::flush;
		std::cout << Text[2] << "'],['" << std::flush;
		std::cout << Text[3] << "'],['" << std::flush;
		std::cout << Text[4] << "'],['" << std::flush;
		std::cout << Text[5] << "']" << std::endl;

		*pTextCurrentChar = *pTextLastChar;

		std::cout << "Text['" << Text[0] << "'],['" << std::flush;
		std::cout << Text[1] << "'],['" << std::flush;
		std::cout << Text[2] << "'],['" << std::flush;
		std::cout << Text[3] << "'],['" << std::flush;
		std::cout << Text[4] << "'],['" << std::flush;
		std::cout << Text[5] << "']" << std::endl;

		*pTextLastChar = Text[5];

		std::cout << "Text['" << Text[0] << "'],['" << std::flush;
		std::cout << Text[1] << "'],['" << std::flush;
		std::cout << Text[2] << "'],['" << std::flush;
		std::cout << Text[3] << "'],['" << std::flush;
		std::cout << Text[4] << "'],['" << std::flush;
		std::cout << Text[5] << "']" << std::endl;

		pTextCurrentChar++;
		pTextLastChar--;
	}
	//resetting the last element to 0
	Text[5] = 0;

	std::cout << "Text['" << Text[0] << "'],['" << std::flush;
	std::cout << Text[1] << "'],['" << std::flush;
	std::cout << Text[2] << "'],['" << std::flush;
	std::cout << Text[3] << "'],['" << std::flush;
	std::cout << Text[4] << "'],[" << std::flush;
	std::cout << int(Text[5]) << "]" << std::endl;

	std::cout << "Ending up with: " << Text << std::endl;
	return 0;
}