#include <iostream>

void PrintIntegerValue(std::string numberString, int stringLength, int currentIndex = 0, int value = 0)
{
	if (currentIndex == stringLength)
	{
		std::cout << value << std::endl;
		std::cout << "Double of the number = " << 2 * value << std::endl;
		return;
	}
	value = (10 * value) + (numberString[currentIndex] - '0');
	PrintIntegerValue(numberString, stringLength, currentIndex + 1, value);
}

int GetIntegerValue(std::string numberString, int stringLength, int currentIndex = 0, int value = 0)
{
	if (currentIndex == stringLength)
	{
		return value;
	}
	int newValue = (value * 10) + (numberString[currentIndex] - '0');
	return GetIntegerValue(numberString, stringLength, currentIndex + 1, newValue);
}

int main()
{
	std::string numberString = "1546";
	PrintIntegerValue(numberString, numberString.length());
	std::cout << std::endl << std::endl << "Returning Integer" << std::endl;
	int integerValue = GetIntegerValue(numberString, numberString.length());
	std::cout << "Three times integerValue = " << integerValue * 3 << std::endl;
	return 0;
}