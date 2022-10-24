#include <stdlib.h>
#include <iostream>
#include "sample.class.hpp"

int main()
{
	Sample instance;
	instance.foo = 42;
	std::cout << "instamce.foo : " << instance.foo << std::endl;
	instance.bar();
	return 0;

}