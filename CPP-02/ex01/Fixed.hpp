#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const raw);
		Fixed(float const raw);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);
		friend std::ostream & operator<<(std::ostream &out, Fixed const &value);

		// Getters
		int	getRawBits(void) const;

		// Setters
		void setRawBits(int const raw);

		// Converters
		float toFloat( void ) const;
		int toInt( void ) const;
		
	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
};

#endif