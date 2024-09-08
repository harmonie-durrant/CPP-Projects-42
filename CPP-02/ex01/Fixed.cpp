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

Fixed::Fixed(int const raw)
{
	std::cout << "Int Constructor called" << std::endl;
	_rawBits = raw << _fractionalBits;
}

Fixed::Fixed(float const raw)
{
	std::cout << "Float Constructor called" << std::endl;
	_rawBits = (int)roundf(raw * (1 << _fractionalBits));
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
	this->_rawBits = assign.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}

// Getters
int	Fixed::getRawBits(void) const
{
	return _rawBits;
}

// Setters
void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

// Converters
float Fixed::toFloat( void ) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const
{
	return _rawBits >> _fractionalBits;
}
