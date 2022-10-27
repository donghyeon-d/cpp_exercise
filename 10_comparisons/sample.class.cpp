#include <iostream>
#include "sample.class.hpp"

Sample::Sample(int const a) {
	
	std::cout << "Constructor called" << std::endl;
	this->_foo = a;
	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const {

	return this->_foo;
}

int Sample::compare(Sample *other) const {

	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	else
		return 0;
}