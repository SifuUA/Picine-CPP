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

		Fixed & operator = (Fixed const &rhs);
		bool operator > (Fixed const &rhs) const;
		bool operator < (Fixed const &rhs) const;
		bool operator >= (Fixed const &rhs) const;
		bool operator <= (Fixed const &rhs) const;
		bool operator == (Fixed const &rhs) const;
		bool operator != (Fixed const &rhs) const;
		Fixed & operator + (Fixed const &rhs);
		Fixed & operator - (Fixed const &rhs);
		Fixed & operator * (Fixed const &rhs);
		Fixed & operator / (Fixed const &rhs);
		Fixed & operator ++ (int);
		Fixed & operator -- (int);


		int 	getRawBits(void) const;

		void	setRawBits(int const raw);

		float 	toFloat(void) const;

		int 	toInt(void) const;

		



	private:
		int 				_fixedPointValue;
		static const int 	_fractionalBits;
};

Fixed  	&min(Fixed &f1, Fixed &f2);
		Fixed  	&min(Fixed &f1, Fixed &f2);

std::ostream &operator<<(std::ostream & o, Fixed const &i);
#endif