#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default Constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// operator
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assign)
		_rawBits = this->getRawBits();
	return *this;
}
