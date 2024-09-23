#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const &copy)
{
	this->setRawBits(copy.getRawBits());
}

Fixed::Fixed(int const v): _rawBits(v * (1 << Fixed::_fractionalBits))
{
}

Fixed::Fixed(float const v): _rawBits(roundf(v * (1 << Fixed::_fractionalBits)))
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_rawBits) / (float)(1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fractionalBits);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &final_nbr)
{
	return (str << final_nbr.toFloat());
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->_rawBits = copy.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return (this->toFloat() + copy.toFloat());
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return (this->toFloat() - copy.toFloat());
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	if (copy.toFloat() == 0 || this->toFloat() == 0)
		return (Fixed(0));
	return (this->toFloat() / copy.toFloat());
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return (this->toFloat() * copy.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++this->_rawBits;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--this->_rawBits;
	return (tmp);
}

bool Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	return (second);
}
