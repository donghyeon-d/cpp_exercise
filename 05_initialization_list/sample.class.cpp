#include <iostream>
#include "sample.class.hpp"

Sample::Sample( char p1, int p2, float p3) {
	
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 : " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a1 : " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a1 : " << this->a3 << std::endl;

	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) {

	std::cout << "Member fuction bar called" << std::endl;
	return ;
}