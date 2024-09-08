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

		//comparison operators
		bool operator>(const Fixed &ref);
		bool operator<(const Fixed &ref);
		bool operator>=(const Fixed &ref);
		bool operator<=(const Fixed &ref);
		bool operator==(const Fixed &ref);
		bool operator!=(const Fixed &ref);

		//arithmetic operators
		Fixed operator+(const Fixed &ref);
		Fixed operator*(const Fixed &ref);
		Fixed operator-(const Fixed &ref);
		Fixed operator/(const Fixed &ref);

		//pre/post increment/decrement
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		//min/max
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

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