#include <iostream>
#include "sample.class.hpp"

int main()
{
	Sample instance1(42);
	Sample a(20);
	Sample &instance2(instance1);
	std::cout << instance2.getFoo() << std::endl;
	Sample *instance3 (&instance1);
	instance3 = &a; // 가능
	instance2 = a; // 불가능
	std::cout << instance2.getFoo() << std::endl;


	// if (&instance1 == &instance1)
	// 	std::cout << "1 == 1 ? physically equal" << std::endl;
	
	// if (&instance1 == &instance2)
	// 	std::cout << "1 == 2 ? physically equal" << std::endl;

	// if (instance1.compare(&instance2) == 0)
	// 	std::cout << "1_foo == 2_foo ? equal" << std::endl;

	return 0;
}
