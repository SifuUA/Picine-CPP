#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed & operator=(Fixed const &rhs);

		int getRawBits(void) const;

		int getFixedPointValue(void) const;

		void setRawBits(int const raw);

	private:
		int 				_fixedPointValue;
		static const int 	_fractionalBits;
};
#endif