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

// comparison operators
bool Fixed::operator>(const Fixed &ref)
{
	return this->getRawBits() > ref.getRawBits();
}

bool Fixed::operator<(const Fixed &ref)
{
	return this->getRawBits() < ref.getRawBits();
}

bool Fixed::operator>=(const Fixed &ref)
{
	return this->getRawBits() >= ref.getRawBits();
}

bool Fixed::operator<=(const Fixed &ref)
{
	return this->getRawBits() <= ref.getRawBits();
}

bool Fixed::operator==(const Fixed &ref)
{
	return this->getRawBits() == ref.getRawBits();
}

bool Fixed::operator!=(const Fixed &ref)
{
	return this->getRawBits() != ref.getRawBits();
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &ref)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() + ref.getRawBits());
	return tmp;
}

Fixed Fixed::operator*(const Fixed &ref)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * ref.getRawBits() >> _fractionalBits);
	return tmp;
}

Fixed Fixed::operator-(const Fixed &ref)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() - ref.getRawBits());
	return tmp;
}

Fixed Fixed::operator/(const Fixed &ref)
{
	Fixed tmp;

	tmp.setRawBits((this->getRawBits() * (1 << _fractionalBits)) / ref.getRawBits());
	return tmp;
}

// pre/post increment/decrement
Fixed& Fixed::operator++()
{
	this->_rawBits++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

// min/max
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	return a._rawBits < b._rawBits ? a : b;
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	return a._rawBits > b._rawBits ? a : b;
}
