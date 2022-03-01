// March 1st, 2022

#include <iostream>
#include <typeinfo>
#include <vector>

int main()
{
	std::string testString;
	testString = "Hello Waffles 66";
	char temp;
	std::vector<char> testVowels;
	std::vector<char> vowelsPresent;
	std::vector<char> consonantsPresent;
	bool containsVowel;
	int numVowels = 0;
	int numConsonants = 0;
	testVowels.push_back('a');
	testVowels.push_back('e');
	testVowels.push_back('i');
	testVowels.push_back('o');
	testVowels.push_back('u');

	for (int count = 0; count < testString.length(); count++)
	{
		containsVowel = false;
		temp = char(tolower(testString[count]));

		if (isalpha(temp))
		{
			for (char x : testVowels)
			{
				if (x == temp)
				{
					containsVowel = true;
					break;
				}
			}

			if (containsVowel == true)
			{
				vowelsPresent.push_back(temp);
			}

			else
			{
				consonantsPresent.push_back(temp);
			}
		}
	}
	
	std::cout << "--------------------RESULTS--------------------" << std::endl;
	std::cout << "Original String: " << testString;
	std::cout << "\n\nNumber of Vowels present: " << vowelsPresent.size() << std::endl;
	
	if (vowelsPresent.empty() == false)
	{
		std::cout << "Vowels: ";

		for (auto it = vowelsPresent.begin(); it != vowelsPresent.end(); it++)
		{
			std::cout << *it;

			if (it != (--vowelsPresent.end())) //If char is not the last element of the vector, add a comma
			{
				std::cout << ", ";
			}
		}
	}

	std::cout << "\n\nNumber of Consonants present: " << consonantsPresent.size() << std::endl;

	if (consonantsPresent.empty() == false)
	{
		std::cout << "Consonants: ";

		for (auto it = consonantsPresent.begin(); it != consonantsPresent.end(); it++)
		{
			std::cout << *it;

			if (it != (--consonantsPresent.end())) //If char is not the last element of the vector, add a comma
			{
				std::cout << ", ";
			}
		}
	}
	
	std::cout << std::endl << std::endl;

	return 0;
}