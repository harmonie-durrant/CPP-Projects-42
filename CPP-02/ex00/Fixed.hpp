#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);

		int	getRawBits(void)
		{
			std::cout << "getRawBits member function called" << std::endl;
			return this->_rawBits;
		}
		
	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
};

#endif