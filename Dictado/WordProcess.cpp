#include "WordProcess.h"
#include <string>

int dictado(const char word[], const indexes wordSize)
{
	//A new variable is created with the size of the word ignoring non-capital letters.
	indexes newSize = 0;

	for (indexes i = 0; i < wordSize; ++i)
	{
		if (word[i] < 97 || word[i] > 122) {
			break;
		}
		newSize = i + 1;
	}

	//If the word has pair size, return the asked value
	if (newSize % 2 == 0)
	{
		return newSize - 1;
	}
	else    //If the word has odd size, create a new word and check if it is palindrome.
	{
		std::string newWord = "";

		for (indexes i = 0; i < newSize; ++i)
		{
			newWord += word[i];
		}

		for (indexes i = 0; i < newSize / 2; ++i)
		{
			if (newWord[i] != newWord[newSize - 1 - i])
				return newSize - 1;     //If it is not a palindrome, return size - 1.
		}
		return 0;  //If it is a palindrome, return 0.
	}
}
