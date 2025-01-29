#include <iostream>

int	main(void)
{
	char buff[512];

	std::cout << "Hello world: " << std::endl;

	std::cout << "input a word: ";
	std::cin >> buff;
	std::cout << "The word was: " << buff << "!" << std::endl;
}