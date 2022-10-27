#include <iostream>
#include "sample.class.hpp"

int main()
{
	Sample instance;
	instance.setFoo(10);
	int num = instance.getFoo();
	std::cout << num << std::endl;
	return 0;
}