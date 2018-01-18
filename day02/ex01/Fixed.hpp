#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed & operator=(Fixed const &rhs);

		int getRawBits(void) const;

		void setRawBits(int const raw);

		float toFloat(void) const;

		int toInt(void) const;

	private:
		int 				_fixedPointValue;
		static const int 	_fractionalBits;
};

std::ostream &operator<<(std::ostream & o, Fixed const &i);
#endif