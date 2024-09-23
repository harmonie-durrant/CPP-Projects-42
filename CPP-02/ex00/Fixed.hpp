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

		// Getters
		int	getRawBits(void) const;

		// Setters
		void setRawBits(int const raw);

	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
};

#endif