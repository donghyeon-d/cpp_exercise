#include <iostream>

int main(void) 
{
	char	buff[512];
	int		x;

	std::cout << "Hello World !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	std::cin >> x;
	std::cout << "You entered: [" << x << "]" << std::endl;
	// system("leaks a.out");
}