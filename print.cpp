#include <iostream>

double square(double x)
{
	return (x * x);
}

void	printSquare(double x)
{
	std::cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()
{
	char	x;
	int		i;
	std::cout << "input(char) : ";
	std::cin >> x;
	std::cout << x;
	std::cout << "input(int) : ";
	std::cin >> i;
	printSquare(i);
}